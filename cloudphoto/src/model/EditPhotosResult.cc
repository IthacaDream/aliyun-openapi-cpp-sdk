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

#include <alibabacloud/cloudphoto/model/EditPhotosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

EditPhotosResult::EditPhotosResult() :
	ServiceResult()
{}

EditPhotosResult::EditPhotosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

EditPhotosResult::~EditPhotosResult()
{}

void EditPhotosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allResults = value["Results"]["Result"];
	for (auto value : allResults)
	{
		Result resultObject;
		resultObject.id = std::stol(value["Id"].asString());
		resultObject.code = value["Code"].asString();
		resultObject.message = value["Message"].asString();
		results_.push_back(resultObject);
	}
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	action_ = value["Action"].asString();

}

std::string EditPhotosResult::getAction()const
{
	return action_;
}

void EditPhotosResult::setAction(const std::string& action)
{
	action_ = action;
}

std::string EditPhotosResult::getMessage()const
{
	return message_;
}

void EditPhotosResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string EditPhotosResult::getCode()const
{
	return code_;
}

void EditPhotosResult::setCode(const std::string& code)
{
	code_ = code;
}

