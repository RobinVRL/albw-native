#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_006576C4(undefined4 *param_1,undefined1 param_2);
extern float DAT_00144040;
extern float DAT_00144044;
extern int DAT_00144048;
extern float DAT_0014404c;
extern int *DAT_00144050;
extern int DAT_00144054;

// USA 00143F8C <- EU 00143F8C (Ghidra, non-matching)
// GLOBAL DAT_00144040 float
// GLOBAL DAT_00144044 float
// GLOBAL DAT_00144048 int
// GLOBAL DAT_0014404c float
// GLOBAL DAT_00144050 int *
// GLOBAL DAT_00144054 int

void func_00143F8C(int param_1)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  iVar4 = DAT_00144048;
  fVar1 = DAT_00144044;
  fVar6 = *(float *)(param_1 + 0x41c) + DAT_00144040;
  *(float *)(param_1 + 0x3d4) = fVar6;
  piVar2 = DAT_00144050;
  uVar3 = *(uint *)(param_1 + 0x420);
  pfVar5 = (float *)(iVar4 + (uVar3 >> 0x18) * 0x10);
  fVar7 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3d4) = fVar6 + (*pfVar5 + pfVar5[1] * fVar7 * fVar1) * DAT_0014404c;
  *(uint *)(param_1 + 0x420) = uVar3 + *piVar2;
  if (0x14 < *(byte *)(param_1 + 0x410)) {
    iVar4 = func_00165E28(*(int *)(param_1 + 0x474),*(undefined2 *)(DAT_00144054 + 0x2a));
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x414) = 0;
    }
    func_006576C4((undefined4 *)(param_1 + 0x424),3);
  }
  *(char *)(param_1 + 0x410) = *(char *)(param_1 + 0x410) + '\x01';
  return;
}

