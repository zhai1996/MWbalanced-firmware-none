
#include "delay.h"
#include <intrins.h>


void Delay10us()		//@20.000MHz
{
	unsigned char i;

	_nop_();
	_nop_();
	i = 47;
	while (--i);
}



/***************************************************************
** 函数名称: Delay1ms
** 功能描述: 延时1ms函数（不精准）
** 输　入:   
** 输　出:   
** 全局变量: 
** 作　者:   喵呜实验室
** 淘  宝：  Http://miaowlabs.taobao.com
** 日　期:   2014年08月01日
***************************************************************/
void Delay1ms()		//@20.000MHz
{
	unsigned char i, j;

	i = 20;
	j = 113;
	do
	{
		while (--j);
	} while (--i);
}






/***************************************************************
** 函数名称: Delaynms
** 功能描述: 延时nms函数（不精准）
** 输　入:   
** 输　出:   
** 全局变量: 
** 作　者:   喵呜实验室
** 淘  宝：  Http://miaowlabs.taobao.com
** 日　期:   2014年08月01日
***************************************************************/
 void Delaynms(unsigned int n)
 {

   unsigned int i;
   for(i=0;i<n;i++) Delay1ms();

 }
