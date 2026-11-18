#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern undefined4 func_0065F560(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern float DAT_00247670;
extern float DAT_00247674;

// USA 0024754C <- EU 0024754C (Ghidra, non-matching)
// GLOBAL DAT_00247670 float
// GLOBAL DAT_00247674 float

void func_0024754C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  
  func_00169A80(*(int **)(param_1 + 0x43c),param_2,param_3,param_4);
  func_00168E9C(*(int **)(param_1 + 0x43c),*(int *)(param_1 + 0x434),(int *)0x0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x43c) + 0x14);
  fVar2 = *(float *)(iVar1 + 0xc);
  if (*(float *)(iVar1 + 8) < fVar2) {
    if (((*(float *)(iVar1 + 0x14) <= fVar2) || (DAT_00247670 <= fVar2)) ||
       (*(float *)(iVar1 + 0x14) < DAT_00247670)) goto joined_r0x002475d0;
  }
  else {
    if (DAT_00247670 <= fVar2) goto LAB_0024760c;
joined_r0x002475d0:
    if (*(float *)(iVar1 + 8) < DAT_00247670) goto LAB_0024760c;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x448) + 0x61) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x44c) + 0x61) = 0;
LAB_0024760c:
  iVar1 = *(int *)(*(int *)(param_1 + 0x43c) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_00247674) {
      fVar2 = DAT_00247674;
      if (DAT_00247674 < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else {
      fVar2 = *(float *)(iVar1 + 8);
      if (fVar2 != *(float *)(iVar1 + 0x14)) {
        return;
      }
    }
    func_0065F560((undefined4 *)(param_1 + 0x410),4,fVar2);
  }
  return;
}

