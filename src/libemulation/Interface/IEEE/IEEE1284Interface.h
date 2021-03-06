
/**
 * libemulation
 * IEEE 1284 (parallel port) Interface
 * (C) 2010 by Marc S. Ressl (mressl@umich.edu)
 * Released under the GPL
 *
 * Defines the IEEE 1284 (parallel port) interface
 */

#ifndef _IEEE1284INTERFACE_H
#define _IEEE1284INTERFACE_H

typedef enum
{
    IEEE1284_TRANSMIT_DATA,
    IEEE1284_ASSERT_STROBE,
    IEEE1284_CLEAR_STROBE,
    IEEE1284_ASSERT_LF,
    IEEE1284_CLEAR_LF,
    IEEE1284_ASSERT_INIT,
    IEEE1284_CLEAR_INIT,
    IEEE1284_ASSERT_SELECTIN,
    IEEE1284_CLEAR_SELECTIN,
} IEEE1284ComputerMessage;

typedef enum
{
    IEEE1284_DID_RECEIVE_DATA,
    IEEE1284_ACK_DID_CHANGE,
    IEEE1284_BUSY_DID_CHANGE,
    IEEE1284_PE_DID_CHANGE,
    IEEE1284_SELECT_DID_CHANGE,
    IEEE1284_FAULT_DID_CHANGE,
} IEEE1284PrinterMessage;


#endif
