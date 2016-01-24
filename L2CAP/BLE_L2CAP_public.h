/*
 * Copyright (C) 2016 Ahmed Ezzat
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v3.0. or Above See the file LICENSE in the 
 * top level directory for more details.
 */
 
 // L2CAP Fixed CIDs    
#define L2CAP_CID_ATTRIBUTE_PROTOCOL        0x0004
#define L2CAP_CID_LE_SIGNALING              0x0005
#define L2CAP_CID_SECURITY_MANAGER_PROTOCOL 0x0006

#define MAX_L2CAP_PAYLOAD_BYTE_SIZE         65533 /* remove 2 bytes for first LE frame */
#define MIN_L2CAP_SIGNAL_PAYLOAD_BYTE_SIZE  23

typedef struct 
{
    uint16_t length;
    uint16_t ChanID;
} L2CAP_header_t;

typedef struct 
{
    L2CAP_header_t header;
    void*    payload;
} LE_frame_t;

