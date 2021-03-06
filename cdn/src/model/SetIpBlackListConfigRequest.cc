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

#include <alibabacloud/cdn/model/SetIpBlackListConfigRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

SetIpBlackListConfigRequest::SetIpBlackListConfigRequest() :
	CdnRequest("SetIpBlackListConfig")
{}

SetIpBlackListConfigRequest::~SetIpBlackListConfigRequest()
{}

std::string SetIpBlackListConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetIpBlackListConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetIpBlackListConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetIpBlackListConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetIpBlackListConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetIpBlackListConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetIpBlackListConfigRequest::getBlockIps()const
{
	return blockIps_;
}

void SetIpBlackListConfigRequest::setBlockIps(const std::string& blockIps)
{
	blockIps_ = blockIps;
	setParameter("BlockIps", blockIps);
}

std::string SetIpBlackListConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetIpBlackListConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

