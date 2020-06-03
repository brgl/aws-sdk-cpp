﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/es/model/InboundCrossClusterSearchConnectionStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace InboundCrossClusterSearchConnectionStatusCodeMapper
      {

        static const int PENDING_ACCEPTANCE_HASH = HashingUtils::HashString("PENDING_ACCEPTANCE");
        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int REJECTING_HASH = HashingUtils::HashString("REJECTING");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        InboundCrossClusterSearchConnectionStatusCode GetInboundCrossClusterSearchConnectionStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_ACCEPTANCE_HASH)
          {
            return InboundCrossClusterSearchConnectionStatusCode::PENDING_ACCEPTANCE;
          }
          else if (hashCode == APPROVED_HASH)
          {
            return InboundCrossClusterSearchConnectionStatusCode::APPROVED;
          }
          else if (hashCode == REJECTING_HASH)
          {
            return InboundCrossClusterSearchConnectionStatusCode::REJECTING;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return InboundCrossClusterSearchConnectionStatusCode::REJECTED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return InboundCrossClusterSearchConnectionStatusCode::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return InboundCrossClusterSearchConnectionStatusCode::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InboundCrossClusterSearchConnectionStatusCode>(hashCode);
          }

          return InboundCrossClusterSearchConnectionStatusCode::NOT_SET;
        }

        Aws::String GetNameForInboundCrossClusterSearchConnectionStatusCode(InboundCrossClusterSearchConnectionStatusCode enumValue)
        {
          switch(enumValue)
          {
          case InboundCrossClusterSearchConnectionStatusCode::PENDING_ACCEPTANCE:
            return "PENDING_ACCEPTANCE";
          case InboundCrossClusterSearchConnectionStatusCode::APPROVED:
            return "APPROVED";
          case InboundCrossClusterSearchConnectionStatusCode::REJECTING:
            return "REJECTING";
          case InboundCrossClusterSearchConnectionStatusCode::REJECTED:
            return "REJECTED";
          case InboundCrossClusterSearchConnectionStatusCode::DELETING:
            return "DELETING";
          case InboundCrossClusterSearchConnectionStatusCode::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InboundCrossClusterSearchConnectionStatusCodeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
