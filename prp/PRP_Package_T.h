/********************************************************************
*  
*  Copyright (c) 2007, Institute of Embedded Systems at 
*                      Zurich University of Applied Sciences 
*                      (http://ines.zhaw.ch)
*  
*  All rights reserved.
* 
* 
*  Redistribution and use in source and binary forms, with or  
*  without modification, are permitted provided that the 
*  following conditions are met:
*  
*  - Redistributions of source code must retain the above copyright 
*    notice, this list of conditions and the following disclaimer. 
*
*  - Redistributions in binary form must reproduce the above 
*    copyright notice, this list of conditions and the following 
*    disclaimer in the documentation and/or other materials provided
*    with the distribution. 
*
*  - Neither the name of the Zurich University of Applied Sciences
*    nor the names of its contributors may be used to endorse or 
*    promote products derived from this software without specific 
*    prior written permission. 
*
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND 
*  CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, 
*  INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
*  MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
*  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS 
*  BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
*  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED 
*  TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
*  ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
*  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY 
*  OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
*  POSSIBILITY OF SUCH DAMAGE.
*  
*********************************************************************/


/********************************************************************
*   _____       ______  _____                                       *
*  |_   _|     |  ____|/ ____|                                      *
*    | |  _ __ | |__  | (___    Institute of Embedded Systems       *
*    | | | '_ \|  __|  \___ \   Zurich University of Applied        *
*   _| |_| | | | |____ ____) |  Sciences                            *
*  |_____|_| |_|______|_____/   8401 Winterthur, Switzerland        *
*                                                                   *
*********************************************************************
* 
*  Project     : Parallel Redundancy Protocol
* 
*  Version     : 1.0
*  Author      : Sven Meier
* 
*********************************************************************
*  Change History
*
*  Date     | Name     | Modification
************|**********|*********************************************
*  17.12.07 | mesv     | file created
*********************************************************************/

#ifndef PRP_Package_T_H 
#define PRP_Package_T_H 

#include "PRP_DataTypes_T.h"

#define PRP_TIMER_TICK_INTERVAL			100 /* in ms */

#define PRP_RCT_LENGTH					4
#define PRP_MTU							1496

#define PRP_ID_LAN_A					0xa
#define PRP_ID_LAN_B					0xb

#define PRP_KEEP_IN_ORDER				0
#define PRP_KEEP_OUT_OF_ORDER			1
#define PRP_DROP						2
#define PRP_KEEP						0

#define PRP_NODETABLE_END				1
#define PRP_NODE_DELETED				2


#define PRP_ERROR_NULL_PTR 				1
#define PRP_ERROR_WRONG_VAL 			2	
#define PRP_ERROR_NOT_SUPPORTED			3
#define PRP_ERROR_ADAPTER				4
#define PRP_ERROR_FRAME_COR				5
#define PRP_ERROR_NOT_INITIALIZED		6


#define PRP_ETH_ADDR_LENGTH 			6
#define PRP_NODE_NAME_LENGTH 			32
#define PRP_MANUFACTURER_NAME_LENGTH 	256
#define PRP_VERSION_LENGTH 				32

#define PRP_LIFE_CHECK_INTERVAL			2000 /* in ms */
#define PRP_NODE_FORGET_TIME			60 /* in seconds */
#define PRP_LINK_TIME_OUT				6 /* in seconds */
#define PRP_DROP_WINDOW_MAX_SIZE		32768
#define PRP_DROP_WINDOW_SIZE			65535
#define PRP_HALF_DROP_WINDOW_SIZE       32768
#define PRP_MAX_SKEW_TIME				10 /* in ms */


/*
#define SUPERVISION_ETHERTYPE			0x88FB
#define PRP_VERSION						0x0000
*/
/*
#define PRP_TYPE_DUPLICATE_DISCARD		0x14
#define PRP_TYPE_DUPLICATE_ACCEPT		0x15
*/
/*#define PRP_LENGTH						0x0C*/


#define PRP_SECOND_IN_NANOSECONDS		1000000000
#define PRP_MILLISECOND_IN_NANOSECONDS	1000000

#define PRP_RAPID_SPANNING_TREE_UNKOWN    	0
#define PRP_RAPID_SPANNING_TREE_ALTERNATE	1
#define PRP_RAPID_SPANNING_TREE_ROOT    	2

#define PRP_RAPID_SPANNING_TREE_BETTER_RECEIVED		0
#define PRP_RAPID_SPANNING_TREE_EQUAL_RECEIVED		1
#define PRP_RAPID_SPANNING_TREE_WORSE_RECEIVED		2
#define PRP_RAPID_SPANNING_TREE_LINK_DOWN			3

struct PRP_Lock_T; 
typedef struct PRP_Lock_T PRP_Lock_T;

struct PRP_Timer_T; 
typedef struct PRP_Timer_T PRP_Timer_T;

struct PRP_Trailer_T; 
typedef struct PRP_Trailer_T PRP_Trailer_T;

struct PRP_Supervision_T; 
typedef struct PRP_Supervision_T PRP_Supervision_T;

struct PRP_BridgingFrame_T; 
typedef struct PRP_BridgingFrame_T PRP_BridgingFrame_T;

struct PRP_Bridging_T; 
typedef struct PRP_Bridging_T PRP_Bridging_T;

struct PRP_RedundancyControlTrailer_T;
typedef struct PRP_RedundancyControlTrailer_T PRP_RedundancyControlTrailer_T;

struct PRP_NodeTable_T;
typedef struct PRP_NodeTable_T PRP_NodeTable_T;

struct PRP_Node_T;
typedef struct PRP_Node_T PRP_Node_T;

struct PRP_Frames_T; 
typedef struct PRP_Frames_T PRP_Frames_T;

struct PRP_FrameAnalyser_T; 
typedef struct PRP_FrameAnalyser_T PRP_FrameAnalyser_T;

struct PRP_EnvironmentConfiguration_T; 
typedef struct PRP_EnvironmentConfiguration_T PRP_EnvironmentConfiguration_T;

struct PRP_Environment_T; 
typedef struct PRP_Environment_T PRP_Environment_T;

struct PRP_DropWindowTable_T; 
typedef struct PRP_DropWindowTable_T PRP_DropWindowTable_T;

struct PRP_DropWindow_T; 
typedef struct PRP_DropWindow_T PRP_DropWindow_T;

struct PRP_DiscardAlgorithm_T; 
typedef struct PRP_DiscardAlgorithm_T PRP_DiscardAlgorithm_T;

#endif
