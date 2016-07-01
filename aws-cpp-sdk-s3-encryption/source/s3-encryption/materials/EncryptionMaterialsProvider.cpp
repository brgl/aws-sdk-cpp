/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3-encryption/materials/EncryptionMaterialsProvider.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;


namespace Aws
{
namespace S3Encryption
{
namespace Materials
{
EncryptionMaterials::EncryptionMaterials(const Aws::Utils::CryptoBuffer & key, const Aws::Utils::CryptoBuffer & iv, const Aws::Utils::CryptoBuffer & tag) :
    m_key(key), m_iv(iv), m_tag(tag)
{
}
}//namespace Materials
}//namespace S3Encryption
}//namespace Aws