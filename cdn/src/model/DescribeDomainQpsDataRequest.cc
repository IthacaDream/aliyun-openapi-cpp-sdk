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

#include <alibabacloud/cdn/model/DescribeDomainQpsDataRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainQpsDataRequest::DescribeDomainQpsDataRequest() :
	CdnRequest("DescribeDomainQpsData")
{}

DescribeDomainQpsDataRequest::~DescribeDomainQpsDataRequest()
{}

std::string DescribeDomainQpsDataRequest::getFixTimeGap()const
{
	return fixTimeGap_;
}

void DescribeDomainQpsDataRequest::setFixTimeGap(const std::string& fixTimeGap)
{
	fixTimeGap_ = fixTimeGap;
	setParameter("FixTimeGap", fixTimeGap);
}

std::string DescribeDomainQpsDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDomainQpsDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setParameter("TimeMerge", timeMerge);
}

std::string DescribeDomainQpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainQpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainQpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainQpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainQpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainQpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainQpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainQpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainQpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainQpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

long DescribeDomainQpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainQpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainQpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainQpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainQpsDataRequest::getDomainType()const
{
	return domainType_;
}

void DescribeDomainQpsDataRequest::setDomainType(const std::string& domainType)
{
	domainType_ = domainType;
	setParameter("DomainType", domainType);
}

std::string DescribeDomainQpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainQpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainQpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainQpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

