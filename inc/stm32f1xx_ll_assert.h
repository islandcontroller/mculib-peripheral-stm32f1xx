/*!****************************************************************************
 * @file
 * stm32f1xx_ll_assert.h
 *
 * @brief
 * Assert function
 *
 * @date  21.08.2023
 ******************************************************************************/

#ifndef STM32F1XX_LL_ASSERT_H_
#define STM32F1XX_LL_ASSERT_H_

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx.h"


/* Exported macros------------------------------------------------------------*/
#ifdef USE_FULL_ASSERT
#define assert_param(expr) ((expr) ? (void)0U : LL_Assert_Failed(__FILE__, __LINE__))
#else
#define assert_param(expr) ((void)0U)
#endif /* USE_FULL_ASSERT */


/* Exported functions ------------------------------------------------------- */
#ifdef USE_FULL_ASSERT
void LL_Assert_Failed(const char* pszFile, uint32_t ulLine);
#endif /* USE_FULL_ASSERT */

#endif /* STM32F1XX_LL_ASSERT_H_ */



