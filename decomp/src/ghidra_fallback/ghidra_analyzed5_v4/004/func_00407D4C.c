#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_00111EF0(int *param_1,int *param_2);
extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_003E696C(int *param_1,undefined4 *param_2);
extern int func_0040DB4C(int *param_1,undefined4 param_2,int *param_3,undefined *param_4);
extern uint *DAT_00407ecc;
extern undefined *DAT_00407ed0;
extern int DAT_00407ed4;

// USA 00407D4C <- EU 00407D2C (Ghidra, non-matching)
// GLOBAL DAT_00407ecc uint *
// GLOBAL DAT_00407ed0 undefined *
// GLOBAL DAT_00407ed4 int

/* WARNING: Removing unreachable block (ram,0x00407e80) */

void func_00407D4C(int param_1,int *param_2,int *param_3,undefined *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *extraout_r1;
  int *extraout_r1_00;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(param_1 + 0x28);
  if (piVar4 != (int *)(param_1 + 0x28)) {
    do {
      param_2 = piVar4;
      piVar4 = (int *)*param_2;
      if ((char)param_2[-1] == '\x02') {
        func_00111EF0((int *)(param_1 + 0x24),param_2);
        param_3 = param_2;
        func_00112364((int *)(param_1 + 0x18),param_1 + 0x1c,param_2);
        param_2 = extraout_r1;
      }
    } while (piVar4 != (int *)(param_1 + 0x28));
  }
  piVar4 = *(int **)(param_1 + 4);
  if (*(int **)(param_1 + 4) != (int *)(param_1 + 4)) {
    do {
      piVar5 = (int *)*piVar4;
      func_0040DB4C(piVar4 + -0x3f,param_2,param_3,param_4);
      param_2 = extraout_r1_00;
      piVar4 = piVar5;
    } while (piVar5 != (int *)(param_1 + 4));
  }
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
        piVar5 = (int *)piVar4[1];
        func_003E696C(piVar4,piVar5);
        func_00112364((int *)(param_1 + 0xc),param_1 + 0x10,piVar5);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x80);
  }
  return;
}

