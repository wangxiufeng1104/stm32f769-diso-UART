#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>


#ifndef SIMULATOR
#include "stm32f7xx_hal.h"
#include "cmsis_os.h"
#include <gui/common/UserBoardPara.hpp>

extern osMessageQId led_msgHandle;
#endif


Model::Model() : modelListener(0)
{
}

void Model::tick()
{
}

void Model::set_light_toggle(uint8_t data)
{
  osMessagePut(led_msgHandle,data,200);
}
