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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBEACCOUNTATTRIBUTESRESULT_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBEACCOUNTATTRIBUTESRESULT_H_

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
			class ALIBABACLOUD_ESS_EXPORT DescribeAccountAttributesResult : public ServiceResult
			{
			public:


				DescribeAccountAttributesResult();
				explicit DescribeAccountAttributesResult(const std::string &payload);
				~DescribeAccountAttributesResult();
				int getMaxNumberOfScalingRules()const;
				void setMaxNumberOfScalingRules(int maxNumberOfScalingRules);
				int getMaxNumberOfScalingInstances()const;
				void setMaxNumberOfScalingInstances(int maxNumberOfScalingInstances);
				int getMaxNumberOfScheduledTasks()const;
				void setMaxNumberOfScheduledTasks(int maxNumberOfScheduledTasks);
				int getMaxNumberOfLoadBalancers()const;
				void setMaxNumberOfLoadBalancers(int maxNumberOfLoadBalancers);
				int getMaxNumberOfMinSize()const;
				void setMaxNumberOfMinSize(int maxNumberOfMinSize);
				int getMaxNumberOfScalingGroups()const;
				void setMaxNumberOfScalingGroups(int maxNumberOfScalingGroups);
				int getMaxNumberOfScalingConfigurations()const;
				void setMaxNumberOfScalingConfigurations(int maxNumberOfScalingConfigurations);
				int getMaxNumberOfDBInstances()const;
				void setMaxNumberOfDBInstances(int maxNumberOfDBInstances);
				int getMaxNumberOfMaxSize()const;
				void setMaxNumberOfMaxSize(int maxNumberOfMaxSize);

			protected:
				void parse(const std::string &payload);
			private:
				int maxNumberOfScalingRules_;
				int maxNumberOfScalingInstances_;
				int maxNumberOfScheduledTasks_;
				int maxNumberOfLoadBalancers_;
				int maxNumberOfMinSize_;
				int maxNumberOfScalingGroups_;
				int maxNumberOfScalingConfigurations_;
				int maxNumberOfDBInstances_;
				int maxNumberOfMaxSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBEACCOUNTATTRIBUTESRESULT_H_