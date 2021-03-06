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

#include <alibabacloud/ess/model/DeactivateScalingConfigurationRequest.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DeactivateScalingConfigurationRequest::DeactivateScalingConfigurationRequest() :
	EssRequest("DeactivateScalingConfiguration")
{}

DeactivateScalingConfigurationRequest::~DeactivateScalingConfigurationRequest()
{}

std::string DeactivateScalingConfigurationRequest::getScalingConfigurationId()const
{
	return scalingConfigurationId_;
}

void DeactivateScalingConfigurationRequest::setScalingConfigurationId(const std::string& scalingConfigurationId)
{
	scalingConfigurationId_ = scalingConfigurationId;
	setParameter("ScalingConfigurationId", scalingConfigurationId);
}

std::string DeactivateScalingConfigurationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeactivateScalingConfigurationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeactivateScalingConfigurationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeactivateScalingConfigurationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeactivateScalingConfigurationRequest::getOwnerId()const
{
	return ownerId_;
}

void DeactivateScalingConfigurationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeactivateScalingConfigurationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeactivateScalingConfigurationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

