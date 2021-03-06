/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ecs/model/ModifyRouterInterfaceAttributeRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

ModifyRouterInterfaceAttributeRequest::ModifyRouterInterfaceAttributeRequest() :
	EcsRequest("ModifyRouterInterfaceAttribute")
{}

ModifyRouterInterfaceAttributeRequest::~ModifyRouterInterfaceAttributeRequest()
{}

std::string ModifyRouterInterfaceAttributeRequest::getOppositeRouterId()const
{
	return oppositeRouterId_;
}

void ModifyRouterInterfaceAttributeRequest::setOppositeRouterId(const std::string& oppositeRouterId)
{
	oppositeRouterId_ = oppositeRouterId;
	setParameter("OppositeRouterId", oppositeRouterId);
}

long ModifyRouterInterfaceAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyRouterInterfaceAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyRouterInterfaceAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyRouterInterfaceAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyRouterInterfaceAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyRouterInterfaceAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyRouterInterfaceAttributeRequest::getHealthCheckTargetIp()const
{
	return healthCheckTargetIp_;
}

void ModifyRouterInterfaceAttributeRequest::setHealthCheckTargetIp(const std::string& healthCheckTargetIp)
{
	healthCheckTargetIp_ = healthCheckTargetIp;
	setParameter("HealthCheckTargetIp", healthCheckTargetIp);
}

long ModifyRouterInterfaceAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyRouterInterfaceAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyRouterInterfaceAttributeRequest::getRouterInterfaceId()const
{
	return routerInterfaceId_;
}

void ModifyRouterInterfaceAttributeRequest::setRouterInterfaceId(const std::string& routerInterfaceId)
{
	routerInterfaceId_ = routerInterfaceId;
	setParameter("RouterInterfaceId", routerInterfaceId);
}

long ModifyRouterInterfaceAttributeRequest::getOppositeInterfaceOwnerId()const
{
	return oppositeInterfaceOwnerId_;
}

void ModifyRouterInterfaceAttributeRequest::setOppositeInterfaceOwnerId(long oppositeInterfaceOwnerId)
{
	oppositeInterfaceOwnerId_ = oppositeInterfaceOwnerId;
	setParameter("OppositeInterfaceOwnerId", std::to_string(oppositeInterfaceOwnerId));
}

std::string ModifyRouterInterfaceAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyRouterInterfaceAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyRouterInterfaceAttributeRequest::getHealthCheckSourceIp()const
{
	return healthCheckSourceIp_;
}

void ModifyRouterInterfaceAttributeRequest::setHealthCheckSourceIp(const std::string& healthCheckSourceIp)
{
	healthCheckSourceIp_ = healthCheckSourceIp;
	setParameter("HealthCheckSourceIp", healthCheckSourceIp);
}

std::string ModifyRouterInterfaceAttributeRequest::getName()const
{
	return name_;
}

void ModifyRouterInterfaceAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyRouterInterfaceAttributeRequest::getOppositeRouterType()const
{
	return oppositeRouterType_;
}

void ModifyRouterInterfaceAttributeRequest::setOppositeRouterType(const std::string& oppositeRouterType)
{
	oppositeRouterType_ = oppositeRouterType;
	setParameter("OppositeRouterType", oppositeRouterType);
}

std::string ModifyRouterInterfaceAttributeRequest::getOppositeInterfaceId()const
{
	return oppositeInterfaceId_;
}

void ModifyRouterInterfaceAttributeRequest::setOppositeInterfaceId(const std::string& oppositeInterfaceId)
{
	oppositeInterfaceId_ = oppositeInterfaceId;
	setParameter("OppositeInterfaceId", oppositeInterfaceId);
}

