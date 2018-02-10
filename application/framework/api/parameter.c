#include "parameter.h"
#include <pthread.h>
#include "../library/common/trans_protocal.h"
#include <string.h>
#include <stdlib.h>

int ui_write(ENUM_UI_DEVICE device, void *parameter, unsigned int len, unsigned int timeout)
{
	STRU_PARAMETER_INFO *p_parameter = malloc(sizeof(STRU_PARAMETER_INFO));
	if ( 0 == p_parameter )
	{
		DEBUG_ERROR("malloc fail\n");
		return -1;
	}

	free(p_parameter);
	return 0;
}

int ui_read(ENUM_UI_DEVICE device, void *parameter, unsigned int timeout)
{
	STRU_PARAMETER_INFO *p_parameter = malloc(sizeof(STRU_PARAMETER_INFO));
	if ( 0 == p_parameter )
	{
		DEBUG_ERROR("malloc fail\n");
		return -1;
	}

	memcpy(parameter, p_parameter, sizeof(STRU_PARAMETER_INFO));

	free(p_parameter);
	return 0;
	
}

int ui_register_rx_handler(ui_rx_handler ui_handler)
{
/*
	function table will called from system level
	function_table[x] = ui_handler;
*/
    return 0;
}

int ui_register_irq_handle(ENUM_UI_IRQ ui_irq, ui_irq_handler ui_irq_hander)
{
	/*
		function table will called from system level
		function_table[x] = ui_handler;
	*/
    return 0;
}

