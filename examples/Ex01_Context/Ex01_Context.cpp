#include "engine/Context.h"

using namespace hlab;

int main()
{
    vector<const char*> requiredInstanceExtensions = {}; // empty
    bool useSwapchain = false; // off

    // 출력 없이 초기화만 하는 예제
    Context ctx(requiredInstanceExtensions, useSwapchain); 

    return 0;
}

/*
~Context: GPU Device에 관한 정보
~useSwapchain: 그래픽스 출력이 필요없는 상황에서는 off 하기도 함 (예: Only Compute)
~requiredInstanceExtensions: OS에 따라 요구하는 Extension 목록
*/