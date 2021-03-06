#ifndef  __ADC_TASK_H__
#define  __ADC_TASK_H__
#include "stdint.h"
#include "cmsis_os.h"


#ifdef   __cplusplus
#define  ADC_TASK_BEGIN        extern "C" {
#define  ADC_TASK_END          }
#else
#define  ADC_TASK_BEGIN      
#define  ADC_TASK_END       
#endif


ADC_TASK_BEGIN   


/*adc任务句柄*/
extern osThreadId adc_task_hdl;
/*
* @brief 
* @param
* @param
* @return 
* @note
*/
void adc_task(void const * argument);

#define  ADC_TASK_PUT_MSG_TIMEOUT  5







ADC_TASK_END


#endif