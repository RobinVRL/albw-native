#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_0065D8B8(undefined4 *param_1,undefined1 param_2);
extern float DAT_002133dc;
extern float DAT_002133e0;
extern undefined4 DAT_002133e4;

// USA 002132AC <- EU 002132AC (Ghidra, non-matching)
// GLOBAL DAT_002133dc float
// GLOBAL DAT_002133e0 float
// GLOBAL DAT_002133e4 undefined4

undefined4 func_002132AC(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 ((float *)(albw_frame + 0xc))
  fVar1 = DAT_002133e0;
  fVar9 = DAT_002133dc;
  if (*(uint *)(param_1 + 0x960) <= *(uint *)(param_1 + 0x95c)) {
    return func_0065D8B8((undefined4 *)(param_1 + 0x8bc),1);
  }
  iVar4 = *(uint *)(param_1 + 0x95c) + 1;
  iVar3 = *(uint *)(param_1 + 0x960) - iVar4;
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x95c) = iVar4;
  fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = *(float *)(param_1 + 0x974);
  *(float *)(param_1 + 0x974) = fVar8 + (fVar9 - fVar8) * (fVar1 / fVar7);
  func_00115154(&local_18,local_14,*(uint *)(param_1 + 0x978));
  iVar3 = param_1 + 0x800;
  *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x974) * local_18;
  *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x974) * local_14[0];
  if (*(char *)(param_1 + 0x951) == '\0') {
    *(undefined1 *)(param_1 + 0x9c1) = 1;
    *(float *)(param_1 + 0x974) = fVar9;
  }
  uVar2 = DAT_002133e4;
  if (*(char *)(param_1 + 0x952) == '\0') {
    *(undefined4 *)(param_1 + 0x96c) = 0x1e;
    *(undefined4 *)(param_1 + 0x970) = uVar2;
    *(undefined4 *)(param_1 + 0x968) = 0;
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 0x968);
  bVar6 = uVar5 < *(uint *)(param_1 + 0x96c);
  if (bVar6) {
    iVar3 = uVar5 + 1;
    *(int *)(param_1 + 0x968) = iVar3;
  }
  else {
    *(undefined1 *)(param_1 + 0x9c1) = 1;
  }
  if (!bVar6) {
    *(float *)(iVar3 + 0x174) = fVar9;
  }
  return 0;
}

