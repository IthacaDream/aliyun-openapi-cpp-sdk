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

#ifndef ALIBABACLOUD_ESS_MODEL_MODIFYALERTCONFIGREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_MODIFYALERTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/ess/EssRequest.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT ModifyAlertConfigRequest : public EssRequest
			{

			public:
				ModifyAlertConfigRequest();
				~ModifyAlertConfigRequest();

				int getSuccessConfig()const;
				void setSuccessConfig(int successConfig);
				int getRejectConfig()const;
				void setRejectConfig(int rejectConfig);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getFailConfig()const;
				void setFailConfig(int failConfig);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				int successConfig_;
				int rejectConfig_;
				std::string resourceOwnerAccount_;
				std::string scalingGroupId_;
				long ownerId_;
				int failConfig_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_MODIFYALERTCONFIGREQUEST_H_