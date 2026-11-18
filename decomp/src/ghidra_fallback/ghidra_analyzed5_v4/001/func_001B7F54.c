#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_005688C0(int param_1,int *param_2,int *param_3,float *param_4);
extern undefined *DAT_001b8044;

// USA 001B7F54 <- EU 001B7F54 (Ghidra, non-matching)
// GLOBAL DAT_001b8044 undefined *

void func_001B7F54(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define afStack_a0 ((float *)(albw_frame + 0x0))
  #define auStack_88 ((undefined1 *)(albw_frame + 0x18))
  uVar1 = *(uint *)(param_1 + 0x80);
  piVar4 = *(int **)(param_1 + 0x88);
  piVar2 = piVar4;
  if (param_2 < uVar1) {
    piVar2 = piVar4 + param_2 * 0x1c;
  }
  if ((char)piVar2[0x1b] != '\0') {
    piVar2 = piVar4;
    if (param_2 < uVar1) {
      piVar2 = piVar4 + param_2 * 0x1c;
    }
    if (piVar2[0x13] != 0) {
      piVar2 = piVar4;
      if (param_2 < uVar1) {
        piVar2 = piVar4 + param_2 * 0x1c;
      }
      if (param_2 < uVar1) {
        piVar4 = piVar4 + param_2 * 0x1c;
      }
      iVar3 = func_00100118((int)auStack_88,DAT_001b8044,0x10,6);
      *(undefined1 *)(iVar3 + 0x60) = 0;
      *(undefined1 *)(iVar3 + 0x61) = 0;
      iVar3 = *(int *)(param_1 + 0x88);
      if (param_2 < *(uint *)(param_1 + 0x80)) {
        iVar3 = iVar3 + param_2 * 0x70;
      }
      uVar1 = 0;
      iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x4c) + 0x50) + 8);
      if (*(int *)(iVar3 + 0x44) != 0) {
        do {
          func_005688C0(*(int *)(iVar3 + 0x40) + uVar1 * 0x38,(int *)(*piVar4 + uVar1 * 0xc),
                        (int *)(piVar2[2] + uVar1 * 8),afStack_a0);
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(iVar3 + 0x44));
      }
    }
  }
  return;
}

