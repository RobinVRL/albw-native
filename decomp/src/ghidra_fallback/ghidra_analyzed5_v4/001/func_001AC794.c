#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern float DAT_001ac924;
extern float DAT_001ac928;

// USA 001AC794 <- EU 001AC794 (Ghidra, non-matching)
// GLOBAL DAT_001ac924 float
// GLOBAL DAT_001ac928 float

undefined4 func_001AC794(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 ((float *)(albw_frame + 0x18))
  uVar7 = *(uint *)(param_1 + 0x8f4);
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  piVar5 = (int *)(param_1 + 0x8f4);
  if ((uVar2 & 0x1000) == 0) {
    iVar3 = *(int *)(param_1 + 0x8f4) + 0x40000000;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x8f4) + -0x40000000;
  }
  *piVar5 = iVar3;
  func_00115C70(&local_58,(float *)(param_1 + 0x3d0),(float *)(param_1 + 8));
  local_4c = DAT_001ac924;
  local_48[0] = DAT_001ac924;
  fVar11 = local_50;
  fVar9 = DAT_001ac924;
  fVar10 = local_54;
  func_00115154(local_48,&local_4c,*(uint *)(param_1 + 0x8f4));
  if (((0 < *(short *)(param_1 + 0x2e)) &&
      (fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x2e),
                                          (byte)(in_fpscr >> 0x15) & 3),
      fVar8 <= SQRT(local_58 * local_58 + fVar10 * fVar10 + fVar11 * fVar11))) &&
     (fVar9 < local_58 * local_48[0] + fVar10 * fVar9 + fVar11 * local_4c)) {
    *piVar5 = *piVar5 + -0x80000000;
  }
  *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x914) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(param_1 + 0x3d8);
  func_00115154(&local_50,&local_54,uVar7);
  fVar11 = DAT_001ac928;
  pfVar6 = (float *)(param_1 + 0x904);
  *pfVar6 = local_50 * DAT_001ac928;
  *(float *)(param_1 + 0x908) = fVar9;
  *(float *)(param_1 + 0x90c) = local_54;
  func_00115C54(pfVar6,pfVar6,(float *)(param_1 + 0x3d0));
  func_00115154(&local_50,&local_54,*(uint *)(param_1 + 0x8f4));
  pfVar4 = (float *)(param_1 + 0x8f8);
  *pfVar4 = local_50 * fVar11;
  *(float *)(param_1 + 0x8fc) = fVar9;
  *(float *)(param_1 + 0x900) = local_54;
  func_00115C54(pfVar4,pfVar4,pfVar6);
  *(float *)(param_1 + 0x91c) = fVar9;
  return func_004FC07C(param_1,0,0xffffffff,0);
}

