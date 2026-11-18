#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_006649C8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00306b94;

// USA 00306AA0 <- EU 00306A7C (Ghidra, non-matching)
// GLOBAL DAT_00306b94 float

void func_00306AA0(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  iVar2 = *(int *)(param_1 + 0x40c);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x4b8) == '\0') {
      if (0x59 < *(uint *)(param_1 + 0x410)) {
LAB_00306b28:
        *(undefined4 *)(param_1 + 0x40c) = 1;
        return;
      }
    }
    else if (*(char *)(param_1 + 0x4b8) == '\x01') {
      if (**(int **)(param_1 + 0x454) == 0) {
        *(undefined4 *)(param_1 + 0x4b4) = 0;
      }
      else {
        uVar3 = *(int *)(param_1 + 0x4b4) + 1;
        *(uint *)(param_1 + 0x4b4) = uVar3;
        if (0xe < uVar3) goto LAB_00306b28;
      }
    }
  }
  else {
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x40c) = 2;
      puVar1 = (uint *)func_002C11E8(aiStack_70,2,10,0);
      func_0016898C(*(int *)(param_1 + 0x438),puVar1);
      iVar2 = *(int *)(*(int *)(param_1 + 0x438) + 0x14);
      if (*(float *)(iVar2 + 8) != DAT_00306b94) {
        *(float *)(iVar2 + 8) = DAT_00306b94;
        *(undefined1 *)(iVar2 + 0x26) = 1;
      }
      *(undefined4 *)(param_1 + 0x410) = 0;
      return;
    }
    if ((iVar2 == 2) && (0x1d < *(uint *)(param_1 + 0x410))) {
      func_006649C8((undefined4 *)(param_1 + 0x410),3);
    }
  }
  return;
}

