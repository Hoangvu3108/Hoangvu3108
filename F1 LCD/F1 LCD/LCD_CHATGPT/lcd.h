#ifndef __LCD_H
#define __LCD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f10x.h"
#include "delay.h"

void RCC_Config();
void GPIO_Config(void);
void LCD_Config(void);
void LCD_Send4Bit(unsigned char Data);
void LCD_SendCommand(unsigned char command);
void LCD_Clear(void);
void LCD_Init(void);
void LCD_Gotoxy(unsigned char x, unsigned char y);
void LCD_PutChar(unsigned char Data);
void LCD_Puts(char *s);

#ifdef __cplusplus
}
#endif

#endif /* __LCD_H */