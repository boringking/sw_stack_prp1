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

#ifndef PRP_BridgingFrame_T_H 
#define PRP_BridgingFrame_T_H 

#include "PRP_Package_T.h"

struct PRP_BridgingFrame_T 
{
    uinteger8 flags_;                       /* flags */
    uinteger16 root_prio_and_id_;           /* Root priority and ID */
    octet root_mac_[PRP_ETH_ADDR_LENGTH];   /* Root's mac address */
    uinteger32 root_path_costs_;            /* Path costs to root */
    uinteger16 bridge_prio_and_id_;         /* Priority and ID of the Brdige who sent frame */
    octet bridge_mac_[PRP_ETH_ADDR_LENGTH]; /* The bridge's mac address */
    uinteger16 port_prio_and_id_;           /* Port where the message was sent */
    uinteger16 message_age_;                /* Age of the message */
    uinteger16 max_age_;                    /* Maximum age */
    uinteger16 hello_time_;                 /* How often a BPDU is sent */
    uinteger16 forward_delay_;              /* Forward delay time */
    uinteger8 v1_length_;                   /* For STP */
};

void PRP_BridgingFrame_T_print(PRP_BridgingFrame_T* const me, uinteger32 level);
void PRP_BridgingFrame_T_init(PRP_BridgingFrame_T* const me);
void PRP_BridgingFrame_T_cleanup(PRP_BridgingFrame_T* const me);

#endif /* PRP_BridgingFrame_T_H */

