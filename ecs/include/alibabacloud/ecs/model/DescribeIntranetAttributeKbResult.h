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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINTRANETATTRIBUTEKBRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINTRANETATTRIBUTEKBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeIntranetAttributeKbResult : public ServiceResult
			{
			public:


				DescribeIntranetAttributeKbResult();
				explicit DescribeIntranetAttributeKbResult(const std::string &payload);
				~DescribeIntranetAttributeKbResult();
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getIntranetMaxBandwidthOut()const;
				void setIntranetMaxBandwidthOut(int intranetMaxBandwidthOut);
				std::string getVlanId()const;
				void setVlanId(const std::string& vlanId);
				std::string getIntranetIpAddress()const;
				void setIntranetIpAddress(const std::string& intranetIpAddress);
				int getIntranetMaxBandwidthIn()const;
				void setIntranetMaxBandwidthIn(int intranetMaxBandwidthIn);

			protected:
				void parse(const std::string &payload);
			private:
				std::string instanceId_;
				int intranetMaxBandwidthOut_;
				std::string vlanId_;
				std::string intranetIpAddress_;
				int intranetMaxBandwidthIn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINTRANETATTRIBUTEKBRESULT_H_