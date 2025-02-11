/**
  ******************************************************************************
  * @file    STM32工程/工程模版/Hardware
  * @author  贾一帆
  * @version V3.5.0
  * @date    2014-10-4
  * @brief   LED program
  ******************************************************************************
  * @attention
  * Red LED -> PA.8
  * Green LED -> PD.2
  ******************************************************************************
  */  
  
/* Includes ------------------------------------------------------------------*/
#include "LED/led.h"

/** @addtogroup STM32F10x_StdPeriph_Template
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/
/**
  *@brief   初始化PA8和PD2为输出口.并使能这两个口的时钟		
  *@param   None;
  *@retval  None
  */
void LEDInit(void)
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOC, ENABLE);	 //使能PA,PD端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;				 //LED0-->PB.0 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOB, &GPIO_InitStructure);					 //根据设定参数初始化GPIOB.0
	
 GPIO_SetBits(GPIOB,GPIO_Pin_0);						 //PB.0 输出高

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;				 //LED0-->PC.0 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIOC.0
	
 GPIO_SetBits(GPIOC,GPIO_Pin_0);						 //PC.0 输出高
}
 
/******************* (C) COPYRIGHT 2014 STMicroelectronics *****END OF FILE****/
