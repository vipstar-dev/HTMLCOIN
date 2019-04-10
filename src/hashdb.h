// Copyright (c) 2014-2019 The BitZeny Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_HASHDB_H
#define BITCOIN_HASHDB_H

#include <dbwrapper.h>
#include <primitives/block.h>
#include <uint256.h>

/** Access to the hash database (hashes/) */
class CHashDB : public CDBWrapper
{
public:
    CHashDB(size_t nCacheSize, bool fMemory = false, bool fWipe = false);
    uint256 GetHashDB(const CBlockHeader& block);
};

extern std::unique_ptr<CHashDB> phashdb;

#endif //BITCOIN_HASHDB_H