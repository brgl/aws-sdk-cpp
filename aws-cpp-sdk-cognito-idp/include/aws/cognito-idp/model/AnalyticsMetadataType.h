﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>An Amazon Pinpoint analytics endpoint.</p> <p>An endpoint uniquely identifies
   * a mobile device, email address, or phone number that can receive messages from
   * Amazon Pinpoint analytics.</p>  <p>Amazon Cognito User Pools only supports
   * sending events to Amazon Pinpoint projects in the US East (N. Virginia)
   * us-east-1 Region, regardless of the Region in which the user pool resides.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AnalyticsMetadataType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AnalyticsMetadataType
  {
  public:
    AnalyticsMetadataType();
    AnalyticsMetadataType(Aws::Utils::Json::JsonView jsonValue);
    AnalyticsMetadataType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint ID.</p>
     */
    inline const Aws::String& GetAnalyticsEndpointId() const{ return m_analyticsEndpointId; }

    /**
     * <p>The endpoint ID.</p>
     */
    inline bool AnalyticsEndpointIdHasBeenSet() const { return m_analyticsEndpointIdHasBeenSet; }

    /**
     * <p>The endpoint ID.</p>
     */
    inline void SetAnalyticsEndpointId(const Aws::String& value) { m_analyticsEndpointIdHasBeenSet = true; m_analyticsEndpointId = value; }

    /**
     * <p>The endpoint ID.</p>
     */
    inline void SetAnalyticsEndpointId(Aws::String&& value) { m_analyticsEndpointIdHasBeenSet = true; m_analyticsEndpointId = std::move(value); }

    /**
     * <p>The endpoint ID.</p>
     */
    inline void SetAnalyticsEndpointId(const char* value) { m_analyticsEndpointIdHasBeenSet = true; m_analyticsEndpointId.assign(value); }

    /**
     * <p>The endpoint ID.</p>
     */
    inline AnalyticsMetadataType& WithAnalyticsEndpointId(const Aws::String& value) { SetAnalyticsEndpointId(value); return *this;}

    /**
     * <p>The endpoint ID.</p>
     */
    inline AnalyticsMetadataType& WithAnalyticsEndpointId(Aws::String&& value) { SetAnalyticsEndpointId(std::move(value)); return *this;}

    /**
     * <p>The endpoint ID.</p>
     */
    inline AnalyticsMetadataType& WithAnalyticsEndpointId(const char* value) { SetAnalyticsEndpointId(value); return *this;}

  private:

    Aws::String m_analyticsEndpointId;
    bool m_analyticsEndpointIdHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
