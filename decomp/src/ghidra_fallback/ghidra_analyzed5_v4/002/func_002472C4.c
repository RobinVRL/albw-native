#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00246FD0(int param_1,undefined4 param_2);
extern undefined4 func_0065F560(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern float DAT_00247398;
extern int *DAT_0024739c;
extern float DAT_002473a0;
extern int DAT_002473a4;
extern float DAT_002473a8;
extern int DAT_002473ac;

// USA 002472C4 <- EU 002472C4 (Ghidra, non-matching)
// GLOBAL DAT_00247398 float
// GLOBAL DAT_0024739c int *
// GLOBAL DAT_002473a0 float
// GLOBAL DAT_002473a4 int
// GLOBAL DAT_002473a8 float
// GLOBAL DAT_002473ac int

void func_002472C4(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0x4c3) != '\0') {
    func_00246FD0(param_1,param_2);
  }
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x444),param_1 + 0x494,0x1000,0,0);
  iVar4 = DAT_002473a4;
  fVar6 = DAT_002473a0;
  piVar1 = DAT_0024739c;
  fVar5 = *(float *)(param_1 + 0x4b0) +
          (*(float *)(param_1 + 0x4b4) - *(float *)(param_1 + 0x4b0)) * DAT_00247398;
  *(float *)(param_1 + 0x4b0) = fVar5;
  iVar2 = DAT_002473ac;
  uVar3 = *(int *)(param_1 + 0x410) * *piVar1;
  iVar4 = iVar4 + (uVar3 >> 0x18) * 0x10;
  fVar7 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (fVar5 - DAT_002473a8) +
          (*(float *)(iVar4 + 8) + *(float *)(iVar4 + 0xc) * fVar7 * fVar6) * DAT_002473a8;
  *(float *)(param_1 + 0x454) = fVar6;
  if (**(int **)(iVar2 + *(char *)(param_1 + 0x40c) * 4) <= *(int *)(param_1 + 0x410)) {
    func_0065F560((undefined4 *)(param_1 + 0x410),3,fVar6);
  }
  return;
}

