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

#ifndef ALIBABACLOUD_RDS_MODEL_CLONEDBINSTANCERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_CLONEDBINSTANCERESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT CloneDBInstanceResult : public ServiceResult
			{
			public:


				CloneDBInstanceResult();
				explicit CloneDBInstanceResult(const std::string &payload);
				~CloneDBInstanceResult();
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getPort()const;
				void setPort(const std::string& port);
				std::string getOrderId()const;
				void setOrderId(const std::string& orderId);
				std::string getConnectionString()const;
				void setConnectionString(const std::string& connectionString);

			protected:
				void parse(const std::string &payload);
			private:
				std::string dBInstanceId_;
				std::string port_;
				std::string orderId_;
				std::string connectionString_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_CLONEDBINSTANCERESULT_H_