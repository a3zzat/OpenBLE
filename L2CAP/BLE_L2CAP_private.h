/*
 * Copyright (C) 2016 Ahmed Ezzat 
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v3.0. or Above See the file LICENSE in the 
 * top level directory for more details.
 */
 
 
/*
 * signaling part
 *
 *
 *
 */
/* used for signalling send inside payload */
typedef enum c_frame_codes
{
    Command_reject                         = 0x1 ,
    Disconnection_request                  = 0x6 ,
    Disconnection_response                 = 0x7 ,
    Connection_Parameter_Update_request    = 0x12,
    Connection_Parameter_Update_response   = 0x13,
    LE_Credit_Based_Connection_request     = 0x14,
    LE_Credit_Based_Connection_response    = 0x15,
    LE_Flow_Control_Credit                 = 0x16
}c_frame_codes_t;

/* command frame used for signalling */
typedef struct 
{
    uint16_t code;
    uint8_t id;
    uint16_t length;
    void*    Data; /* could be null */
} c_frame_t;

/* Command_reject */

typedef enum
{
    Command_not_understood = 1,
    Signaling_MTU_exceeded = 2,
    Invalid_CID_in_request = 3,
}cmd_rej_resp_t;

typedef struct
{
    cmd_rej_resp_t response; /*change with the right size */
    void* data;
} cmd_rej_t;

/* Disconnection request/response */
typedef struct
{
    uint16_t destination_CID;
    uint16_t source_CID;
} disconnect_t;

/* Connection Parameters Update Request Packet */
typedef struct
{
	uint16_t Interval_Min;
	uint16_t Interval_Max;
    uint16_t Slave_Latency;
	uint16_t Timeout_Multiplier;
} conn_update_param_req_t;

/* Connection Parameters Update Request Packet */
typedef struct
{
	uint16_t Result;
} conn_update_param_resp_t;

enum cup_resp_result_enum
{
 Connection_Parameters_accepted = 0x0000,
 Connection_Parameters_rejected = 0x0001
}
/* LE CREDIT BASED CONNECTION REQUEST */
typedef struct
{
	uint16_t LE_PSM;
	uint16_t Source_CID;
	uint16_t MTU;
	uint16_t MPS;
	uint16_t Initial_Credits;
} LE_CREDIT_req_t;
/* LE CREDIT BASED CONNECTION RESPONSE */

typedef enum LE_CREDIT_resp_result
{
	Connection_successful            = 0x0000 ,
	LE_PSM_not_supported             = 0x0002 ,
	no resources_available           = 0x0004 ,
	insufficient_authentication      = 0x0005 ,
	insufficient_authorization       = 0x0006 ,
	insufficient_encryption key size = 0x0007 ,
	insufficient_encryption          = 0x0008 ,
	Invalid_Source_CID               = 0x0009 ,
	Source_CID_already_allocated     = 0x000A 
};

typedef struct
{
	uint16_t Destination CID;
	uint16_t MTU;
	uint16_t MPS;
	uint16_t Initial_Credits;
	uint16_t Result;
}LE_CREDIT_resp_t;

/* LE FLOW CONTROL CREDIT*/
typedef struct
{
	uint16_t CID
	uint16_t Credits
}F_ctrl_credit_t;