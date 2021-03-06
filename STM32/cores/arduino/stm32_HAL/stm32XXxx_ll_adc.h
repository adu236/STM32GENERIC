#include "stm32_build_defines.h"

#if defined(STM32F0)
    #include "stm32f0xx_ll_adc.h"
#endif
#if defined(GD32F1x0)
    #include "gd32f1x0_ll_adc.h"
#endif
#if defined(STM32F1)
    #include "stm32f1xx_ll_adc.h"
#endif
#if defined(GD32F2)
    #include "gd32f2xx_ll_adc.h"
#endif
#ifdef STM32F2
    #include "stm32f2xx_ll_adc.h"
#endif
#ifdef STM32F3
    #include "stm32f3xx_ll_adc.h"
#endif
#ifdef STM32F4
    #include "stm32f4xx_ll_adc.h"
#endif
#ifdef STM32F7
    #include "stm32f7xx_ll_adc.h"
#endif
#ifdef STM32H7
    #include "stm32h7xx_ll_adc.h"   
#endif
#ifdef STM32L0
    #include "stm32l0xx_ll_adc.h"
#endif
#ifdef STM32L1
    #include "stm32l1xx_ll_adc.h"
#endif
#ifdef STM32L4
    #include "stm32l4xx_ll_adc.h"
#endif
