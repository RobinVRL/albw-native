#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern float DAT_001e8d94;
extern float DAT_001e8d98;
extern uint *DAT_001e8d9c;
extern undefined4 *DAT_001e8da0;
extern undefined4 DAT_001e8da4;

// USA 001E8C8C <- EU 001E8C8C (Ghidra, non-matching)
// GLOBAL DAT_001e8d94 float
// GLOBAL DAT_001e8d98 float
// GLOBAL DAT_001e8d9c uint *
// GLOBAL DAT_001e8da0 undefined4 *
// GLOBAL DAT_001e8da4 undefined4

void func_001E8C8C(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint in_fpscr;
  float fVar5;
  
  iVar2 = *(int *)(param_1 + 0xe34);
  if (iVar2 != 0) {
    if (-1 < *(int *)(param_1 + 0xefc)) {
      fVar5 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xefc),(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = fVar5 * DAT_001e8d94;
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0xf00);
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0xf04);
      *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0xf08);
      if (0x3f800000 < (int)ALBW_AS_U32(fVar5)) {
        fVar5 = DAT_001e8d98;
      }
      *(float *)(iVar2 + 0x1c) = fVar5;
      *(int *)(param_1 + 0xefc) = *(int *)(param_1 + 0xefc) + -1;
    }
    (**(code **)(**(int **)(param_1 + 0xe34) + 0x10))(*(int **)(param_1 + 0xe34),param_2,param_4);
    puVar4 = *(undefined4 **)(param_1 + 0xe34);
    if (((*DAT_001e8d9c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001e8d9c), iVar2 != 0)) {
      *DAT_001e8da0 = DAT_001e8da4;
    }
    if ((puVar4 == (undefined4 *)0x0) ||
       (iVar2 = (**(code **)*puVar4)(puVar4,DAT_001e8da0), iVar2 == 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 != (undefined4 *)0x0) {
      uVar1 = puVar4[0x10];
      uVar3 = puVar4[0x11];
      *param_3 = puVar4[0xf];
      param_3[1] = uVar1;
      param_3[2] = uVar3;
    }
  }
  return;
}

