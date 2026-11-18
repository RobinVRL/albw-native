#include "ghidra_types.h"

extern int func_0014362C(int param_1);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_004CF478(int param_1,int param_2);
extern int func_006576C4(undefined4 *param_1,undefined1 param_2);
extern float DAT_00143184;
extern int DAT_00143188;
extern float DAT_0014318c;
extern float DAT_00143190;
extern int *DAT_00143194;

// USA 001430A8 <- EU 001430A8 (Ghidra, non-matching)
// GLOBAL DAT_00143184 float
// GLOBAL DAT_00143188 int
// GLOBAL DAT_0014318c float
// GLOBAL DAT_00143190 float
// GLOBAL DAT_00143194 int *

void func_001430A8(int param_1)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  fVar1 = DAT_0014318c;
  iVar5 = DAT_00143188;
  fVar7 = *(float *)(param_1 + 0x41c) + DAT_00143184;
  *(float *)(param_1 + 0x3d4) = fVar7;
  piVar2 = DAT_00143194;
  uVar4 = *(uint *)(param_1 + 0x420);
  pfVar6 = (float *)(iVar5 + (uVar4 >> 0x18) * 0x10);
  fVar8 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3d4) = fVar7 + (*pfVar6 + pfVar6[1] * fVar8 * fVar1) * DAT_00143190;
  *(uint *)(param_1 + 0x420) = uVar4 + *piVar2;
  iVar5 = func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x40c),0,0x100,0,0);
  if (iVar5 != 0) {
    cVar3 = *(char *)(param_1 + 0x4c4);
  }
  else {
    cVar3 = '\x01';
    *(undefined1 *)(param_1 + 0x4c4) = 1;
  }
  if (iVar5 != 0 && cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x414) = 2;
    func_004CF478(*(int *)(param_1 + 0x46c),0);
    func_0014362C(param_1);
    func_006576C4((undefined4 *)(param_1 + 0x424),5);
  }
  return;
}

