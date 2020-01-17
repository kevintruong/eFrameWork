#include "eLogger.h"


/************************************************************************************/
/*                                DEFINE SECTION                                    */
/************************************************************************************/


/************************************************************************************/
/*                                MACRO DEFINE                                      */
/************************************************************************************/


/************************************************************************************/
/*                                STACIC VARIABLE                                   */
/************************************************************************************/
static const LogLevel_t LogHeader[] = {
        {LOG_TRACE, "TRACE", "\x1b[94m"},
        {LOG_DEBUG, "DEBUG", "\x1b[36m"},
        {LOG_INFO,  "INFO",  "\x1b[32m"},
        {LOG_WARM,  "WARN",  "\x1b[33m"},
        {LOG_ERROR, "ERROR", "\x1b[36m"},
        {LOG_FATAL, "FATAL", "\x1b[35m"}
};


/************************************************************************************/
/*                                STACIC FUNCTION DECLARE                           */
/************************************************************************************/


/************************************************************************************/
/*                                STATIC FUNCTION IMPLEMENTATION                    */
/************************************************************************************/


/************************************************************************************/
/*                                GLOBAL FUNCTION DEFINE                             */
/************************************************************************************/