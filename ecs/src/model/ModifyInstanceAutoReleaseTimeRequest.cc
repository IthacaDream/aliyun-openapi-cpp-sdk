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

#include <alibabacloud/ecs/model/ModifyInstanceAutoReleaseTimeRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

ModifyInstanceAutoReleaseTimeRequest::ModifyInstanceAutoReleaseTimeRequest() :
	EcsRequest("ModifyInstanceAutoReleaseTime")
{}

ModifyInstanceAutoReleaseTimeRequest::~ModifyInstanceAutoReleaseTimeRequest()
{}

long ModifyInstanceAutoReleaseTimeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceAutoReleaseTimeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceAutoReleaseTimeRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceAutoReleaseTimeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyInstanceAutoReleaseTimeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceAutoReleaseTimeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceAutoReleaseTimeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceAutoReleaseTimeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyInstanceAutoReleaseTimeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceAutoReleaseTimeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyInstanceAutoReleaseTimeRequest::getAutoReleaseTime()const
{
	return autoReleaseTime_;
}

void ModifyInstanceAutoReleaseTimeRequest::setAutoReleaseTime(const std::string& autoReleaseTime)
{
	autoReleaseTime_ = autoReleaseTime;
	setParameter("AutoReleaseTime", autoReleaseTime);
}

long ModifyInstanceAutoReleaseTimeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceAutoReleaseTimeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

