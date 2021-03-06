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

#include <alibabacloud/rds/model/CheckRecoveryConditionsRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CheckRecoveryConditionsRequest::CheckRecoveryConditionsRequest() :
	RdsRequest("CheckRecoveryConditions")
{}

CheckRecoveryConditionsRequest::~CheckRecoveryConditionsRequest()
{}

long CheckRecoveryConditionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CheckRecoveryConditionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CheckRecoveryConditionsRequest::getRestoreTime()const
{
	return restoreTime_;
}

void CheckRecoveryConditionsRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setParameter("RestoreTime", restoreTime);
}

std::string CheckRecoveryConditionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CheckRecoveryConditionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CheckRecoveryConditionsRequest::getBackupFile()const
{
	return backupFile_;
}

void CheckRecoveryConditionsRequest::setBackupFile(const std::string& backupFile)
{
	backupFile_ = backupFile;
	setParameter("BackupFile", backupFile);
}

std::string CheckRecoveryConditionsRequest::getBackupId()const
{
	return backupId_;
}

void CheckRecoveryConditionsRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setParameter("BackupId", backupId);
}

std::string CheckRecoveryConditionsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CheckRecoveryConditionsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CheckRecoveryConditionsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CheckRecoveryConditionsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long CheckRecoveryConditionsRequest::getOwnerId()const
{
	return ownerId_;
}

void CheckRecoveryConditionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CheckRecoveryConditionsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckRecoveryConditionsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

