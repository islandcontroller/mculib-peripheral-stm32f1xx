/*!****************************************************************************
 * @file
 * stm32f1xx_ll_assert.c
 *
 * @brief
 * Assert function
 *
 * @date  21.08.2023
 * @date  21.09.2023  Moved assert info to global debug variables; Removed un-
 *                    used header include
 ******************************************************************************/

/*- Header files -------------------------------------------------------------*/
#include "stm32f1xx_ll_assert.h"

#ifdef USE_FULL_ASSERT
/*- Global Variables ---------------------------------------------------------*/
/*! Assertion file name (debugger access)                                     */
volatile const char* LL_Assert_FileName = NULL;

/*! Assertion line number (debugger access)                                   */
volatile uint32_t LL_Assert_LineNumber = 0u;


/*!*****************************************************************************
 * @brief
 * Assertion failure
 *
 * @param[in] pszFile     Source file name
 * @param[in] ulLine      Source file line number
 * @date  21.08.2023
 * @date  21.09.2023  Moved FileName, LineNumber to global variables for Debug
 ******************************************************************************/
__weak void LL_Assert_Failed(const char* pszFile, uint32_t ulLine)
{
  /* Ensure file name and line number are saved           */
  LL_Assert_FileName = pszFile;
  LL_Assert_LineNumber = ulLine;

  /* Debugger breakpoint                                  */
  __BKPT();
}
#endif /* USE_FULL_ASSERT */