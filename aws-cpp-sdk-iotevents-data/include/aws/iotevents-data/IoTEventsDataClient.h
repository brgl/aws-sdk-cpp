﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/IoTEventsDataErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotevents-data/model/BatchAcknowledgeAlarmResult.h>
#include <aws/iotevents-data/model/BatchDisableAlarmResult.h>
#include <aws/iotevents-data/model/BatchEnableAlarmResult.h>
#include <aws/iotevents-data/model/BatchPutMessageResult.h>
#include <aws/iotevents-data/model/BatchResetAlarmResult.h>
#include <aws/iotevents-data/model/BatchSnoozeAlarmResult.h>
#include <aws/iotevents-data/model/BatchUpdateDetectorResult.h>
#include <aws/iotevents-data/model/DescribeAlarmResult.h>
#include <aws/iotevents-data/model/DescribeDetectorResult.h>
#include <aws/iotevents-data/model/ListAlarmsResult.h>
#include <aws/iotevents-data/model/ListDetectorsResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace IoTEventsData
{

namespace Model
{
        class BatchAcknowledgeAlarmRequest;
        class BatchDisableAlarmRequest;
        class BatchEnableAlarmRequest;
        class BatchPutMessageRequest;
        class BatchResetAlarmRequest;
        class BatchSnoozeAlarmRequest;
        class BatchUpdateDetectorRequest;
        class DescribeAlarmRequest;
        class DescribeDetectorRequest;
        class ListAlarmsRequest;
        class ListDetectorsRequest;

        typedef Aws::Utils::Outcome<BatchAcknowledgeAlarmResult, IoTEventsDataError> BatchAcknowledgeAlarmOutcome;
        typedef Aws::Utils::Outcome<BatchDisableAlarmResult, IoTEventsDataError> BatchDisableAlarmOutcome;
        typedef Aws::Utils::Outcome<BatchEnableAlarmResult, IoTEventsDataError> BatchEnableAlarmOutcome;
        typedef Aws::Utils::Outcome<BatchPutMessageResult, IoTEventsDataError> BatchPutMessageOutcome;
        typedef Aws::Utils::Outcome<BatchResetAlarmResult, IoTEventsDataError> BatchResetAlarmOutcome;
        typedef Aws::Utils::Outcome<BatchSnoozeAlarmResult, IoTEventsDataError> BatchSnoozeAlarmOutcome;
        typedef Aws::Utils::Outcome<BatchUpdateDetectorResult, IoTEventsDataError> BatchUpdateDetectorOutcome;
        typedef Aws::Utils::Outcome<DescribeAlarmResult, IoTEventsDataError> DescribeAlarmOutcome;
        typedef Aws::Utils::Outcome<DescribeDetectorResult, IoTEventsDataError> DescribeDetectorOutcome;
        typedef Aws::Utils::Outcome<ListAlarmsResult, IoTEventsDataError> ListAlarmsOutcome;
        typedef Aws::Utils::Outcome<ListDetectorsResult, IoTEventsDataError> ListDetectorsOutcome;

        typedef std::future<BatchAcknowledgeAlarmOutcome> BatchAcknowledgeAlarmOutcomeCallable;
        typedef std::future<BatchDisableAlarmOutcome> BatchDisableAlarmOutcomeCallable;
        typedef std::future<BatchEnableAlarmOutcome> BatchEnableAlarmOutcomeCallable;
        typedef std::future<BatchPutMessageOutcome> BatchPutMessageOutcomeCallable;
        typedef std::future<BatchResetAlarmOutcome> BatchResetAlarmOutcomeCallable;
        typedef std::future<BatchSnoozeAlarmOutcome> BatchSnoozeAlarmOutcomeCallable;
        typedef std::future<BatchUpdateDetectorOutcome> BatchUpdateDetectorOutcomeCallable;
        typedef std::future<DescribeAlarmOutcome> DescribeAlarmOutcomeCallable;
        typedef std::future<DescribeDetectorOutcome> DescribeDetectorOutcomeCallable;
        typedef std::future<ListAlarmsOutcome> ListAlarmsOutcomeCallable;
        typedef std::future<ListDetectorsOutcome> ListDetectorsOutcomeCallable;
} // namespace Model

  class IoTEventsDataClient;

    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchAcknowledgeAlarmRequest&, const Model::BatchAcknowledgeAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAcknowledgeAlarmResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchDisableAlarmRequest&, const Model::BatchDisableAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisableAlarmResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchEnableAlarmRequest&, const Model::BatchEnableAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchEnableAlarmResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchPutMessageRequest&, const Model::BatchPutMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutMessageResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchResetAlarmRequest&, const Model::BatchResetAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchResetAlarmResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchSnoozeAlarmRequest&, const Model::BatchSnoozeAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchSnoozeAlarmResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchUpdateDetectorRequest&, const Model::BatchUpdateDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateDetectorResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::DescribeAlarmRequest&, const Model::DescribeAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::DescribeDetectorRequest&, const Model::DescribeDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDetectorResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::ListAlarmsRequest&, const Model::ListAlarmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAlarmsResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::ListDetectorsRequest&, const Model::ListDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDetectorsResponseReceivedHandler;

  /**
   * <p>IoT Events monitors your equipment or device fleets for failures or changes
   * in operation, and triggers actions when such events occur. You can use IoT
   * Events Data API commands to send inputs to detectors, list detectors, and view
   * or update a detector's status.</p> <p> For more information, see <a
   * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/what-is-iotevents.html">What
   * is IoT Events?</a> in the <i>IoT Events Developer Guide</i>.</p>
   */
  class AWS_IOTEVENTSDATA_API IoTEventsDataClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsDataClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsDataClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTEventsDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IoTEventsDataClient();


        /**
         * <p>Acknowledges one or more alarms. The alarms change to the
         * <code>ACKNOWLEDGED</code> state after you acknowledge them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchAcknowledgeAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAcknowledgeAlarmOutcome BatchAcknowledgeAlarm(const Model::BatchAcknowledgeAlarmRequest& request) const;

        /**
         * <p>Acknowledges one or more alarms. The alarms change to the
         * <code>ACKNOWLEDGED</code> state after you acknowledge them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchAcknowledgeAlarm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchAcknowledgeAlarmOutcomeCallable BatchAcknowledgeAlarmCallable(const Model::BatchAcknowledgeAlarmRequest& request) const;

        /**
         * <p>Acknowledges one or more alarms. The alarms change to the
         * <code>ACKNOWLEDGED</code> state after you acknowledge them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchAcknowledgeAlarm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchAcknowledgeAlarmAsync(const Model::BatchAcknowledgeAlarmRequest& request, const BatchAcknowledgeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables one or more alarms. The alarms change to the <code>DISABLED</code>
         * state after you disable them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchDisableAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisableAlarmOutcome BatchDisableAlarm(const Model::BatchDisableAlarmRequest& request) const;

        /**
         * <p>Disables one or more alarms. The alarms change to the <code>DISABLED</code>
         * state after you disable them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchDisableAlarm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisableAlarmOutcomeCallable BatchDisableAlarmCallable(const Model::BatchDisableAlarmRequest& request) const;

        /**
         * <p>Disables one or more alarms. The alarms change to the <code>DISABLED</code>
         * state after you disable them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchDisableAlarm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisableAlarmAsync(const Model::BatchDisableAlarmRequest& request, const BatchDisableAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables one or more alarms. The alarms change to the <code>NORMAL</code>
         * state after you enable them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchEnableAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchEnableAlarmOutcome BatchEnableAlarm(const Model::BatchEnableAlarmRequest& request) const;

        /**
         * <p>Enables one or more alarms. The alarms change to the <code>NORMAL</code>
         * state after you enable them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchEnableAlarm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchEnableAlarmOutcomeCallable BatchEnableAlarmCallable(const Model::BatchEnableAlarmRequest& request) const;

        /**
         * <p>Enables one or more alarms. The alarms change to the <code>NORMAL</code>
         * state after you enable them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchEnableAlarm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchEnableAlarmAsync(const Model::BatchEnableAlarmRequest& request, const BatchEnableAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a set of messages to the IoT Events system. Each message payload is
         * transformed into the input you specify (<code>"inputName"</code>) and ingested
         * into any detectors that monitor that input. If multiple messages are sent, the
         * order in which the messages are processed isn't guaranteed. To guarantee
         * ordering, you must send messages one at a time and wait for a successful
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchPutMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutMessageOutcome BatchPutMessage(const Model::BatchPutMessageRequest& request) const;

        /**
         * <p>Sends a set of messages to the IoT Events system. Each message payload is
         * transformed into the input you specify (<code>"inputName"</code>) and ingested
         * into any detectors that monitor that input. If multiple messages are sent, the
         * order in which the messages are processed isn't guaranteed. To guarantee
         * ordering, you must send messages one at a time and wait for a successful
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchPutMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutMessageOutcomeCallable BatchPutMessageCallable(const Model::BatchPutMessageRequest& request) const;

        /**
         * <p>Sends a set of messages to the IoT Events system. Each message payload is
         * transformed into the input you specify (<code>"inputName"</code>) and ingested
         * into any detectors that monitor that input. If multiple messages are sent, the
         * order in which the messages are processed isn't guaranteed. To guarantee
         * ordering, you must send messages one at a time and wait for a successful
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchPutMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutMessageAsync(const Model::BatchPutMessageRequest& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets one or more alarms. The alarms return to the <code>NORMAL</code> state
         * after you reset them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchResetAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchResetAlarmOutcome BatchResetAlarm(const Model::BatchResetAlarmRequest& request) const;

        /**
         * <p>Resets one or more alarms. The alarms return to the <code>NORMAL</code> state
         * after you reset them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchResetAlarm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchResetAlarmOutcomeCallable BatchResetAlarmCallable(const Model::BatchResetAlarmRequest& request) const;

        /**
         * <p>Resets one or more alarms. The alarms return to the <code>NORMAL</code> state
         * after you reset them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchResetAlarm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchResetAlarmAsync(const Model::BatchResetAlarmRequest& request, const BatchResetAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes one or more alarms to the snooze mode. The alarms change to the
         * <code>SNOOZE_DISABLED</code> state after you set them to the snooze
         * mode.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchSnoozeAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchSnoozeAlarmOutcome BatchSnoozeAlarm(const Model::BatchSnoozeAlarmRequest& request) const;

        /**
         * <p>Changes one or more alarms to the snooze mode. The alarms change to the
         * <code>SNOOZE_DISABLED</code> state after you set them to the snooze
         * mode.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchSnoozeAlarm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchSnoozeAlarmOutcomeCallable BatchSnoozeAlarmCallable(const Model::BatchSnoozeAlarmRequest& request) const;

        /**
         * <p>Changes one or more alarms to the snooze mode. The alarms change to the
         * <code>SNOOZE_DISABLED</code> state after you set them to the snooze
         * mode.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchSnoozeAlarm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchSnoozeAlarmAsync(const Model::BatchSnoozeAlarmRequest& request, const BatchSnoozeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the state, variable values, and timer settings of one or more
         * detectors (instances) of a specified detector model.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchUpdateDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateDetectorOutcome BatchUpdateDetector(const Model::BatchUpdateDetectorRequest& request) const;

        /**
         * <p>Updates the state, variable values, and timer settings of one or more
         * detectors (instances) of a specified detector model.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchUpdateDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateDetectorOutcomeCallable BatchUpdateDetectorCallable(const Model::BatchUpdateDetectorRequest& request) const;

        /**
         * <p>Updates the state, variable values, and timer settings of one or more
         * detectors (instances) of a specified detector model.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchUpdateDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateDetectorAsync(const Model::BatchUpdateDetectorRequest& request, const BatchUpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DescribeAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlarmOutcome DescribeAlarm(const Model::DescribeAlarmRequest& request) const;

        /**
         * <p>Retrieves information about an alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DescribeAlarm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlarmOutcomeCallable DescribeAlarmCallable(const Model::DescribeAlarmRequest& request) const;

        /**
         * <p>Retrieves information about an alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DescribeAlarm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlarmAsync(const Model::DescribeAlarmRequest& request, const DescribeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified detector (instance).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DescribeDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDetectorOutcome DescribeDetector(const Model::DescribeDetectorRequest& request) const;

        /**
         * <p>Returns information about the specified detector (instance).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DescribeDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDetectorOutcomeCallable DescribeDetectorCallable(const Model::DescribeDetectorRequest& request) const;

        /**
         * <p>Returns information about the specified detector (instance).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DescribeDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDetectorAsync(const Model::DescribeDetectorRequest& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists one or more alarms. The operation returns only the metadata associated
         * with each alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/ListAlarms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlarmsOutcome ListAlarms(const Model::ListAlarmsRequest& request) const;

        /**
         * <p>Lists one or more alarms. The operation returns only the metadata associated
         * with each alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/ListAlarms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAlarmsOutcomeCallable ListAlarmsCallable(const Model::ListAlarmsRequest& request) const;

        /**
         * <p>Lists one or more alarms. The operation returns only the metadata associated
         * with each alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/ListAlarms">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAlarmsAsync(const Model::ListAlarmsRequest& request, const ListAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists detectors (the instances of a detector model).</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/ListDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDetectorsOutcome ListDetectors(const Model::ListDetectorsRequest& request) const;

        /**
         * <p>Lists detectors (the instances of a detector model).</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/ListDetectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDetectorsOutcomeCallable ListDetectorsCallable(const Model::ListDetectorsRequest& request) const;

        /**
         * <p>Lists detectors (the instances of a detector model).</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/ListDetectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDetectorsAsync(const Model::ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchAcknowledgeAlarmAsyncHelper(const Model::BatchAcknowledgeAlarmRequest& request, const BatchAcknowledgeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDisableAlarmAsyncHelper(const Model::BatchDisableAlarmRequest& request, const BatchDisableAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchEnableAlarmAsyncHelper(const Model::BatchEnableAlarmRequest& request, const BatchEnableAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchPutMessageAsyncHelper(const Model::BatchPutMessageRequest& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchResetAlarmAsyncHelper(const Model::BatchResetAlarmRequest& request, const BatchResetAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchSnoozeAlarmAsyncHelper(const Model::BatchSnoozeAlarmRequest& request, const BatchSnoozeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUpdateDetectorAsyncHelper(const Model::BatchUpdateDetectorRequest& request, const BatchUpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlarmAsyncHelper(const Model::DescribeAlarmRequest& request, const DescribeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDetectorAsyncHelper(const Model::DescribeDetectorRequest& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAlarmsAsyncHelper(const Model::ListAlarmsRequest& request, const ListAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDetectorsAsyncHelper(const Model::ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoTEventsData
} // namespace Aws
