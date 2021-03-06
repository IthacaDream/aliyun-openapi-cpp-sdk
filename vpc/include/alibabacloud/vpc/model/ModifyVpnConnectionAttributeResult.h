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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYVPNCONNECTIONATTRIBUTERESULT_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYVPNCONNECTIONATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT ModifyVpnConnectionAttributeResult : public ServiceResult
			{
			public:
				struct IkeConfig
				{
					std::string ikeAuthAlg;
					std::string localId;
					std::string ikeEncAlg;
					std::string ikeVersion;
					std::string ikeMode;
					long ikeLifetime;
					std::string psk;
					std::string remoteId;
					std::string ikePfs;
				};
				struct IpsecConfig
				{
					std::string ipsecPfs;
					std::string ipsecEncAlg;
					std::string ipsecAuthAlg;
					long ipsecLifetime;
				};


				ModifyVpnConnectionAttributeResult();
				explicit ModifyVpnConnectionAttributeResult(const std::string &payload);
				~ModifyVpnConnectionAttributeResult();
				std::string getLocalSubnet()const;
				void setLocalSubnet(const std::string& localSubnet);
				bool getEffectImmediately()const;
				void setEffectImmediately(bool effectImmediately);
				std::string getRemoteSubnet()const;
				void setRemoteSubnet(const std::string& remoteSubnet);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getCustomerGatewayId()const;
				void setCustomerGatewayId(const std::string& customerGatewayId);
				std::string getVpnGatewayId()const;
				void setVpnGatewayId(const std::string& vpnGatewayId);
				std::vector<IpsecConfig> getIpsecConfig()const;
				void setIpsecConfig(const std::vector<IpsecConfig>& ipsecConfig);
				long getCreateTime()const;
				void setCreateTime(long createTime);
				std::string getVpnConnectionId()const;
				void setVpnConnectionId(const std::string& vpnConnectionId);
				std::vector<IkeConfig> getIkeConfig()const;
				void setIkeConfig(const std::vector<IkeConfig>& ikeConfig);
				std::string getName()const;
				void setName(const std::string& name);

			protected:
				void parse(const std::string &payload);
			private:
				std::string localSubnet_;
				bool effectImmediately_;
				std::string remoteSubnet_;
				std::string description_;
				std::string customerGatewayId_;
				std::string vpnGatewayId_;
				std::vector<IpsecConfig> ipsecConfig_;
				long createTime_;
				std::string vpnConnectionId_;
				std::vector<IkeConfig> ikeConfig_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYVPNCONNECTIONATTRIBUTERESULT_H_