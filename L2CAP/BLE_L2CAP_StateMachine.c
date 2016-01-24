/*
 * Copyright (C) 2016 Ahmed Ezzat 
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v3.0. or Above See the file LICENSE in the 
 * top level directory for more details.
 */
 
 
 /*includes*/
 #include "BLE_L2CAP_private.h"
 #include "common/error.h"
 
 void (*state_machine []) (void)  ;
 
 