﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AggregationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

AggregationRequest::AggregationRequest() : 
    m_accountAggregationHasBeenSet(false),
    m_amiAggregationHasBeenSet(false),
    m_awsEcrContainerAggregationHasBeenSet(false),
    m_ec2InstanceAggregationHasBeenSet(false),
    m_findingTypeAggregationHasBeenSet(false),
    m_imageLayerAggregationHasBeenSet(false),
    m_packageAggregationHasBeenSet(false),
    m_repositoryAggregationHasBeenSet(false),
    m_titleAggregationHasBeenSet(false)
{
}

AggregationRequest::AggregationRequest(JsonView jsonValue) : 
    m_accountAggregationHasBeenSet(false),
    m_amiAggregationHasBeenSet(false),
    m_awsEcrContainerAggregationHasBeenSet(false),
    m_ec2InstanceAggregationHasBeenSet(false),
    m_findingTypeAggregationHasBeenSet(false),
    m_imageLayerAggregationHasBeenSet(false),
    m_packageAggregationHasBeenSet(false),
    m_repositoryAggregationHasBeenSet(false),
    m_titleAggregationHasBeenSet(false)
{
  *this = jsonValue;
}

AggregationRequest& AggregationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountAggregation"))
  {
    m_accountAggregation = jsonValue.GetObject("accountAggregation");

    m_accountAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("amiAggregation"))
  {
    m_amiAggregation = jsonValue.GetObject("amiAggregation");

    m_amiAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsEcrContainerAggregation"))
  {
    m_awsEcrContainerAggregation = jsonValue.GetObject("awsEcrContainerAggregation");

    m_awsEcrContainerAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceAggregation"))
  {
    m_ec2InstanceAggregation = jsonValue.GetObject("ec2InstanceAggregation");

    m_ec2InstanceAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingTypeAggregation"))
  {
    m_findingTypeAggregation = jsonValue.GetObject("findingTypeAggregation");

    m_findingTypeAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageLayerAggregation"))
  {
    m_imageLayerAggregation = jsonValue.GetObject("imageLayerAggregation");

    m_imageLayerAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packageAggregation"))
  {
    m_packageAggregation = jsonValue.GetObject("packageAggregation");

    m_packageAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryAggregation"))
  {
    m_repositoryAggregation = jsonValue.GetObject("repositoryAggregation");

    m_repositoryAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("titleAggregation"))
  {
    m_titleAggregation = jsonValue.GetObject("titleAggregation");

    m_titleAggregationHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_accountAggregationHasBeenSet)
  {
   payload.WithObject("accountAggregation", m_accountAggregation.Jsonize());

  }

  if(m_amiAggregationHasBeenSet)
  {
   payload.WithObject("amiAggregation", m_amiAggregation.Jsonize());

  }

  if(m_awsEcrContainerAggregationHasBeenSet)
  {
   payload.WithObject("awsEcrContainerAggregation", m_awsEcrContainerAggregation.Jsonize());

  }

  if(m_ec2InstanceAggregationHasBeenSet)
  {
   payload.WithObject("ec2InstanceAggregation", m_ec2InstanceAggregation.Jsonize());

  }

  if(m_findingTypeAggregationHasBeenSet)
  {
   payload.WithObject("findingTypeAggregation", m_findingTypeAggregation.Jsonize());

  }

  if(m_imageLayerAggregationHasBeenSet)
  {
   payload.WithObject("imageLayerAggregation", m_imageLayerAggregation.Jsonize());

  }

  if(m_packageAggregationHasBeenSet)
  {
   payload.WithObject("packageAggregation", m_packageAggregation.Jsonize());

  }

  if(m_repositoryAggregationHasBeenSet)
  {
   payload.WithObject("repositoryAggregation", m_repositoryAggregation.Jsonize());

  }

  if(m_titleAggregationHasBeenSet)
  {
   payload.WithObject("titleAggregation", m_titleAggregation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
