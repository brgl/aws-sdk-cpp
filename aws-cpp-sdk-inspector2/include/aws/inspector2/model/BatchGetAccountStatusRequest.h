﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR2_API BatchGetAccountStatusRequest : public Inspector2Request
  {
  public:
    BatchGetAccountStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetAccountStatus"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The 12-digit Amazon Web Services account IDs of the accounts to retrieve
     * Amazon Inspector status for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The 12-digit Amazon Web Services account IDs of the accounts to retrieve
     * Amazon Inspector status for.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The 12-digit Amazon Web Services account IDs of the accounts to retrieve
     * Amazon Inspector status for.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The 12-digit Amazon Web Services account IDs of the accounts to retrieve
     * Amazon Inspector status for.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The 12-digit Amazon Web Services account IDs of the accounts to retrieve
     * Amazon Inspector status for.</p>
     */
    inline BatchGetAccountStatusRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account IDs of the accounts to retrieve
     * Amazon Inspector status for.</p>
     */
    inline BatchGetAccountStatusRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account IDs of the accounts to retrieve
     * Amazon Inspector status for.</p>
     */
    inline BatchGetAccountStatusRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The 12-digit Amazon Web Services account IDs of the accounts to retrieve
     * Amazon Inspector status for.</p>
     */
    inline BatchGetAccountStatusRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The 12-digit Amazon Web Services account IDs of the accounts to retrieve
     * Amazon Inspector status for.</p>
     */
    inline BatchGetAccountStatusRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
