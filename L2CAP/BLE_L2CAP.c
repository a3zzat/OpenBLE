/*
 * Copyright (C) 2016 Ahmed Ezzat 
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v3.0. or Above See the file LICENSE in the 
 * top level directory for more details.
 */
 
 
 /*includes*/
 #include "BLE_L2CAP_public.h"
 #include "BLE_L2CAP_private.h"
 #include "common/error.h"
 
 /* L2CAP Signalling (send commands) */
 
 L2CAP_err_t L2CAP_Signal_frame(LE_frame_t* le_frame,c_frame_codes_t code, uint8_t identfier)
 {
	 L2CAP_err_t err_val = NO_ERR;
	 c_frame_t* command_frame;
	 
	 command_frame->code = code;
	 command_frame->id = identfier;
	 
	 le_frame->CID = L2CAP_CID_LE_SIGNALING;
	 
	 switch(code)
	 {
		case Command_reject:
		                     
		                     break;
        case Disconnection_request:
                                   break;
        case Disconnection_response:
                                    break;
        case Connection_Parameter_Update_request:
                                         break;
        case Connection Parameter Update response:
                                         break;
        case LE_Credit_Based_Connection_request:
                                         break;
        case LE_Credit_Based_Connection_response:
                                         break;
        case LE_Flow_Control_Credit:
                                     break;
		 
		 
		 default:
			err_val = wrong_CID;
	 }
	 if(err_val != NO_ERR)
	 {
		 malloc 
		 le_frame->payload = (void*) command_frame;
	 }
	 else
	 {
		 
	 }
	return err_val;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 /* Global variables */
 
 uint32_t current_SDU_size = 0;
 
 /*BLE packet size check */
 
 L2CAP_err_t L2CAP_size_check(uint16_t length, uint16_t SDU_length, Bool_t firstpacket)
 {
	 
	 
	 
	 
	 
 }