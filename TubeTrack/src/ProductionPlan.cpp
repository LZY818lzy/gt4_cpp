// ProductionPlan.cpp 投料计划实现
#include "ProductionPlan.h"

bool CProductionPlan::Pop(CTube *pTube, int /*mode*/)
{
    static int flow_no = 0;
    /* 填充管子数据 */;
    (*pTube).calib_tube = false;
    (*pTube).order_no = "12345678";
    (*pTube).item_no = "ITEM001";
    (*pTube).roll_no = "ROLL1234";
    (*pTube).melt_no = "MELT5678";
    (*pTube).lot_no = "LOT91011";
    (*pTube).tube_no = 1;
    (*pTube).flow_no = flow_no++;
    (*pTube).lotno_coupling = "COUPLELOT";
    (*pTube).meltno_coupling = "COUPLEMELT";
    (*pTube).length = 6.0f;
    (*pTube).weight = 12.5f;
    (*pTube).lengthOk = true;
    (*pTube).weightOk = true;
    (*pTube).bSprayed = false;

    // 投料计划的出栈逻辑实现
    return true; // 示例返回值
}