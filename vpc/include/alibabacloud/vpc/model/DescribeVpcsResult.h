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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVPCSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVPCSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeVpcsResult : public ServiceResult
			{
			public:
				struct Vpc
				{
					std::string status;
					bool isDefault;
					std::string description;
					std::vector<std::string> vSwitchIds;
					std::string cidrBlock;
					std::vector<std::string> routerTableIds;
					std::vector<std::string> userCidrs;
					std::string vRouterId;
					std::vector<std::string> natGatewayIds;
					std::string vpcId;
					std::string creationTime;
					std::string vpcName;
					std::string regionId;
				};


				DescribeVpcsResult();
				explicit DescribeVpcsResult(const std::string &payload);
				~DescribeVpcsResult();
				std::vector<Vpc> getVpcs()const;
				void setVpcs(const std::vector<Vpc>& vpcs);
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Vpc> vpcs_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVPCSRESULT_H_