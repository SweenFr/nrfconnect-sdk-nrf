/*
 * Copyright (c) 2024 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#ifndef OT_RPC_IDS_H_
#define OT_RPC_IDS_H_

/** @brief Command IDs accepted by the OpenThread over RPC client.
 */
enum ot_rpc_cmd_client {
	OT_RPC_CMD_CLI_OUTPUT = 0,
	OT_RPC_CMD_STATE_CHANGED,
	OT_RPC_CMD_IF_RECEIVE,
	OT_RPC_CMD_THREAD_DISCOVER_CB,
	OT_RPC_CMD_UDP_RECEIVE_CB,
};

/** @brief Command IDs accepted by the OpenThread over RPC server.
 */
enum ot_rpc_cmd_server {
	OT_RPC_CMD_CLI_INIT = 0,
	OT_RPC_CMD_CLI_INPUT_LINE,
	OT_RPC_CMD_INSTANCE_INIT_SINGLE,
	OT_RPC_CMD_INSTANCE_GET_ID,
	OT_RPC_CMD_INSTANCE_IS_INITIALIZED,
	OT_RPC_CMD_INSTANCE_FINALIZE,
	OT_RPC_CMD_INSTANCE_ERASE_PERSISTENT_INFO,
	OT_RPC_CMD_IP6_GET_UNICAST_ADDRESSES,
	OT_RPC_CMD_IP6_GET_MULTICAST_ADDRESSES,
	OT_RPC_CMD_SET_STATE_CHANGED_CALLBACK,
	OT_RPC_CMD_REMOVE_STATE_CHANGED_CALLBACK,
	OT_RPC_CMD_IP6_SET_ENABLED,
	OT_RPC_CMD_IP6_IS_ENABLED,
	OT_RPC_CMD_IP6_SUBSCRIBE_MADDR,
	OT_RPC_CMD_IP6_UNSUBSCRIBE_MADDR,
	OT_RPC_CMD_THREAD_SET_ENABLED,
	OT_RPC_CMD_THREAD_GET_DEVICE_ROLE,
	OT_RPC_CMD_THREAD_SET_LINK_MODE,
	OT_RPC_CMD_THREAD_GET_LINK_MODE,
	OT_RPC_CMD_LINK_SET_POLL_PERIOD,
	OT_RPC_CMD_LINK_GET_POLL_PERIOD,
	OT_RPC_CMD_IF_ENABLE,
	OT_RPC_CMD_IF_SEND,
	OT_RPC_CMD_IF_EXTADDR,
	OT_RPC_CMD_THREAD_DISCOVER,
	OT_RPC_CMD_DATASET_IS_COMMISSIONED,
	OT_RPC_CMD_DATASET_SET_ACTIVE_TLVS,
	OT_RPC_CMD_DATASET_GET_ACTIVE_TLVS,
	OT_RPC_CMD_DATASET_SET_ACTIVE,
	OT_RPC_CMD_DATASET_GET_ACTIVE,
	OT_RPC_CMD_GET_VERSION_STRING,
	OT_RPC_CMD_LINK_GET_CHANNEL,
	OT_RPC_CMD_LINK_GET_COUNTERS,
	OT_RPC_CMD_LINK_GET_EXTENDED_ADDRESS,
	OT_RPC_CMD_LINK_GET_PAN_ID,
	OT_RPC_CMD_LINK_SET_MAX_FRAME_RETRIES_DIRECT,
	OT_RPC_CMD_LINK_SET_MAX_FRAME_RETRIES_INDIRECT,
	OT_RPC_CMD_LINK_SET_ENABLED,
	OT_RPC_CMD_LINK_GET_FACTORY_ASSIGNED_EUI64,
	OT_RPC_CMD_NET_DATA_GET_STABLE_VERSION,
	OT_RPC_CMD_NET_DATA_GET_VERSION,
	OT_RPC_CMD_THREAD_GET_EXTENDED_PANID,
	OT_RPC_CMD_THREAD_GET_LEADER_ROUTER_ID,
	OT_RPC_CMD_THREAD_GET_LEADER_WEIGHT,
	OT_RPC_CMD_THREAD_GET_MESH_LOCAL_PREFIX,
	OT_RPC_CMD_THREAD_GET_MLE_COUNTERS,
	OT_RPC_CMD_THREAD_GET_NETWORK_NAME,
	OT_RPC_CMD_THREAD_GET_NEXT_NEIGHBOR_INFO,
	OT_RPC_CMD_THREAD_GET_PARENT_INFO,
	OT_RPC_CMD_THREAD_GET_PARTITION_ID,
	OT_RPC_CMD_UDP_NEW_MESSAGE,
	OT_RPC_CMD_MESSAGE_FREE,
	OT_RPC_CMD_MESSAGE_APPEND,
	OT_RPC_CMD_MESSAGE_GET_LENGTH,
	OT_RPC_CMD_MESSAGE_GET_OFFSET,
	OT_RPC_CMD_MESSAGE_READ,
	OT_RPC_CMD_UDP_OPEN,
	OT_RPC_CMD_UDP_SEND,
	OT_RPC_CMD_UDP_BIND,
	OT_RPC_CMD_UDP_CLOSE,
	OT_RPC_CMD_UDP_CONNECT,
};

#endif /* OT_RPC_IDS_H_ */
