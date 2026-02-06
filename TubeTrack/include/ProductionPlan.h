// ProductionPlan.h 投料计划 类定义
#pragma once
#include "Tube.h"

class CProductionPlan
{
public:
    bool Pop(CTube *pTube, int mode = 0);
};