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

#include <alibabacloud/ecs/model/DescribeVirtualBorderRoutersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeVirtualBorderRoutersResult::DescribeVirtualBorderRoutersResult() :
	ServiceResult()
{}

DescribeVirtualBorderRoutersResult::DescribeVirtualBorderRoutersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVirtualBorderRoutersResult::~DescribeVirtualBorderRoutersResult()
{}

void DescribeVirtualBorderRoutersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allVirtualBorderRouterSet = value["VirtualBorderRouterSet"]["VirtualBorderRouterType"];
	for (auto value : allVirtualBorderRouterSet)
	{
		VirtualBorderRouterType virtualBorderRouterTypeObject;
		virtualBorderRouterTypeObject.vbrId = value["VbrId"].asString();
		virtualBorderRouterTypeObject.creationTime = value["CreationTime"].asString();
		virtualBorderRouterTypeObject.activationTime = value["ActivationTime"].asString();
		virtualBorderRouterTypeObject.terminationTime = value["TerminationTime"].asString();
		virtualBorderRouterTypeObject.recoveryTime = value["RecoveryTime"].asString();
		virtualBorderRouterTypeObject.status = value["Status"].asString();
		virtualBorderRouterTypeObject.vlanId = std::stoi(value["VlanId"].asString());
		virtualBorderRouterTypeObject.circuitCode = value["CircuitCode"].asString();
		virtualBorderRouterTypeObject.routeTableId = value["RouteTableId"].asString();
		virtualBorderRouterTypeObject.vlanInterfaceId = value["VlanInterfaceId"].asString();
		virtualBorderRouterTypeObject.localGatewayIp = value["LocalGatewayIp"].asString();
		virtualBorderRouterTypeObject.peerGatewayIp = value["PeerGatewayIp"].asString();
		virtualBorderRouterTypeObject.peeringSubnetMask = value["PeeringSubnetMask"].asString();
		virtualBorderRouterTypeObject.physicalConnectionId = value["PhysicalConnectionId"].asString();
		virtualBorderRouterTypeObject.physicalConnectionStatus = value["PhysicalConnectionStatus"].asString();
		virtualBorderRouterTypeObject.physicalConnectionBusinessStatus = value["PhysicalConnectionBusinessStatus"].asString();
		virtualBorderRouterTypeObject.physicalConnectionOwnerUid = value["PhysicalConnectionOwnerUid"].asString();
		virtualBorderRouterTypeObject.accessPointId = value["AccessPointId"].asString();
		virtualBorderRouterTypeObject.name = value["Name"].asString();
		virtualBorderRouterTypeObject.description = value["Description"].asString();
		virtualBorderRouterSet_.push_back(virtualBorderRouterTypeObject);
	}
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());
	totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVirtualBorderRoutersResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeVirtualBorderRoutersResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeVirtualBorderRoutersResult::getPageSize()const
{
	return pageSize_;
}

void DescribeVirtualBorderRoutersResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeVirtualBorderRoutersResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVirtualBorderRoutersResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

