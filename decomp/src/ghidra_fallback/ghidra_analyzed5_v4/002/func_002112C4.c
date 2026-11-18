#include "ghidra_types.h"

extern int func_003C2464(int param_1,int param_2,float fparam_0);
extern int func_0058A8F0(int param_1);
extern float func_0058AC38(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_0065D774(undefined4 *param_1,undefined1 param_2);
extern float DAT_00211320;
extern float DAT_00211324;

// USA 002112C4 <- EU 002112C4 (Ghidra, non-matching)
// GLOBAL DAT_00211320 float
// GLOBAL DAT_00211324 float

void func_002112C4(int param_1)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  
  lVar3 = func_0058ACC8(param_1,DAT_00211320);
  if ((int)lVar3 != 0) {
    fVar2 = func_0058AC38(param_1);
    func_003C2464(param_1 + 0x8e0,(int)fVar2,DAT_00211324);
  }
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_0065D774((undefined4 *)(param_1 + 0x8bc),3);
  }
  return;
}

