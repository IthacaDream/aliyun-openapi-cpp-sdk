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

#include <alibabacloud/cdn/model/DescribeTopDomainsByFlowRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeTopDomainsByFlowRequest::DescribeTopDomainsByFlowRequest() :
	CdnRequest("DescribeTopDomainsByFlow")
{}

DescribeTopDomainsByFlowRequest::~DescribeTopDomainsByFlowRequest()
{}

std::string DescribeTopDomainsByFlowRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeTopDomainsByFlowRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

long DescribeTopDomainsByFlowRequest::getLimit()const
{
	return limit_;
}

void DescribeTopDomainsByFlowRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::string DescribeTopDomainsByFlowRequest::getEndTime()const
{
	return endTime_;
}

void DescribeTopDomainsByFlowRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeTopDomainsByFlowRequest::getStartTime()const
{
	return startTime_;
}

void DescribeTopDomainsByFlowRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeTopDomainsByFlowRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTopDomainsByFlowRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTopDomainsByFlowRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTopDomainsByFlowRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

