#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00297298(int param_1,int param_2);
extern int func_00520FC0(void);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_004dbfe4;
extern int *DAT_004dbfe8;
extern float DAT_004dbfec;
extern float DAT_004dbff0;
extern float DAT_004dbff4;
extern float DAT_004dbff8;
extern float DAT_004dbffc;
extern float DAT_004dc000;
extern int DAT_004dc004;
extern int *DAT_004dc008;

// USA 004DBE54 <- EU 004DBE2C (Ghidra, non-matching)
// GLOBAL DAT_004dbfe4 int *
// GLOBAL DAT_004dbfe8 int *
// GLOBAL DAT_004dbfec float
// GLOBAL DAT_004dbff0 float
// GLOBAL DAT_004dbff4 float
// GLOBAL DAT_004dbff8 float
// GLOBAL DAT_004dbffc float
// GLOBAL DAT_004dc000 float
// GLOBAL DAT_004dc004 int
// GLOBAL DAT_004dc008 int *

undefined4 func_004DBE54(int *param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  pfVar2 = (float *)func_00520FC0();
  piVar1 = DAT_004dbfe4;
  fVar9 = *pfVar2;
  fVar11 = pfVar2[1];
  fVar10 = pfVar2[2];
  if ((0 < *(short *)((int)param_1 + 0x5e)) &&
     (iVar3 = func_0052FBDC(*DAT_004dbfe4 + 0x3dbbc,(int)*(short *)((int)param_1 + 0x5e),0),
     iVar3 != 0)) {
    fVar9 = *(float *)(iVar3 + 0x3d0);
    fVar11 = *(float *)(iVar3 + 0x3d4);
    fVar10 = *(float *)(iVar3 + 0x3d8);
  }
  if (((0 < (short)param_1[0x19]) &&
      (iVar3 = func_0052FBDC(*piVar1 + 0x3dbbc,(int)(short)param_1[0x19],0), iVar3 != 0)) &&
     (iVar4 = func_00588BE4(iVar3), iVar4 == *DAT_004dbfe8)) {
    fVar12 = *(float *)(iVar3 + 0x3d0);
    fVar14 = *(float *)(iVar3 + 0x3d4);
    fVar13 = *(float *)(iVar3 + 0x3d8);
    pfVar2 = (float *)func_00520FC0();
    fVar7 = *pfVar2 - fVar12;
    fVar5 = pfVar2[2] - fVar13;
    fVar6 = *pfVar2 - fVar9;
    fVar8 = pfVar2[2] - fVar10;
    if (fVar7 * fVar7 + fVar5 * fVar5 < fVar6 * fVar6 + fVar8 * fVar8) {
      fVar11 = fVar14;
      fVar9 = fVar12;
      fVar10 = fVar13;
    }
  }
  fVar5 = DAT_004dc000;
  fVar7 = fVar9 + DAT_004dbff0;
  fVar8 = fVar10 + DAT_004dbff4;
  fVar6 = fVar11 + DAT_004dbfec;
  fVar10 = fVar10 + DAT_004dbfec;
  fVar9 = fVar9 + DAT_004dbff8;
  fVar11 = fVar11 + DAT_004dbffc;
  param_1[0xda] = (int)ALBW_AS_U32(fVar7);
  param_1[0xdb] = (int)ALBW_AS_U32(fVar6);
  param_1[0xdc] = (int)ALBW_AS_U32(fVar10);
  param_1[0xf4] = (int)ALBW_AS_U32(fVar7);
  param_1[0xf5] = (int)ALBW_AS_U32(fVar6);
  param_1[0xf6] = (int)ALBW_AS_U32(fVar10);
  iVar3 = DAT_004dc004;
  param_1[0x267] = (int)ALBW_AS_U32(fVar9);
  param_1[0x268] = (int)ALBW_AS_U32(fVar11);
  param_1[0x269] = (int)ALBW_AS_U32((fVar8 - fVar5));
  param_1[0x20d] = iVar3;
  (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
  func_00115C70(&local_48,(float *)(param_1 + 0x267),(float *)(param_1 + 0xf4));
  local_34 = local_48;
  uStack_30 = uStack_44;
  uStack_2c = uStack_40;
  iVar3 = func_0068C690(&local_34);
  param_1[0xfa] = iVar3;
  param_1[0x22b] = param_1[0x22b] | 2;
  return func_00297298(*DAT_004dc008,0x78);
}

