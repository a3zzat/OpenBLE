/*
 * Copyright (C) 2016 Ahmed Ezzat
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v3.0. or Above See the file LICENSE in the 
 * top level directory for more details.
 */
 
 /*
  * this file  is used to define common error types
  */  
  
  /* L2CAP errors */
  typedef enum 
  {
	 NO_ERR       =  0,
	 FRAME_LENGTH = -1,
	 SDU_LENGTH   = -2,
	 wrong_CID    = -3
  } L2CAP_err_t;
  
	  
	  
	  