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

#include <alibabacloud/slb/model/StopLoadBalancerListenerRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

StopLoadBalancerListenerRequest::StopLoadBalancerListenerRequest() :
	SlbRequest("StopLoadBalancerListener")
{}

StopLoadBalancerListenerRequest::~StopLoadBalancerListenerRequest()
{}

std::string StopLoadBalancerListenerRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void StopLoadBalancerListenerRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long StopLoadBalancerListenerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StopLoadBalancerListenerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int StopLoadBalancerListenerRequest::getListenerPort()const
{
	return listenerPort_;
}

void StopLoadBalancerListenerRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string StopLoadBalancerListenerRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void StopLoadBalancerListenerRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string StopLoadBalancerListenerRequest::getRegionId()const
{
	return regionId_;
}

void StopLoadBalancerListenerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string StopLoadBalancerListenerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StopLoadBalancerListenerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string StopLoadBalancerListenerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void StopLoadBalancerListenerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long StopLoadBalancerListenerRequest::getOwnerId()const
{
	return ownerId_;
}

void StopLoadBalancerListenerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StopLoadBalancerListenerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StopLoadBalancerListenerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string StopLoadBalancerListenerRequest::getTags()const
{
	return tags_;
}

void StopLoadBalancerListenerRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

