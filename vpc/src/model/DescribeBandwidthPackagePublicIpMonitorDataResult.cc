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

#include <alibabacloud/vpc/model/DescribeBandwidthPackagePublicIpMonitorDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeBandwidthPackagePublicIpMonitorDataResult::DescribeBandwidthPackagePublicIpMonitorDataResult() :
	ServiceResult()
{}

DescribeBandwidthPackagePublicIpMonitorDataResult::DescribeBandwidthPackagePublicIpMonitorDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBandwidthPackagePublicIpMonitorDataResult::~DescribeBandwidthPackagePublicIpMonitorDataResult()
{}

void DescribeBandwidthPackagePublicIpMonitorDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allMonitorDatas = value["MonitorDatas"]["MonitorData"];
	for (auto value : allMonitorDatas)
	{
		MonitorData monitorDataObject;
		monitorDataObject.rX = std::stol(value["RX"].asString());
		monitorDataObject.tX = std::stol(value["TX"].asString());
		monitorDataObject.receivedBandwidth = std::stol(value["ReceivedBandwidth"].asString());
		monitorDataObject.transportedBandwidth = std::stol(value["TransportedBandwidth"].asString());
		monitorDataObject.flow = std::stol(value["Flow"].asString());
		monitorDataObject.bandwidth = std::stol(value["Bandwidth"].asString());
		monitorDataObject.packets = std::stol(value["Packets"].asString());
		monitorDataObject.timeStamp = value["TimeStamp"].asString();
		monitorDatas_.push_back(monitorDataObject);
	}

}

