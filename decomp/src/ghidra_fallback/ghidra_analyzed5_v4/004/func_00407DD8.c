#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_003E696C(int *param_1,undefined4 *param_2);
extern uint *DAT_00407ecc;
extern undefined *DAT_00407ed0;
extern int DAT_00407ed4;

// USA 00407DD8 <- EU 00407DB8 (Ghidra, non-matching)
// GLOBAL DAT_00407ecc uint *
// GLOBAL DAT_00407ed0 undefined *
// GLOBAL DAT_00407ed4 int

void func_00407DD8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (1 < *(uint *)(param_1 + 0xc)) {
    iVar1 = DAT_00407ed4;
    if (((*DAT_00407ecc & 1) == 0) &&
       (iVar2 = func_00100174((int *)DAT_00407ecc), iVar1 = DAT_00407ed4, iVar2 != 0)) {
      func_00100118(DAT_00407ed4,DAT_00407ed0,0xc,0x80);
      iVar1 = DAT_00407ed4;
    }
    while (*(int *)(param_1 + 0xc) != 0) {
      piVar5 = *(int **)(param_1 + 0x10);
      func_003E696C((int *)(param_1 + 0xc),piVar5);
      iVar3 = (uint)*(byte *)((int)piVar5 + -0x6b) + piVar5[-0x2d];
      iVar2 = UnsignedSaturate(iVar3,7);
      UnsignedDoesSaturate(iVar3,7);
      piVar4 = (int *)(iVar1 + iVar2 * 0xc);
      func_00112364(piVar4,(int)(piVar4 + 1),piVar5);
    }
    iVar2 = 0;
    do {
      while (*(int *)(iVar1 + iVar2 * 0xc) != 0) {
        piVar4 = (int *)(iVar1 + iVar2 * 0xc);
        if (param_2 == 0) {
          piVar5 = (int *)piVar4[1];
          func_003E696C(piVar4,piVar5);
        }
        else {
          piVar5 = (int *)piVar4[2];
          func_003E696C(piVar4,piVar5);
        }
        func_00112364((int *)(param_1 + 0xc),param_1 + 0x10,piVar5);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x80);
  }
  return;
}

