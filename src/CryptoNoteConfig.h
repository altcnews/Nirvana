/*
 * Copyright (c) 2017-2018, The Nirvana Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Nirvana.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <cstddef>
#include <cstdint>
#include <limits>
#include <initializer_list>

namespace CryptoNote {
namespace parameters {

#define CRYPTONOTE_MAX_BLOCK_NUMBER                     500000000
#define CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                  500000000
#define CRYPTONOTE_MAX_TX_SIZE                          1000000000
#define CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX         9898 // starts with "VV"
#define CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW            10
#define CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT              60 * 60 * 2

#define BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW               60

#define MONEY_SUPPLY                                    50000000000000000
#define MIN_MIXIN                                       0
#define MANDATORY_MIXIN_BLOCK_VERSION                   0
#define KILL_HEIGHT                                     0
#define ZAWY_DIFFICULTY_BLOCK_INDEX                     30
#define ZAWY_DIFFICULTY_V2                              60
#define ZAWY_DIFFICULTY_DIFFICULTY_BLOCK_VERSION        60


#define EMISSION_SPEED_FACTOR                           18
#define GENESIS_BLOCK_REWARD                            5000000000000000

#define CRYPTONOTE_REWARD_BLOCKS_WINDOW                 100
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE       100000
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2    90000
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1    80000
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE
#define CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE          600
#define CRYPTONOTE_MONEY_DECIMAL_POINT                  12
#define CRYPTONOTE_MONEY_DECIMAL_UNITS                  100000
#define MINIMUM_FEE                                     1000
#define DEFAULT_FEE                                     1000
#define DEFAULT_DUST_THRESHOLD                          MINIMUM_FEE

#define ALLOY_TRANSACTION_SIZE_LIMIT                    100000
#define MEMPOOL_POLLING_INTERVAL                        60

#define DIFFICULTY_TARGET                               180
#define EXPECTED_NUMBER_OF_BLOCKS_PER_DAY               24 * 60 * 60 / DIFFICULTY_TARGET
#define DIFFICULTY_WINDOW                               17
#define DIFFICULTY_WINDOW_V1                            1440
#define DIFFICULTY_WINDOW_V2                            1440
#define DIFFICULTY_WINDOW_V4                            1440
#define DIFFICULTY_CUT                                  60
#define DIFFICULTY_CUT_V1                               60
#define DIFFICULTY_CUT_V2                               60
#define DIFFICULTY_LAG                                  0
#define DIFFICULTY_LAG_V1                               15
#define DIFFICULTY_LAG_V2                               15

#define MAX_BLOCK_SIZE_INITIAL                          100000
#define MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR           100 * 1024
#define MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR         365 * 24 * 60 * 60 / DIFFICULTY_TARGET

#define CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS       1
#define CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS      DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS

#define CRYPTONOTE_MEMPOOL_TX_LIVETIME                  60 * 60 * 24
#define CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME   CRYPTONOTE_MEMPOOL_TX_LIVETIME * 7
#define CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL 7

#define FUSION_TX_MIN_INPUT_COUNT                       12
#define FUSION_TX_MIN_IN_OUT_COUNT_RATIO                4

#define KEY_IMAGE_CHECKING_BLOCK_INDEX                  0
#define UPGRADE_HEIGHT_V2                               1
#define UPGRADE_HEIGHT_V3                               30
#define UPGRADE_HEIGHT_V4                               17500
#define UPGRADE_HEIGHT_V5                               52500

#define UPGRADE_VOTING_THRESHOLD                        90
#define UPGRADE_VOTING_WINDOW                           EXPECTED_NUMBER_OF_BLOCKS_PER_DAY
#define UPGRADE_WINDOW                                  EXPECTED_NUMBER_OF_BLOCKS_PER_DAY

#define CRYPTONOTE_BLOCKS_FILENAME                      "blocks.bin"
#define CRYPTONOTE_BLOCKINDEXES_FILENAME                "blockindexes.bin"
#define CRYPTONOTE_POOLDATA_FILENAME                    "poolstate.bin"
#define P2P_NET_DATA_FILENAME                           "p2pstate.bin"
#define MINER_CONFIG_FILE_NAME                          "miner_conf.json"

} // parameters

#define CRYPTONOTE_NAME                                 "nirvana"
#define CRYPTONOTE_GENESIS_TX                           "010a01ff0001808082bf93eff00802ae1818fa177ec6752560ba46b1fe4663830a6de3fd66c3dd5b86077c26c4cab6210176ed284b30c974cde9f363991def48196f6dafaf7db9c858b6fbe5dbd3414bd7"

#define TRANSACTION_VERSION_1                           1
#define TRANSACTION_VERSION_2                           2
#define CURRENT_TRANSACTION_VERSION                     TRANSACTION_VERSION_1
#define BLOCK_MAJOR_VERSION_1                           1
#define BLOCK_MAJOR_VERSION_2                           2
#define BLOCK_MAJOR_VERSION_3                           3
#define BLOCK_MAJOR_VERSION_4                           4
#define BLOCK_MAJOR_VERSION_5                           5


#define BLOCK_MINOR_VERSION_0                           0
#define BLOCK_MINOR_VERSION_1                           1

#define BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT          20000
#define BLOCKS_SYNCHRONIZING_DEFAULT_COUNT              4096
#define COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT           1000

#define P2P_DEFAULT_PORT                                16338
#define RPC_DEFAULT_PORT                                16339

#define P2P_LOCAL_WHITE_PEERLIST_LIMIT                  1000
#define P2P_LOCAL_GRAY_PEERLIST_LIMIT                   5000

#define P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE            64 * 1024 * 1024
#define P2P_DEFAULT_CONNECTIONS_COUNT                   8
#define P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT       70
#define P2P_DEFAULT_HANDSHAKE_INTERVAL                  60
#define P2P_DEFAULT_PACKET_MAX_SIZE                     50000000
#define P2P_DEFAULT_PEERS_IN_HANDSHAKE                  250
#define P2P_DEFAULT_CONNECTION_TIMEOUT                  5000
#define P2P_DEFAULT_PING_CONNECTION_TIMEOUT             2000
#define P2P_DEFAULT_INVOKE_TIMEOUT                      60 * 2 * 1000
#define P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT            5000
#define P2P_STAT_TRUSTED_PUB_KEY                        "8f80f9a5a434a9f1510d13336228debfee9c918ce505efe225d8c94d045fa115"

const std::initializer_list<const char*> SEED_NODES {
   "45.77.248.163:16338",
  "104.238.157.86:16338",

};

struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  };

} // Nirvana

#define ALLOW_DEBUG_COMMANDS