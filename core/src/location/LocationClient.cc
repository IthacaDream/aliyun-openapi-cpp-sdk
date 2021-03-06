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

#include <alibabacloud/core/location/LocationClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;

LocationClient::LocationClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
}

LocationClient::LocationClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(credentialsProvider, configuration)
{
}

LocationClient::LocationClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
}

LocationClient::~LocationClient()
{}

CoreClient::EndpointOutcome LocationClient::endpoint()const
{
	return CoreClient::EndpointOutcome("location.aliyuncs.com");
}

LocationClient::DescribeEndpointsOutcome LocationClient::describeEndpoints(const Model::DescribeEndpointsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEndpointsOutcome(Model::DescribeEndpointsResult(outcome.result()));
	else
		return DescribeEndpointsOutcome(outcome.error());
}

void LocationClient::describeEndpointsAsync(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	std::async(std::launch::async,
		[this, request, handler, context]()
	{
		handler(this, request, describeEndpoints(request), context);
	});
}

LocationClient::DescribeEndpointsOutcomeCallable LocationClient::describeEndpointsCallable(const Model::DescribeEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEndpointsOutcome()>>(
		[this, request]()
	{
		return this->describeEndpoints(request);
	});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}