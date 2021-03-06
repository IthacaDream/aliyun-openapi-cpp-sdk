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

#include <alibabacloud/slb/model/SetLoadBalancerAutoReleaseTimeRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

SetLoadBalancerAutoReleaseTimeRequest::SetLoadBalancerAutoReleaseTimeRequest() :
	SlbRequest("SetLoadBalancerAutoReleaseTime")
{}

SetLoadBalancerAutoReleaseTimeRequest::~SetLoadBalancerAutoReleaseTimeRequest()
{}

std::string SetLoadBalancerAutoReleaseTimeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetLoadBalancerAutoReleaseTimeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long SetLoadBalancerAutoReleaseTimeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetLoadBalancerAutoReleaseTimeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SetLoadBalancerAutoReleaseTimeRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void SetLoadBalancerAutoReleaseTimeRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string SetLoadBalancerAutoReleaseTimeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetLoadBalancerAutoReleaseTimeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetLoadBalancerAutoReleaseTimeRequest::getRegionId()const
{
	return regionId_;
}

void SetLoadBalancerAutoReleaseTimeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SetLoadBalancerAutoReleaseTimeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetLoadBalancerAutoReleaseTimeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SetLoadBalancerAutoReleaseTimeRequest::getAutoReleaseTime()const
{
	return autoReleaseTime_;
}

void SetLoadBalancerAutoReleaseTimeRequest::setAutoReleaseTime(long autoReleaseTime)
{
	autoReleaseTime_ = autoReleaseTime;
	setParameter("AutoReleaseTime", std::to_string(autoReleaseTime));
}

long SetLoadBalancerAutoReleaseTimeRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLoadBalancerAutoReleaseTimeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetLoadBalancerAutoReleaseTimeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetLoadBalancerAutoReleaseTimeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetLoadBalancerAutoReleaseTimeRequest::getTags()const
{
	return tags_;
}

void SetLoadBalancerAutoReleaseTimeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

