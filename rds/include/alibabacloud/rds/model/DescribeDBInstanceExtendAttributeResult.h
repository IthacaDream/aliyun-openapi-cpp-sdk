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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEEXTENDATTRIBUTERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEEXTENDATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeDBInstanceExtendAttributeResult : public ServiceResult
			{
			public:


				DescribeDBInstanceExtendAttributeResult();
				explicit DescribeDBInstanceExtendAttributeResult(const std::string &payload);
				~DescribeDBInstanceExtendAttributeResult();
				std::string getTempUpgradeRecoveryMaxIOPS()const;
				void setTempUpgradeRecoveryMaxIOPS(const std::string& tempUpgradeRecoveryMaxIOPS);
				int getTempUpgradeRecoveryMemory()const;
				void setTempUpgradeRecoveryMemory(int tempUpgradeRecoveryMemory);
				std::string getTempUpgradeRecoveryTime()const;
				void setTempUpgradeRecoveryTime(const std::string& tempUpgradeRecoveryTime);
				std::string getTempUpgradeRecoveryMaxConnections()const;
				void setTempUpgradeRecoveryMaxConnections(const std::string& tempUpgradeRecoveryMaxConnections);
				int getTempUpgradeRecoveryCpu()const;
				void setTempUpgradeRecoveryCpu(int tempUpgradeRecoveryCpu);
				std::string getTempUpgradeTimeStart()const;
				void setTempUpgradeTimeStart(const std::string& tempUpgradeTimeStart);
				std::string getTempUpgradeTimeEnd()const;
				void setTempUpgradeTimeEnd(const std::string& tempUpgradeTimeEnd);
				bool getCanTempUpgrade()const;
				void setCanTempUpgrade(bool canTempUpgrade);
				std::string getTempUpgradeRecoveryClass()const;
				void setTempUpgradeRecoveryClass(const std::string& tempUpgradeRecoveryClass);

			protected:
				void parse(const std::string &payload);
			private:
				std::string tempUpgradeRecoveryMaxIOPS_;
				int tempUpgradeRecoveryMemory_;
				std::string tempUpgradeRecoveryTime_;
				std::string tempUpgradeRecoveryMaxConnections_;
				int tempUpgradeRecoveryCpu_;
				std::string tempUpgradeTimeStart_;
				std::string tempUpgradeTimeEnd_;
				bool canTempUpgrade_;
				std::string tempUpgradeRecoveryClass_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEEXTENDATTRIBUTERESULT_H_