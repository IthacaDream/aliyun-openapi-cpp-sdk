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

#include <alibabacloud/cms/model/UpdateAlarmRequest.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

UpdateAlarmRequest::UpdateAlarmRequest() :
	CmsRequest("UpdateAlarm")
{}

UpdateAlarmRequest::~UpdateAlarmRequest()
{}

std::string UpdateAlarmRequest::getCallby_cms_owner()const
{
	return callby_cms_owner_;
}

void UpdateAlarmRequest::setCallby_cms_owner(const std::string& callby_cms_owner)
{
	callby_cms_owner_ = callby_cms_owner;
	setParameter("Callby_cms_owner", callby_cms_owner);
}

int UpdateAlarmRequest::getPeriod()const
{
	return period_;
}

void UpdateAlarmRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string UpdateAlarmRequest::getWebhook()const
{
	return webhook_;
}

void UpdateAlarmRequest::setWebhook(const std::string& webhook)
{
	webhook_ = webhook;
	setParameter("Webhook", webhook);
}

std::string UpdateAlarmRequest::getContactGroups()const
{
	return contactGroups_;
}

void UpdateAlarmRequest::setContactGroups(const std::string& contactGroups)
{
	contactGroups_ = contactGroups;
	setParameter("ContactGroups", contactGroups);
}

int UpdateAlarmRequest::getEndTime()const
{
	return endTime_;
}

void UpdateAlarmRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string UpdateAlarmRequest::getThreshold()const
{
	return threshold_;
}

void UpdateAlarmRequest::setThreshold(const std::string& threshold)
{
	threshold_ = threshold;
	setParameter("Threshold", threshold);
}

int UpdateAlarmRequest::getStartTime()const
{
	return startTime_;
}

void UpdateAlarmRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string UpdateAlarmRequest::getName()const
{
	return name_;
}

void UpdateAlarmRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int UpdateAlarmRequest::getEvaluationCount()const
{
	return evaluationCount_;
}

void UpdateAlarmRequest::setEvaluationCount(int evaluationCount)
{
	evaluationCount_ = evaluationCount;
	setParameter("EvaluationCount", std::to_string(evaluationCount));
}

int UpdateAlarmRequest::getSilenceTime()const
{
	return silenceTime_;
}

void UpdateAlarmRequest::setSilenceTime(int silenceTime)
{
	silenceTime_ = silenceTime;
	setParameter("SilenceTime", std::to_string(silenceTime));
}

std::string UpdateAlarmRequest::getId()const
{
	return id_;
}

void UpdateAlarmRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

int UpdateAlarmRequest::getNotifyType()const
{
	return notifyType_;
}

void UpdateAlarmRequest::setNotifyType(int notifyType)
{
	notifyType_ = notifyType;
	setParameter("NotifyType", std::to_string(notifyType));
}

std::string UpdateAlarmRequest::getComparisonOperator()const
{
	return comparisonOperator_;
}

void UpdateAlarmRequest::setComparisonOperator(const std::string& comparisonOperator)
{
	comparisonOperator_ = comparisonOperator;
	setParameter("ComparisonOperator", comparisonOperator);
}

std::string UpdateAlarmRequest::getStatistics()const
{
	return statistics_;
}

void UpdateAlarmRequest::setStatistics(const std::string& statistics)
{
	statistics_ = statistics;
	setParameter("Statistics", statistics);
}

