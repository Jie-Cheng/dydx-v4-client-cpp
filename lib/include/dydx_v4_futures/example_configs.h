#pragma once

#include <string>

#include <common/requests/base.h>
#include <common/streams/base.h>

#include <dydx_v4_futures/exchange_info.h>

namespace dydx_v4_client_lib {

inline const common::RestConfig INDEXER_API_HOST_TESTNET {.host = "indexer.v4testnet.dydx.exchange"};
inline const common::RestConfig INDEXER_API_HOST_MAINNET {.host = "indexer.dydx.trade"};

inline const common::WsConfig INDEXER_WS_HOST_TESTNET {.host = "indexer.v4testnet.dydx.exchange"};
inline const common::WsConfig INDEXER_WS_HOST_MAINNET {.host = "indexer.dydx.trade"};

inline const common::RestConfig FAUCET_API_HOST_TESTNET {.host = "faucet.v4testnet.dydx.exchange"};

inline const std::string NETWORK_ID_TESTNET = "dydx-testnet-4";
inline const std::string NETWORK_ID_MAINNET = "dydx-mainnet-1";

inline const std::string EXAMPLE_WALLET_MNEMONIC =
    "minute envelope used million door host inject language crumble prison agree fish";  // On Goerli Network
inline const std::string EXAMPLE_DYDX_V4_MNEMONIC =
    "daughter apart kitchen detect differ under impose shiver fade swap tape emerge game gather adult build enlist leg win minute edge note bring phone";

inline const ExchangeConfig EXCHANGE_CONFIG_LOCAL_PLAINTEXT_NODE_TESTNET {
    .chain_id = NETWORK_ID_MAINNET,
    .fee_minimum_gas_price = 4630550000000000,
    .fee_denom = "adv4tnt",
    .node_grpc_gateway_rest_config = common::RestConfig {.host = "dydx-ops-rpc.kingnodes.com", .port = 443, .use_tls = true},
    .node_tendermint_rest_config = common::RestConfig {.host = "dydx-testnet-archive.allthatnode.com", .port = 26657, .use_tls = false},
    .indexer_rest_config = INDEXER_API_HOST_MAINNET,
    .indexer_ws_config = INDEXER_WS_HOST_MAINNET,
};

}  // namespace dydx_v4_client_lib
