/*!****************************************************************************
 * @file
 * stm32f1xx_ll_assert.c
 *
 * @brief
 * Assert function
 *
 * @date  21.08.2023
 ******************************************************************************/

/*- Header files -------------------------------------------------------------*/
#include "stm32f1xx_hal_def.h"
#include "stm32f1xx_ll_assert.h"


/*!*****************************************************************************
 * @brief
 * Assertion failure
 *
 * @param[in] pszFile     Source file name
 * @param[in] ulLine      Source file line number
 * @date  21.08.2023
 ******************************************************************************/
__weak void LL_Assert_Failed(const char* pszFile, uint32_t ulLine)
{
  /* Function template for debug only, override implemented
   * in application source.                               */
  static volatile const char* LL_Assert_FileName = NULL;
  static volatile uint32_t LL_Assert_LineNumber = 0u;

  /* Ensure file name and line number are saved           */
  LL_Assert_FileName = pszFile;
  LL_Assert_LineNumber = ulLine;

  /* Debugger breakpoint                                  */
  __BKPT();
}