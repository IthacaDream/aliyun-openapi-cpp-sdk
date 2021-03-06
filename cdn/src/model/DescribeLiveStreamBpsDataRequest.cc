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

#include <alibabacloud/cdn/model/DescribeLiveStreamBpsDataRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamBpsDataRequest::DescribeLiveStreamBpsDataRequest() :
	CdnRequest("DescribeLiveStreamBpsData")
{}

DescribeLiveStreamBpsDataRequest::~DescribeLiveStreamBpsDataRequest()
{}

std::string DescribeLiveStreamBpsDataRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamBpsDataRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DescribeLiveStreamBpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamBpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeLiveStreamBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeLiveStreamBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeLiveStreamBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamBpsDataRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamBpsDataRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string DescribeLiveStreamBpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamBpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

