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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGACTIVITIESRESULT_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGACTIVITIESRESULT_H_

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
			class ALIBABACLOUD_ESS_EXPORT DescribeScalingActivitiesResult : public ServiceResult
			{
			public:
				struct ScalingActivity
				{
					int progress;
					std::string description;
					std::string endTime;
					std::string attachedCapacity;
					std::string scalingActivityId;
					std::string scalingGroupId;
					std::string cause;
					std::string startTime;
					std::string totalCapacity;
					std::string statusCode;
					std::string autoCreatedCapacity;
					std::string statusMessage;
				};


				DescribeScalingActivitiesResult();
				explicit DescribeScalingActivitiesResult(const std::string &payload);
				~DescribeScalingActivitiesResult();
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::vector<ScalingActivity> getScalingActivities()const;
				void setScalingActivities(const std::vector<ScalingActivity>& scalingActivities);

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ScalingActivity> scalingActivities_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGACTIVITIESRESULT_H_