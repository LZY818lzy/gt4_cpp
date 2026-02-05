// TubeTrackObject.cpp
// 在此文件中以「全局变量」形式创建所有工位的实例

#include "ProductionPlan.h"
#include "LengthPosition.h"
#include "CarvePosition.h"
#include "WeightPosition.h"
#include "SprayPosition.h"
#include "CirclePosition.h"
#include "ScraptRoller.h"
#include "BackBuffer.h"
#include "Scrapt.h"
#include "Basket.h"


// 全局实例（程序启动前构造，程序退出时自动析构）
CProductionPlan prodPlan;
CLengthPosition lengthPos;
CCarvePosition  carvePos;
CWeightPosition weightPos;
CSprayPosition  sprayPos;
CCirclePosition circlePos;
CScraptRoller  scraptRoller;
CBackBuffer     backBuffer;
CScrapt         scrapt;
CBasket         basket;

// 兼容性函数（空实现）
// 保留同名函数但改为 no-op（全局对象已在文件作用域构造）
void CreateTubeTrackObjects()
{
    // 全局对象在程序启动前已构造：无操作（保留以兼容现有调用点）
}

void DestroyTubeTrackObjects()
{
    // 全局对象将自动在程序退出时析构：无操作
}

bool TubeTrackObjectsInitialized()
{
    // 全局对象在静态初始化阶段已构造 —— 若默认构造失败则为未定义行为，正常情况下返回 true
    return true;
}

