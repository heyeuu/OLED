#include "stdio.h"
#include "stm32f10x.h"                  // Device header
#include "OLED.h"
#include "OLED_Data.h"
#include "Delay.h"
int main (void)
{
	OLED_Init();
	OLED_Clear();
	OLED_ShowImage(1,1,60,60,TangWuling);

	OLED_ShowChinese(65,25,"愿");
	//Delay_ms(1000);
	OLED_ShowChinese(85,25,"我们");
	//Delay_ms(1000);
	OLED_ShowChinese(60,45,"都能");
	//Delay_ms(2000);
	OLED_ShowChinese(90,45,"成为");
	//Delay_ms(2000);
	OLED_Clear();
	//Delay_ms(6000);
	OLED_ShowImage(1,1,60,60,TangWuling);
	OLED_ShowChinese(65,5,"坚定");
	//Delay_ms(1000);
	OLED_ShowChinese(95,5,"而");
	//Delay_ms(1000);
	OLED_ShowChinese(65,25,"内敛的");
	//Delay_ms(1000);
	OLED_ShowChinese(70,45,"战士！");
	printf("abc");
	
	OLED_Update();
	while(1)
	{
		
	}
}
