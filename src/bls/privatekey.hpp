// Copyright 2018 Chia Network Inc

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//    http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "relic_conf.h"
#include <gmp.h>

#include "bls/elements.hpp"

namespace bls {
class PrivateKey {
    friend class BLS;
    friend class G1Element;
    friend class G2Element;
    friend class HDKeys;

public:
    // Private keys are represented as 32 byte field elements. Note that
    // not all 32 byte integers are valid keys, the private key must be
    // less than the group order (which is in bls.hpp).
    static const size_t PRIVATE_KEY_SIZE = 32;

    // Construct a private key from a bytearray.
    static PrivateKey FromBytes(const uint8_t *bytes, bool modOrder = false);

    // Construct a private key from a bytearray.
    static PrivateKey FromByteVector(const std::vector<uint8_t> bytes, bool modOrder = false);

    // Construct a private key from a native bn element.
    static PrivateKey FromBN(bn_t sk, bool modOrder = false);

    // Aggregate many private keys into one (sum of keys mod order)
    static PrivateKey Aggregate(std::vector<PrivateKey> const &privateKeys);

    // Construct a private key from another private key. Allocates memory in
    // secure heap, and copies keydata.
    PrivateKey(const PrivateKey &k);
    PrivateKey(PrivateKey &&k);

    ~PrivateKey();

    G1Element GetG1Element() const;
    G2Element GetG2Element() const;

    G2Element GetG2Power(g2_t base) const;

    bool IsZero();

    // Compare to different private key
    friend bool operator==(const PrivateKey &a, const PrivateKey &b);
    friend bool operator!=(const PrivateKey &a, const PrivateKey &b);
    PrivateKey &operator=(const PrivateKey &rhs);

    // Multiply private key by G1 or G2 elements
    friend G1Element &operator*=(G1Element &a, const PrivateKey &k);
    friend G1Element operator*(const G1Element &a, const PrivateKey &k);
    friend G1Element operator*(const PrivateKey &k, const G1Element &a);

    friend G2Element &operator*=(G2Element &a, const PrivateKey &k);
    friend G2Element operator*(const G2Element &a, const PrivateKey &k);
    friend G2Element operator*(const PrivateKey &k, const G2Element &a);

    // Serialize the key into bytes
    void Serialize(uint8_t *buffer) const;
    std::vector<uint8_t> Serialize() const;

    G2Element SignG2(
        const uint8_t *msg,
        size_t len,
        const uint8_t *dst,
        size_t dst_len) const;

    G2Element SignG2Prehashed(
        const uint8_t *messageHash,
        const uint8_t *dst,
        size_t dst_len) const;


private:
    // Don't allow public construction, force static methods
    PrivateKey() {}

    // Allocate memory for private key
    void AllocateKeyData();

private:
    // The actual byte data
    bn_t *keydata{nullptr};
};
}  // end namespace bls

