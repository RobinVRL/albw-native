#include "ghidra_types.h"

extern int func_001512E8(int *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_002864f8;

// USA 002863A4 <- EU 002863CC (Ghidra, non-matching)
// GLOBAL DAT_002864f8 float

undefined4 func_002863A4(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x434);
  *(undefined1 *)(param_1 + 0x460) = 0;
  if ((iVar1 != 0) && (*(char *)(*(int *)(param_1 + 0x430) + 0x61) != '\0')) {
    fVar4 = *(float *)(param_1 + 0x3d4);
    uVar5 = *(undefined4 *)(param_1 + 0x3d8);
    if (*(char *)(param_1 + 0x410) == '\0') {
      fVar4 = fVar4 - *(float *)(iVar1 + 0x5c) * DAT_002864f8;
    }
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    *(float *)(iVar1 + 8) = fVar4;
    *(undefined4 *)(iVar1 + 0xc) = uVar5;
    func_004356B4(*(int **)(param_1 + 0x434));
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  if ((uVar2 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar1 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar1;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fVar4 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fVar4);
  }
  iVar1 = *(int *)(param_1 + 0x458);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  func_004CEAF0(*(int *)(param_1 + 0x458));
  if (*(int **)(param_1 + 0x45c) != (int *)0x0) {
    return func_001512E8(*(int **)(param_1 + 0x45c));
  }
  return 0;
}

