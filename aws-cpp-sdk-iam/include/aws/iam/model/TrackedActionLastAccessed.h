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

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains details about the most recent attempt to access an action within the
   * service.</p> <p>This data type is used as a response element in the
   * <a>GetServiceLastAccessedDetails</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TrackedActionLastAccessed">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API TrackedActionLastAccessed
  {
  public:
    TrackedActionLastAccessed();
    TrackedActionLastAccessed(const Aws::Utils::Xml::XmlNode& xmlNode);
    TrackedActionLastAccessed& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the tracked action to which access was attempted. Tracked actions
     * are actions that report activity to IAM.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the tracked action to which access was attempted. Tracked actions
     * are actions that report activity to IAM.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the tracked action to which access was attempted. Tracked actions
     * are actions that report activity to IAM.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the tracked action to which access was attempted. Tracked actions
     * are actions that report activity to IAM.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The name of the tracked action to which access was attempted. Tracked actions
     * are actions that report activity to IAM.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The name of the tracked action to which access was attempted. Tracked actions
     * are actions that report activity to IAM.</p>
     */
    inline TrackedActionLastAccessed& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the tracked action to which access was attempted. Tracked actions
     * are actions that report activity to IAM.</p>
     */
    inline TrackedActionLastAccessed& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the tracked action to which access was attempted. Tracked actions
     * are actions that report activity to IAM.</p>
     */
    inline TrackedActionLastAccessed& WithActionName(const char* value) { SetActionName(value); return *this;}


    
    inline const Aws::String& GetLastAccessedEntity() const{ return m_lastAccessedEntity; }

    
    inline bool LastAccessedEntityHasBeenSet() const { return m_lastAccessedEntityHasBeenSet; }

    
    inline void SetLastAccessedEntity(const Aws::String& value) { m_lastAccessedEntityHasBeenSet = true; m_lastAccessedEntity = value; }

    
    inline void SetLastAccessedEntity(Aws::String&& value) { m_lastAccessedEntityHasBeenSet = true; m_lastAccessedEntity = std::move(value); }

    
    inline void SetLastAccessedEntity(const char* value) { m_lastAccessedEntityHasBeenSet = true; m_lastAccessedEntity.assign(value); }

    
    inline TrackedActionLastAccessed& WithLastAccessedEntity(const Aws::String& value) { SetLastAccessedEntity(value); return *this;}

    
    inline TrackedActionLastAccessed& WithLastAccessedEntity(Aws::String&& value) { SetLastAccessedEntity(std::move(value)); return *this;}

    
    inline TrackedActionLastAccessed& WithLastAccessedEntity(const char* value) { SetLastAccessedEntity(value); return *this;}


    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when an authenticated entity most recently attempted to
     * access the tracked service. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedTime() const{ return m_lastAccessedTime; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when an authenticated entity most recently attempted to
     * access the tracked service. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline bool LastAccessedTimeHasBeenSet() const { return m_lastAccessedTimeHasBeenSet; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when an authenticated entity most recently attempted to
     * access the tracked service. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline void SetLastAccessedTime(const Aws::Utils::DateTime& value) { m_lastAccessedTimeHasBeenSet = true; m_lastAccessedTime = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when an authenticated entity most recently attempted to
     * access the tracked service. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline void SetLastAccessedTime(Aws::Utils::DateTime&& value) { m_lastAccessedTimeHasBeenSet = true; m_lastAccessedTime = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when an authenticated entity most recently attempted to
     * access the tracked service. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline TrackedActionLastAccessed& WithLastAccessedTime(const Aws::Utils::DateTime& value) { SetLastAccessedTime(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when an authenticated entity most recently attempted to
     * access the tracked service. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline TrackedActionLastAccessed& WithLastAccessedTime(Aws::Utils::DateTime&& value) { SetLastAccessedTime(std::move(value)); return *this;}


    /**
     * <p>The Region from which the authenticated entity (user or role) last attempted
     * to access the tracked action. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline const Aws::String& GetLastAccessedRegion() const{ return m_lastAccessedRegion; }

    /**
     * <p>The Region from which the authenticated entity (user or role) last attempted
     * to access the tracked action. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline bool LastAccessedRegionHasBeenSet() const { return m_lastAccessedRegionHasBeenSet; }

    /**
     * <p>The Region from which the authenticated entity (user or role) last attempted
     * to access the tracked action. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline void SetLastAccessedRegion(const Aws::String& value) { m_lastAccessedRegionHasBeenSet = true; m_lastAccessedRegion = value; }

    /**
     * <p>The Region from which the authenticated entity (user or role) last attempted
     * to access the tracked action. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline void SetLastAccessedRegion(Aws::String&& value) { m_lastAccessedRegionHasBeenSet = true; m_lastAccessedRegion = std::move(value); }

    /**
     * <p>The Region from which the authenticated entity (user or role) last attempted
     * to access the tracked action. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline void SetLastAccessedRegion(const char* value) { m_lastAccessedRegionHasBeenSet = true; m_lastAccessedRegion.assign(value); }

    /**
     * <p>The Region from which the authenticated entity (user or role) last attempted
     * to access the tracked action. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline TrackedActionLastAccessed& WithLastAccessedRegion(const Aws::String& value) { SetLastAccessedRegion(value); return *this;}

    /**
     * <p>The Region from which the authenticated entity (user or role) last attempted
     * to access the tracked action. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline TrackedActionLastAccessed& WithLastAccessedRegion(Aws::String&& value) { SetLastAccessedRegion(std::move(value)); return *this;}

    /**
     * <p>The Region from which the authenticated entity (user or role) last attempted
     * to access the tracked action. AWS does not report unauthenticated requests.</p>
     * <p>This field is null if no IAM entities attempted to access the service within
     * the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline TrackedActionLastAccessed& WithLastAccessedRegion(const char* value) { SetLastAccessedRegion(value); return *this;}

  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet;

    Aws::String m_lastAccessedEntity;
    bool m_lastAccessedEntityHasBeenSet;

    Aws::Utils::DateTime m_lastAccessedTime;
    bool m_lastAccessedTimeHasBeenSet;

    Aws::String m_lastAccessedRegion;
    bool m_lastAccessedRegionHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
