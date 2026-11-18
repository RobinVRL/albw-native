#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168D60(int param_1,float fparam_0,float fparam_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_001DD484(int param_1,int param_2,undefined4 param_3);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00583B1C(int param_1);
extern float DAT_00185984;
extern float DAT_00185988;
extern int *DAT_0018598c;

// USA 00185820 <- EU 00185820 (Ghidra, non-matching)
// GLOBAL DAT_00185984 float
// GLOBAL DAT_00185988 float
// GLOBAL DAT_0018598c int *

undefined4 func_00185820(int *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  if (param_2 != 0) {
    return 1;
  }
  iVar1 = param_1[0x263];
  if (iVar1 == 0) {
    if ((char)param_1[0x262] == '\0') {
      return 0;
    }
    iVar1 = 1;
  }
  else {
    if (iVar1 == 1) {
      (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
      puVar2 = (uint *)func_002C11E8(aiStack_70,0,0,0);
      func_0016898C(param_1[0x1ed],puVar2);
      func_00168D60(param_1[0x1ed],DAT_00185988,DAT_00185984);
      func_00168E9C((int *)param_1[0x1ed],param_1[0x1e8],(int *)0x0);
      param_1[0x263] = param_1[0x263] + 1;
      return 0;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 0;
      }
      iVar1 = param_1[0x264];
      param_1[0x264] = iVar1 + 1;
      if (iVar1 + 1 < 0x1e) {
        return 0;
      }
      iVar1 = func_001DD484(*DAT_0018598c,4,1);
      if (iVar1 == 0) {
        return 0;
      }
      (**(code **)(*param_1 + 0xac))(param_1,0,0xffffffff);
      return 1;
    }
    iVar1 = func_00583B1C((int)param_1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1[0x264] = 0;
    iVar1 = param_1[0x263] + 1;
  }
  param_1[0x263] = iVar1;
  return 0;
}

