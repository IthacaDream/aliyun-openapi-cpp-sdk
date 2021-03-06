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

#include <alibabacloud/slb/model/DeleteMasterSlaveVServerGroupRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DeleteMasterSlaveVServerGroupRequest::DeleteMasterSlaveVServerGroupRequest() :
	SlbRequest("DeleteMasterSlaveVServerGroup")
{}

DeleteMasterSlaveVServerGroupRequest::~DeleteMasterSlaveVServerGroupRequest()
{}

std::string DeleteMasterSlaveVServerGroupRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DeleteMasterSlaveVServerGroupRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DeleteMasterSlaveVServerGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteMasterSlaveVServerGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteMasterSlaveVServerGroupRequest::getMasterSlaveVServerGroupId()const
{
	return masterSlaveVServerGroupId_;
}

void DeleteMasterSlaveVServerGroupRequest::setMasterSlaveVServerGroupId(const std::string& masterSlaveVServerGroupId)
{
	masterSlaveVServerGroupId_ = masterSlaveVServerGroupId;
	setParameter("MasterSlaveVServerGroupId", masterSlaveVServerGroupId);
}

std::string DeleteMasterSlaveVServerGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteMasterSlaveVServerGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteMasterSlaveVServerGroupRequest::getRegionId()const
{
	return regionId_;
}

void DeleteMasterSlaveVServerGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteMasterSlaveVServerGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteMasterSlaveVServerGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteMasterSlaveVServerGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteMasterSlaveVServerGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteMasterSlaveVServerGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteMasterSlaveVServerGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteMasterSlaveVServerGroupRequest::getTags()const
{
	return tags_;
}

void DeleteMasterSlaveVServerGroupRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

