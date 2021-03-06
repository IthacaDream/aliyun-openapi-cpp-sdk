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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYSECURITYGROUPPOLICYREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYSECURITYGROUPPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/ecs/EcsRequest.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT ModifySecurityGroupPolicyRequest : public EcsRequest
			{

			public:
				ModifySecurityGroupPolicyRequest();
				~ModifySecurityGroupPolicyRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInnerAccessPolicy()const;
				void setInnerAccessPolicy(const std::string& innerAccessPolicy);

            private:
				long resourceOwnerId_;
				std::string regionId_;
				std::string clientToken_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string securityGroupId_;
				long ownerId_;
				std::string innerAccessPolicy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYSECURITYGROUPPOLICYREQUEST_H_