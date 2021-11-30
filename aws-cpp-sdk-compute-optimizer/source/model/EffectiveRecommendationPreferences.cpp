﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/EffectiveRecommendationPreferences.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

EffectiveRecommendationPreferences::EffectiveRecommendationPreferences() : 
    m_cpuVendorArchitecturesHasBeenSet(false),
    m_enhancedInfrastructureMetrics(EnhancedInfrastructureMetrics::NOT_SET),
    m_enhancedInfrastructureMetricsHasBeenSet(false)
{
}

EffectiveRecommendationPreferences::EffectiveRecommendationPreferences(JsonView jsonValue) : 
    m_cpuVendorArchitecturesHasBeenSet(false),
    m_enhancedInfrastructureMetrics(EnhancedInfrastructureMetrics::NOT_SET),
    m_enhancedInfrastructureMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

EffectiveRecommendationPreferences& EffectiveRecommendationPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cpuVendorArchitectures"))
  {
    Array<JsonView> cpuVendorArchitecturesJsonList = jsonValue.GetArray("cpuVendorArchitectures");
    for(unsigned cpuVendorArchitecturesIndex = 0; cpuVendorArchitecturesIndex < cpuVendorArchitecturesJsonList.GetLength(); ++cpuVendorArchitecturesIndex)
    {
      m_cpuVendorArchitectures.push_back(CpuVendorArchitectureMapper::GetCpuVendorArchitectureForName(cpuVendorArchitecturesJsonList[cpuVendorArchitecturesIndex].AsString()));
    }
    m_cpuVendorArchitecturesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enhancedInfrastructureMetrics"))
  {
    m_enhancedInfrastructureMetrics = EnhancedInfrastructureMetricsMapper::GetEnhancedInfrastructureMetricsForName(jsonValue.GetString("enhancedInfrastructureMetrics"));

    m_enhancedInfrastructureMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue EffectiveRecommendationPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_cpuVendorArchitecturesHasBeenSet)
  {
   Array<JsonValue> cpuVendorArchitecturesJsonList(m_cpuVendorArchitectures.size());
   for(unsigned cpuVendorArchitecturesIndex = 0; cpuVendorArchitecturesIndex < cpuVendorArchitecturesJsonList.GetLength(); ++cpuVendorArchitecturesIndex)
   {
     cpuVendorArchitecturesJsonList[cpuVendorArchitecturesIndex].AsString(CpuVendorArchitectureMapper::GetNameForCpuVendorArchitecture(m_cpuVendorArchitectures[cpuVendorArchitecturesIndex]));
   }
   payload.WithArray("cpuVendorArchitectures", std::move(cpuVendorArchitecturesJsonList));

  }

  if(m_enhancedInfrastructureMetricsHasBeenSet)
  {
   payload.WithString("enhancedInfrastructureMetrics", EnhancedInfrastructureMetricsMapper::GetNameForEnhancedInfrastructureMetrics(m_enhancedInfrastructureMetrics));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
