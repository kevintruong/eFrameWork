/**************************************************************************/
/*! 
 @file     eError.h
 @author   KEVIN
 @section LICENSE
 Software License Agreement (BSD License)
 Copyright (c) 2015 KEVIN
 All rights reserved.
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 1. Redistributions of source code must retain the above copyright
 notice, this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright
 notice, this list of conditions and the following disclaimer in the
 documentation and/or other materials provided with the distribution.
 3. Neither the name of the copyright holders nor the
 names of its contributors may be used to endorse or promote products
 derived from this software without specific prior written permission.
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY
 EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/**************************************************************************/
#ifndef EINCLUDE_EERROR_H_
#define EINCLUDE_EERROR_H_

#ifdef __cplusplus
extern "C"
{
#endif

typedef Int32 ErrorCode;

/*---------------------------------------------------
 * Common error codes
 * --------------------------------------------------*/
#define SUCCESS                    		 0 	/** Global success return status   */
#define ERROR													-1	/** Global error return status*/
#define ERR_LIMITED										-3 	/** return when over Max value*/
#define ERR_NONE_DATA									-4 	/** return when don't have response data*/
#define ERR_GET_MORE_INF							-5 	/** return when want to get next data*/
#define ERR_BAD_LC										-6  /** return when length of command incorrect*/
#define ERR_BAD_LE										-7	/** return when response data > expected data*/
#define WAR_BAD_LE										-8	/** return when response data < expected data*/
#define TIME_ERR											-9	//
#define ERR_ICC_MUTE									-10	//

#define ERR_COMPATIBILITY							-101 /** SW Interface compatibility   */
#define ERR_MAJOR_VERSION							-102 /** SW Major Version error       */
#define ERR_COMP_VERSION							-103 /** SW component version error   */
#define ERR_BAD_MODULE_ID							-104 /** SW - HW module ID error      */
#define ERR_BAD_UNIT_NUMBER						-105 /** Invalid device unit number   */
#define ERR_BAD_INSTANCE							-106 /** Bad input instance value     */
#define ERR_BAD_HANDLE								-107 /** Bad input handle             */
#define ERR_BAD_INDEX									-108 /** Bad input index              */
#define ERR_BAD_PARAMETER							-109 /** Invalid input parameter      */
#define ERR_NO_INSTANCES							-110 /** No instances available       */
#define ERR_NO_COMPONENT							-111 /** Component is not present     */
#define ERR_NO_RESOURCES							-112 /** Resource is not available    */
#define ERR_INSTANCE_IN_USE						-113 /** Instance is already in use   */
#define ERR_RESOURCE_OWNED						-114 /** Resource is already in use   */
#define ERR_RESOURCE_NOT_OWNED				-115 /** Caller does not own resource */
#define ERR_INCONSISTENT_PARAMS				-116 /** Inconsistent input params    */
#define ERR_NOT_INITIALIZED						-117 /** Component is not initialized */
#define ERR_NOT_ENABLED								-118 /** Component is not enabled     */
#define ERR_NOT_SUPPORTED							-119 /** Function is not supported    */
#define ERR_INIT_FAILED								-120 /** Initialization failed        */
#define ERR_BUSY											-121 /** Component is busy            */
#define ERR_NOT_BUSY									-122 /** Component is not busy        */
#define ERR_READ											-123 /** Read error                   */
#define ERR_WRITE											-124 /** Write error                  */
#define ERR_ERASE											-125 /** Erase error                  */
#define ERR_LOCK											-126 /** Lock error                   */
#define ERR_UNLOCK										-127 /** Unlock error                 */
#define ERR_OUT_OF_MEMORY							-128 /** Memory allocation failed     */
#define ERR_BAD_VIRT_ADDRESS					-129 /** Bad virtual address          */
#define ERR_BAD_PHYS_ADDRESS					-130 /** Bad physical address         */
#define ERR_TIMEOUT										-131 /** Timeout error                */
#define ERR_OVERFLOW									-132 /** Data overflow/overrun error  */
#define ERR_FULL											-133 /** Queue (etc.) is full         */
#define ERR_EMPTY											-134 /** Queue (etc.) is empty        */
#define ERR_NOT_STARTED								-135 /** Component stream not started */
#define ERR_ALREADY_STARTED						-136 /** Comp. stream already started */
#define ERR_NOT_STOPPED								-137 /** Component stream not stopped */
#define ERR_ALREADY_STOPPED						-138 /** Comp. stream already stopped */
#define ERR_ALREADY_SETUP							-139 /** Component already setup      */
#define ERR_NULL_PARAMETER						-140 /** Null input parameter         */
#define ERR_NULL_DATAINFUNC						-141 /** Null data input function     */
#define ERR_NULL_MEMORYALLOCATE				-142 /** Null memory allocated    */
#define ERR_NULL_CONTROLFUNC					-143 /** Null control function        */
#define ERR_NULL_COMPLETIONFUNC				-144 /** Null completion function     */
#define ERR_NULL_PROGRESSFUNC					-145 /** Null progress function       */
#define ERR_NULL_ERRORFUNC						-146 /** Null error handler function  */
#define ERR_NULL_MEMALLOCFUNC					-147 /** Null memory alloc function   */
#define ERR_NULL_MEMFREEFUNC					-148 /** Null memory free  function   */
#define ERR_NULL_CONFIGFUNC						-149 /** Null configuration function  */
#define ERR_NULL_PARENT								-150 /** Null parent data             */
#define ERR_NULL_IODESC								-151 /** Null in/out descriptor       */
#define ERR_NULL_CTRLDESC							-152 /** Null control descriptor      */
#define ERR_UNSUPPORTED_DATACLASS			-153 /** Unsupported data class       */
#define ERR_UNSUPPORTED_DATATYPE			-154 /** Unsupported data type        */
#define ERR_UNSUPPORTED_DATASUBTYPE		-155 /** Unsupported data subtype     */
#define ERR_FORMAT										-156 /** Invalid/unsupported format   */
#define ERR_INPUT_DESC_FLAGS					-157 /** Bad input  descriptor flags  */
#define ERR_OUTPUT_DESC_FLAGS					-158 /** Bad output descriptor flags  */
#define ERR_CAP_REQUIRED							-159 /** Capabilities required ???    */
#define ERR_BAD_TMALFUNC_TABLE				-160 /** Bad TMAL function table      */
#define ERR_INVALID_CHANNEL_ID				-161 /** Invalid channel identifier   */
#define ERR_INVALID_COMMAND						-162 /** Invalid command/request      */
#define ERR_STREAM_MODE_CONFUSION			-163 /** Stream mode config conflict  */
#define ERR_UNDERRUN									-164 /** Data underflow/underrun      */
#define ERR_EMPTY_PACKET_RECVD			-165 /** Empty data packet received   */
#define ERR_OTHER_DATAINOUT_ERR			-166 /** Other data input/output err  */
#define ERR_STOP_REQUESTED				-167 /** Stop in progress             */
#define ERR_PIN_NOT_STARTED				-168/** Pin not started              */
#define ERR_PIN_ALREADY_STARTED			-169 /** Pin already started          */
#define ERR_PIN_NOT_STOPPED				-170 /** Pin not stopped              */
#define ERR_PIN_ALREADY_STOPPED			-171 /** Pin already stopped          */
#define ERR_PAUSE_PIN_REQUESTED			-172 /** Pause of single pin in progrs*/
#define ERR_ASSERTION					-173 /** Assertion failure            */
#define ERR_HIGHWAY_BANDWIDTH			-174 /** Highway bandwidth bus error  */
#define ERR_HW_RESET_FAILED				-175 /** Hardware reset failed        */
#define ERR_PIN_PAUSED					-176 /** Pin paused                   */
#define ERR_BAD_FLAGS					-177 /** Bad flags                    */
#define ERR_BAD_PRIORITY				-178 /** Bad priority                 */
#define ERR_BAD_REFERENCE_COUNT			-179 /** Bad reference count          */
#define ERR_BAD_SETUP					-180 /** Bad setup                    */
#define ERR_BAD_STACK_SIZE				-181 /** Bad stack size               */
#define ERR_BAD_TEE						-182 /** Bad tee                      */
#define ERR_IN_PLACE					-183 /** In place                     */
#define ERR_NOT_CACHE_ALIGNED			-184 /** Not cache aligned            */
#define ERR_NO_ROOT_TEE					-185 /** No root tee                  */
#define ERR_NO_TEE_ALLOWED				-186 /** No tee allowed               */
#define ERR_NO_TEE_EMPTY_PACKET			-187 /** No tee empty packet          */
#define ERR_NULL_PACKET					-189 /** Null packet                  */
#define ERR_FORMAT_FREED				-190 /** Format freed                 */
#define ERR_FORMAT_INTERNAL				-191 /** Format internal              */
#define ERR_BAD_FORMAT					-192 /** Bad format                   */
#define ERR_FORMAT_NEGOTIATE_SUBCLASS	-193 /** Format negotiate subclass    */
#define ERR_FORMAT_NEGOTIATE_DATASUBTYPE -194/** Format negot. datasubtype    */
#define ERR_FORMAT_NEGOTIATE_DATATYPE	-195 /** Format negotiate datatype    */
#define ERR_FORMAT_NEGOTIATE_DESCRIPTION -196/** Format negot. description    */
#define ERR_NULL_FORMAT					-197 /** Null format                  */
#define ERR_FORMAT_REFERENCE_COUNT		-198 /** Format reference count       */
#define ERR_FORMAT_NOT_UNIQUE			-199 /** Format not unique            */
#define ERR_NEW_FORMAT					-200 /** New format         		     */

#define ERR_NOT_FOUND					-201 /** Not Found 				     */
#define ERR_CRC							-202 /** Check CRC fail			     */
#define ERR_SPI_FAIL					-203 /** Fail to access SPI           */
#define ERR_SSP_FAIL					-204 /** Fail to access SSP			 */
#define ERR_I2C_FAIL					-205 /** Fail to access SSP			 */
#define ERR_INVALID_VERSION				-206 /** version check fail		     */
#define ERR_FLASH						-207 /** Flash has been fail, need to maintain*/
#define ERR_CM_FAIL						-208 /** Fail to access CM */
#define ERR_CONSISTENCY					-209 /** Something's not consistency  */
#define ERR_VEND_FAIL					-210 /** To report vend fail to system status */
#define ERR_PN53x						-211 /** Fail to init PN53x */
#define ERR_CONCURRENCY					-212
#define ERR_WATCHDOG_RESET				-213 /** The system has been reseted by watchdog  timer*/
#define ERR_CM_WRONGPASSWORD			-214 /** When Authenticate using Password7 is wrong*/
#define ERR_TKI_CARD_TRANSACTION		-215

#define ERR_NETWORK_START				-300 /** Fail to init network module  */
#define ERR_NETWORK_CONNECT				-301 /** Fail to connect to server    */
#define ERR_NETWORK_SSH					-302 /** Fail to start ssh session    */
#define ERR_NETWORK_AUTHEN				-303 /** Fail to authenticate ssh     */
#define ERR_NETWORK_SFTP				-304 /** Fail to start SFTP service   */
#define ERR_NETWORK_OPEN				-305 /** Fail to open network file    */
#define ERR_NETWORK_READ				-306 /** Fail to read network file    */
#define ERR_NETWORK_WRITE				-307 /** Fail to write network file   */
#define ERR_NETWORK_NOTOPENED			-308 /** Function Called when network not open*/

#define ERR_LOGON_SEND					-320
#define ERR_LOGON_RECEIVE				-321
#define ERR_LOGON_TERMINAL_BLAKCLISTED	-322
#define ERR_LOGON_INVLAID_TRANSACTION	-323
#define ERR_LOGON_LIMIT_EXCEEDED		-324
#define ERR_LOGON_BAD_TERMINAL_ID		-325
#define ERR_LOGON_INVALID_TK_INDEX		-326
#define ERR_LOGON_INVALID_MAC			-327
#define ERR_LOGON_INVALID_HOST			-328
#define ERR_LOGON_UNKNOWN				-328

#define ERR_GPRS						-400 /** GPRS general error           */
#define ERR_GPRS_OPEN					-401 /** Fail to open GPRS module     */
#define ERR_GPRS_NO_MODULE				-402 /** The module doesn't response to any command*/
#define ERR_GPRS_NO_SIM					-403 /** No SIM is inserted*/
#define ERR_GPRS_STATE					-404 /** Inappropriate state          */
#define ERR_GPRS_CONNECT				-405 /** Cannot create GPRS connection*/
#define ERR_GPRS_TCP_CONNECT			-406 /** Cannot create TCP connection */
#define ERR_GPRS_TCP_CONNECTION_LOST	-407 /** Cannot create TCP connection */

/*! \def ERROR_REQUEST_UNIDENTIFIED
 Request is unidentified
 */
#define ERROR_REQUEST_UNIDENTIFIED 0x00000001

/*! \def ERROR_REQUEST_IGNORED
 Request is ignored due to another request is in progress
 */
#define ERROR_REQUEST_IGNORED 0x00000002

/*! \def ERROR_RESPONSE_UNIDENTIFIED
 Response is unidentified
 */
#define ERROR_RESPONSE_UNIDENTIFIED 0x00000003

/*! \def ERROR_RESPONSE_BCCERROR
 Reponse BCC Error
 */
#define ERROR_RESPONSE_BCCERROR 0x00000004

/*! \def ERROR_RESPONSE_TIMEOUT
 Response is time-out
 */
#define ERROR_RESPONSE_TIMEOUT 0x00000005

/*! \def ERROR_SERIALTIMEOUT
 Serial communication is time-out
 */
#define ERROR_SERIALTIMEOUT 0x00000006

/*! \def ERROR_INACTIVITY_TIMEOUT
 Inactivity is time-out
 */
#define ERROR_INACTIVITY_TIMEOUT 0x00000007

/*! \def ERROR_SEQUENCE_ERROR
 Sequence error
 */
#define ERROR_SEQUENCE_ERROR 0x00000008

/*! \def ERROR_PARAMETER_ERROR
 Parameter error
 */
#define ERROR_PARAMETER_ERROR 0x00000009

/*! \def ERROR_EXECUTE_ERROR
 Execute error
 */
#define ERROR_EXECUTE_ERROR 0x0000000A

/*! \def ERROR_SERIALPORT_NOTSET
 Serial Port Not Set
 */
#define ERROR_SERIALPORT_NOTSET 0x0000000B

#ifdef __cplusplus
}
#endif
#endif /* EINCLUDE_EERROR_H_ */
