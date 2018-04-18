#include "includes.h"






void BSP_Init(void)
{
    Comm1_Init(&huart1);
    Comm3_Init(&huart3);
    Comm5_Init(&huart5);
	W25Q_Init();
	MS5611_Init();
	HMC5983_Init();
	Max21100_Init();
	BSP_GPIO_SonicInit();
	
    BSP_PWMChannelStart();
	HAL_TIM_Base_Start_IT(&htim6);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);	/* turn off green light. */
}
