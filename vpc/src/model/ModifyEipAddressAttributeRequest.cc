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

#include <alibabacloud/vpc/model/ModifyEipAddressAttributeRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifyEipAddressAttributeRequest::ModifyEipAddressAttributeRequest() :
	VpcRequest("ModifyEipAddressAttribute")
{}

ModifyEipAddressAttributeRequest::~ModifyEipAddressAttributeRequest()
{}

long ModifyEipAddressAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyEipAddressAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyEipAddressAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyEipAddressAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyEipAddressAttributeRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifyEipAddressAttributeRequest::setBandwidth(const std::string& bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", bandwidth);
}

std::string ModifyEipAddressAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyEipAddressAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyEipAddressAttributeRequest::getName()const
{
	return name_;
}

void ModifyEipAddressAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyEipAddressAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyEipAddressAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyEipAddressAttributeRequest::getAllocationId()const
{
	return allocationId_;
}

void ModifyEipAddressAttributeRequest::setAllocationId(const std::string& allocationId)
{
	allocationId_ = allocationId;
	setParameter("AllocationId", allocationId);
}

long ModifyEipAddressAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyEipAddressAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

