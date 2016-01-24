/*
 * Copyright (C) 2016 Ahmed Ezzat 
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v3.0. or Above See the file LICENSE in the 
 * top level directory for more details.
 */

 
typedef enum
{
	OpenChannel_Req          = 1 ,
	OpenChannel_Rsp          = 2 ,
	ConfigureChannel_Req     = 3 ,
	CloseChannel_Req         = 4 ,
	SendData_Req             = 5 ,
	ReconfigureChannel_Req   = 6 ,
	OpenChannelCntrl_Req     = 7 ,
	OpenChannelCntrl_Rsp     = 8 ,
	MoveChannel_Req          = 9 ,
	ControllerLogicalLinkInd = 10 
} L2CAP_state_events_enum;                            