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

#ifndef ALIBABACLOUD_CMS_MODEL_NODEPROCESSDELETEREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_NODEPROCESSDELETEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/cms/CmsRequest.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT NodeProcessDeleteRequest : public CmsRequest
			{

			public:
				NodeProcessDeleteRequest();
				~NodeProcessDeleteRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getId()const;
				void setId(const std::string& id);

            private:
				std::string instanceId_;
				std::string name_;
				std::string id_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_NODEPROCESSDELETEREQUEST_H_