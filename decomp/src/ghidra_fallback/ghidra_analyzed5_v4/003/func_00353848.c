#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00355C50(int param_1);
extern int func_0036B758(int param_1);
extern int func_0036BE78();
extern float func_004F944C(void);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_00666318(undefined4 *param_1,undefined1 param_2);
extern uint DAT_0035391c;
extern float DAT_00353920;
extern float DAT_00353924;

// USA 00353848 <- EU 00353824 (Ghidra, non-matching)
// GLOBAL DAT_0035391c uint
// GLOBAL DAT_00353920 float
// GLOBAL DAT_00353924 float

void func_00353848(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  
  iVar1 = func_0036BE78(param_1 + 0x8c8);
  uVar4 = func_0058AB74(param_1);
  if (((int)uVar4 != 0) && ((int)uVar4 == 0xd)) {
    fVar3 = func_0058AA40(param_1);
    if ((int)ALBW_AS_U32(fVar3) + 0xbdbfffffU < DAT_0035391c) {
      func_0051D39C((int *)(param_1 + 1000),0,(int)(DAT_00353920 - fVar3));
    }
    iVar2 = func_0058A8F0(param_1);
    if (iVar2 != 0) {
      func_0036B758(param_1 + 0x8c8);
      func_004FABDC(param_1,0,0xffffffff,0);
    }
  }
  func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_00353924);
  if (*(float *)(param_1 + 0x3d4) < *(float *)(param_1 + 0xc)) {
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0xc);
    fVar3 = func_004F944C();
    *(float *)(param_1 + 0x3e0) = fVar3;
  }
  func_00355C50(param_1);
  if (iVar1 != 0) {
    func_00666318((undefined4 *)(param_1 + 0xa5c),5);
  }
  return;
}

