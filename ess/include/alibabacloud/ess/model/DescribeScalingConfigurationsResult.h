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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGCONFIGURATIONSRESULT_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGCONFIGURATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeScalingConfigurationsResult : public ServiceResult
			{
			public:
				struct ScalingConfiguration
				{
					struct DataDisk
					{
						std::string snapshotId;
						std::string category;
						int size;
						std::string device;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string scalingConfigurationName;
					std::vector<ScalingConfiguration::DataDisk> dataDisks;
					int systemDiskSize;
					std::string userData;
					std::string lifecycleState;
					std::string ramRoleName;
					std::string imageId;
					std::vector<std::string> instanceTypes;
					std::string instanceType;
					std::vector<ScalingConfiguration::Tag> tags;
					std::string keyPairName;
					int loadBalancerWeight;
					std::string ioOptimized;
					std::string scalingGroupId;
					std::string securityGroupId;
					std::string internetChargeType;
					std::string systemDiskCategory;
					std::string instanceName;
					std::string deploymentSetId;
					int internetMaxBandwidthOut;
					int internetMaxBandwidthIn;
					std::string creationTime;
					std::string instanceGeneration;
					std::string scalingConfigurationId;
					std::string securityEnhancementStrategy;
				};


				DescribeScalingConfigurationsResult();
				explicit DescribeScalingConfigurationsResult(const std::string &payload);
				~DescribeScalingConfigurationsResult();
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::vector<ScalingConfiguration> getScalingConfigurations()const;
				void setScalingConfigurations(const std::vector<ScalingConfiguration>& scalingConfigurations);

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ScalingConfiguration> scalingConfigurations_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGCONFIGURATIONSRESULT_H_