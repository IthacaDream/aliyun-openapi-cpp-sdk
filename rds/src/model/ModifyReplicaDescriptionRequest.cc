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

#include <alibabacloud/rds/model/ModifyReplicaDescriptionRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ModifyReplicaDescriptionRequest::ModifyReplicaDescriptionRequest() :
	RdsRequest("ModifyReplicaDescription")
{}

ModifyReplicaDescriptionRequest::~ModifyReplicaDescriptionRequest()
{}

std::string ModifyReplicaDescriptionRequest::getReplicaDescription()const
{
	return replicaDescription_;
}

void ModifyReplicaDescriptionRequest::setReplicaDescription(const std::string& replicaDescription)
{
	replicaDescription_ = replicaDescription;
	setParameter("ReplicaDescription", replicaDescription);
}

long ModifyReplicaDescriptionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyReplicaDescriptionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyReplicaDescriptionRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyReplicaDescriptionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyReplicaDescriptionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyReplicaDescriptionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyReplicaDescriptionRequest::getRegionId()const
{
	return regionId_;
}

void ModifyReplicaDescriptionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyReplicaDescriptionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyReplicaDescriptionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyReplicaDescriptionRequest::getReplicaId()const
{
	return replicaId_;
}

void ModifyReplicaDescriptionRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setParameter("ReplicaId", replicaId);
}

long ModifyReplicaDescriptionRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyReplicaDescriptionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyReplicaDescriptionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyReplicaDescriptionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

