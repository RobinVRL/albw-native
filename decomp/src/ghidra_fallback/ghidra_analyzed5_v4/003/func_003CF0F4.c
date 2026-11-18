#include "ghidra_types.h"

extern int DAT_003cf17c;
extern int DAT_003cf180;
extern int DAT_003cf184;

// USA 003CF0F4 <- EU 003CF0D0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_003cf17c int
// GLOBAL DAT_003cf180 int
// GLOBAL DAT_003cf184 int

int func_003CF0F4(int *param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    return DAT_003cf17c;
  }
  if ((param_2 != 0) && (0x6f < param_3)) {
    aiStack_18[0] = 0;
    if (param_4 == 1) {
      iVar1 = (**(code **)(*param_1 + 0x14))(param_1,iVar1,1,param_5,8,aiStack_18,param_2,param_3);
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x14))(param_1,iVar1,0,param_5,8,aiStack_18,param_2,param_3);
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    iVar1 = DAT_003cf184;
    if (aiStack_18[0] != 0) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return DAT_003cf180;
}

