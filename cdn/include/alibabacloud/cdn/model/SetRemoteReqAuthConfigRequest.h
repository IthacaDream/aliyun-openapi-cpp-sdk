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

#ifndef ALIBABACLOUD_CDN_MODEL_SETREMOTEREQAUTHCONFIGREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_SETREMOTEREQAUTHCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/cdn/CdnRequest.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT SetRemoteReqAuthConfigRequest : public CdnRequest
			{

			public:
				SetRemoteReqAuthConfigRequest();
				~SetRemoteReqAuthConfigRequest();

				std::string getAuthPath()const;
				void setAuthPath(const std::string& authPath);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getAuthEnable()const;
				void setAuthEnable(const std::string& authEnable);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTimeOut()const;
				void setTimeOut(const std::string& timeOut);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAuthType()const;
				void setAuthType(const std::string& authType);
				std::string getAuthProvider()const;
				void setAuthProvider(const std::string& authProvider);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getAuthCrash()const;
				void setAuthCrash(const std::string& authCrash);
				std::string getAuthAddr()const;
				void setAuthAddr(const std::string& authAddr);
				std::string getAuthFileType()const;
				void setAuthFileType(const std::string& authFileType);

            private:
				std::string authPath_;
				std::string domainName_;
				std::string authEnable_;
				long ownerId_;
				std::string timeOut_;
				std::string accessKeyId_;
				std::string authType_;
				std::string authProvider_;
				std::string securityToken_;
				std::string authCrash_;
				std::string authAddr_;
				std::string authFileType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_SETREMOTEREQAUTHCONFIGREQUEST_H_