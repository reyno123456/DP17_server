#ifndef _PARAMETER_H
#define _PARAMETER_H

#include "../library/common/trans_protocal.h"

#define UI_NONE_BLOCK 0
#define UI_BLOCK 0xFFFFFFFF

typedef unsigned int STRU_DEVICE_INFO;
typedef unsigned int (*ui_rx_handler)(void *stru, unsigned int len);
typedef void(*ui_irq_handler)(void);


typedef enum
{
	UI_DEVICE_ALL = 0,
	UI_DEVICE_MOTOR,
	UI_DEVICE_PTC
} ENUM_UI_DEVICE;

typedef enum
{
	UI_IRQ_BUTTON = 0,
	UI_IRQ_ALARM,
	UI_IRQ_TOUCH
} ENUM_UI_IRQ;



typedef struct
{
	STRU_MOTOR_INFO motor;
	STRU_PTC_INFO ptc;
}STRU_PARAMETER_INFO;

int ui_write(ENUM_UI_DEVICE device, void *parameter, unsigned int len, unsigned int timeout);
int ui_read(ENUM_UI_DEVICE device, void *parameter, unsigned int timeout);
int ui_register_rx_handler(ui_rx_handler ui_handler);

#endif
