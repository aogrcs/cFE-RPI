/*******************************************************************************
** File: serial.h
**
** Purpose:
**   This file is main hdr file for the Serial application.
**
**
*******************************************************************************/

#ifndef _serial_h_
#define _serial_h_

/*
** Required header files.
*/
#include "cfe.h"
#include "cfe_error.h"
#include "cfe_evs.h"
#include "cfe_sb.h"
#include "cfe_es.h"

#include <string.h>
#include <errno.h>
#include <unistd.h>

/* for serial receive and send */
#include <fcntl.h>
#include <termios.h>

/***********************************************************************/

#define SERIAL_PIPE_DEPTH                     32

/************************************************************************
** Type Definitions
*************************************************************************/

/****************************************************************************/
/*
** Local function prototypes.
**
** Note: Except for the entry point (SerialMain), these
**       functions are not called from any other source module.
*/
void SERIALMain(void);
void SERIALInit(void);
void SERIAL_ProcessCommandPacket(void);
void SERIAL_ProcessGroundCommand(void);
void SERIAL_ReportHousekeeping(void);
void SERIAL_ResetCounters(void);
void UARTInit(void);

boolean SERIAL_VerifyCmdLength(CFE_SB_MsgPtr_t msg, uint16 ExpectedLength);

#endif /* _serial_h_ */
