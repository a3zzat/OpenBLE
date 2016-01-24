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
typedef enum
{
    Command_reject                         = 0x1 ,
    Disconnection_request                  = 0x6 ,
    Disconnection_response                 = 0x7 ,
    Connection_Parameter_Update_request    = 0x12,
    Connection Parameter Update response   = 0x13,
    LE_Credit_Based_Connection_request     = 0x14,
    LE_Credit_Based_Connection_response    = 0x15,
    LE_Flow_Control_Credit                 = 0x16
}c_frame_codes_t;

/* command frame used for signalling */
typedef struct 
{
    c_frame_codes_t code;
    uint8_t id;
    uint16_t length;
    void*    Data; /* could be null */
} c_frame_t;

/* Command_reject */

typedef struct
{
    cmd_rej_resp_t response;
    void* data;
} cmd_rej_t;

typedef enum
{
    Command_not_understood = 1,
    Signaling_MTU_exceeded = 2,
    Invalid_CID_in_request = 3,
}cmd_rej_resp_t;

/* Disconnection request/response */
typedef struct
{
    uint16_t destination_CID;
    uint16_t source_CID;
} disconnect_t;



