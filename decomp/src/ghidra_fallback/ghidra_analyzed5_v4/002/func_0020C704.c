#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004ED46C(int param_1,int param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FC570();
extern int func_0058A7D4(void);
extern int func_0068C690(float *param_1);
extern int *DAT_0020c85c;
extern int DAT_0020c860;
extern int DAT_0020c864;
extern int DAT_0020c868;
extern int DAT_0020c86c;
extern int DAT_0020c870;
extern float DAT_0020c874;
extern int DAT_0020c878;
extern float DAT_0020c87c;
extern int DAT_0020c880;
extern int DAT_0020c884;

// USA 0020C704 <- EU 0020C704 (Ghidra, non-matching)
// GLOBAL DAT_0020c85c int *
// GLOBAL DAT_0020c860 int
// GLOBAL DAT_0020c864 int
// GLOBAL DAT_0020c868 int
// GLOBAL DAT_0020c86c int
// GLOBAL DAT_0020c870 int
// GLOBAL DAT_0020c874 float
// GLOBAL DAT_0020c878 int
// GLOBAL DAT_0020c87c float
// GLOBAL DAT_0020c880 int
// GLOBAL DAT_0020c884 int

void func_0020C704(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  float *pfVar9;
  uint in_fpscr;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  func_004ED46C(*DAT_0020c85c,1);
  func_00115C70(&local_1c,(float *)(param_1 + 0x2fe),(float *)(param_1 + 0xf4));
  local_28 = local_1c;
  uStack_24 = uStack_18;
  uStack_20 = uStack_14;
  iVar6 = func_0068C690(&local_28);
  puVar7 = (uint *)func_0058A7D4();
  uVar8 = func_00111A64(puVar7);
  iVar4 = DAT_0020c878;
  iVar2 = DAT_0020c86c;
  iVar1 = DAT_0020c868;
  param_1[0x2f3] = DAT_0020c864 + (int)((ulonglong)uVar8 * 4 >> 0x20) * DAT_0020c860 * 0x20 + iVar6;
  param_1[0x2f5] = 0x168;
  param_1[0x2f6] = iVar1;
  param_1[0x2f4] = 0;
  param_1[0x2f9] = iVar2;
  iVar1 = DAT_0020c870;
  param_1[0x2f7] = iVar2;
  param_1[0x2f8] = iVar1;
  fVar5 = DAT_0020c87c;
  fVar3 = DAT_0020c874;
  uVar8 = param_1[0x2f3];
  pfVar9 = (float *)(iVar4 + (uVar8 >> 0x18) * 0x10);
  fVar10 = (float)VectorUnsignedToFloat(uVar8 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  param_1[0xf7] = (int)ALBW_AS_U32(((*pfVar9 + pfVar9[1] * fVar10 * DAT_0020c874) * DAT_0020c87c));
  fVar10 = (float)VectorUnsignedToFloat(uVar8 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  param_1[0xf9] = (int)ALBW_AS_U32(((pfVar9[2] + pfVar9[3] * fVar10 * fVar3) * fVar5));
  param_1[0x2e4] = 0;
  func_004FC570(param_1);
  func_004FC07C((int)param_1,0x11,1,0);
  iVar1 = DAT_0020c884;
  param_1[0x2fb] = DAT_0020c880;
  param_1[0x2fc] = iVar1;
  param_1[0x2fa] = 0;
  return;
}

