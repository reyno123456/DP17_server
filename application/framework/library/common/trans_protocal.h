#ifndef _TRANS_PROTOCAL
#define _TRANS_PROTOCAL

/* 发送模式定义 */
#define HAL_TRANS_BROADCAST_SET 			0
#define HAL_TRANS_P2P_SET 					1
#define HAL_TRANS_BROADCAST_REQUEST 		2
#define HAL_TRANS_P2P_REQUEST 				3
#define HAL_TRANS_BROADCAST_RESPONSE 		4
#define HAL_TRANS_P2P_RESPONSE 				5
#define HAL_TRANS_BROADCAST_ALIVE			6

/* 物理层定义 */
#define HAL_TRANS_CARRIER_CAN				0
#define HAL_TRANS_CARRIER_RS232				1
#define HAL_TRANS_CARRIER_RS485				2

/* 设备类型定义 */
#define HAL_TRANS_MOTOR						0
#define HAL_TRANS_PTC						1
#define HAL_TRANS_PRESSURE					2
#define HAL_TRANS_HUMIDITY					3
#define HAL_TRANS_LED						4
#define HAL_TRANS_BUZZER					5

/* 电机参数定义 */
#define HAL_TRANS_MOTOR_CLOCKWISE			0
#define HAL_TRANS_MOTOR_ANTICLOCKWISE		1

/* LED设置 */
#define HAL_TRANS_LED_ON					1
#define HAL_TRANS_LED_OFF					0

typedef struct
{
	unsigned direction : 1;
	unsigned on_off : 1;
	unsigned reserved : 2;
	unsigned speed_rough : 4;

	unsigned short speed_fine;
}STRU_MOTOR_INFO;

typedef struct
{
	unsigned int temperature;
}STRU_PTC_INFO;

typedef struct
{
	unsigned frame_type : 4;
	unsigned carrier_type : 4;
	unsigned short length;
	unsigned char send_id;
	unsigned char recv_id;
	unsigned device_type : 4;
	unsigned device_index : 4; 
	void* device_info;
	unsigned char crc;
}STRU_TRANS_FRAME;

#endif
