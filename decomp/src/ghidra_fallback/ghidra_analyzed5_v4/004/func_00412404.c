#include "ghidra_types.h"

extern int func_001022F4(void);
extern int func_0010EE40(void);
extern int func_003D2908(undefined4 param_1,undefined4 param_2);
extern int func_0041252C(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,int param_6);
extern int func_00569B0C(int param_1,uint param_2,undefined4 *param_3);

// USA 00412404 <- EU 004123E4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int

uint func_00412404(int *param_1,uint param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((int *)(albw_frame + 0x0))
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if (uVar1 != 0) {
    return uVar1;
  }
  local_30[0] = -1;
  local_30[1] = 0xffffffff;
  local_30[2] = 0;
  iVar2 = func_00569B0C(param_1[1],param_2,local_30);
  if (iVar2 != 0) {
    unaff_r4 = local_30[0];
  }
  if ((iVar2 == 0 || unaff_r4 == 0) || unaff_r4 == -1) {
    return 0;
  }
  uVar1 = (**(code **)(*param_3 + 8))(param_3,unaff_r4);
  if (uVar1 == 0) {
    return 0;
  }
  if (param_5 != 0) {
    uVar3 = func_0010EE40();
    iVar2 = func_001022F4();
    if ((uVar1 < uVar3) || (iVar2 + uVar3 < uVar1 + unaff_r4)) {
      uVar1 = 0;
      goto LAB_004124d4;
    }
  }
  iVar2 = func_0041252C((int)param_1,param_2,uVar1,unaff_r4,0,param_4);
  if (iVar2 != unaff_r4) {
    return 0;
  }
  func_003D2908(uVar1,unaff_r4);
LAB_004124d4:
  if (uVar1 == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2,uVar1);
  return uVar1;
}

