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

#include <alibabacloud/cdn/model/DescribeLiveStreamsPublishListRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamsPublishListRequest::DescribeLiveStreamsPublishListRequest() :
	CdnRequest("DescribeLiveStreamsPublishList")
{}

DescribeLiveStreamsPublishListRequest::~DescribeLiveStreamsPublishListRequest()
{}

std::string DescribeLiveStreamsPublishListRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamsPublishListRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DescribeLiveStreamsPublishListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamsPublishListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamsPublishListRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamsPublishListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeLiveStreamsPublishListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveStreamsPublishListRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeLiveStreamsPublishListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamsPublishListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeLiveStreamsPublishListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamsPublishListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeLiveStreamsPublishListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamsPublishListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamsPublishListRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamsPublishListRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

long DescribeLiveStreamsPublishListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLiveStreamsPublishListRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeLiveStreamsPublishListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamsPublishListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

