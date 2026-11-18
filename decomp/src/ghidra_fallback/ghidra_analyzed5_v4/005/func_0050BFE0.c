#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0066B6C4(undefined4 *param_1,undefined1 param_2);
extern float DAT_0050c18c;
extern float DAT_0050c190;
extern int DAT_0050c194;
extern float DAT_0050c198;
extern int DAT_0050c19c;
extern float DAT_0050c1a0;
extern int DAT_0050c1a4;
extern float DAT_0050c1a8;
extern int *DAT_0050c1ac;
extern int DAT_0050c1b0;
extern char s_SE_Seesaw_MELT_0050c1c8[];
extern char s_SE_Seesaw_MELT_PRE_0050c1b4[];

// USA 0050BFE0 <- EU 0050BFB8 (Ghidra, non-matching)
// GLOBAL DAT_0050c18c float
// GLOBAL DAT_0050c190 float
// GLOBAL DAT_0050c194 int
// GLOBAL DAT_0050c198 float
// GLOBAL DAT_0050c19c int
// GLOBAL DAT_0050c1a0 float
// GLOBAL DAT_0050c1a4 int
// GLOBAL DAT_0050c1a8 float
// GLOBAL DAT_0050c1ac int *
// GLOBAL DAT_0050c1b0 int
// GLOBAL s_SE_Seesaw_MELT_0050c1c8 string
// GLOBAL s_SE_Seesaw_MELT_PRE_0050c1b4 string

undefined4 func_0050BFE0(int *param_1,undefined4 param_2,uint param_3,float fparam_0,float fparam_1)

{
  uint uVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  uVar1 = param_1[0x10f];
  if (uVar1 != 0) {
    param_3 = param_1[0x10e];
  }
  fVar3 = DAT_0050c18c;
  if ((uVar1 != 0 && param_3 != 0) && (fVar3 = DAT_0050c190, param_3 < uVar1)) {
    fVar3 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar3 * ALBW_AS_F32(param_1[0x110]);
  }
  fVar5 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  pfVar2 = (float *)(param_1 + 0x112);
  if ((int)ALBW_AS_U32(fVar3) < DAT_0050c194) {
    iVar4 = (int)((DAT_0050c198 - fVar3) * fVar5);
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    fVar3 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *pfVar2 = *pfVar2 + (DAT_0050c190 - *pfVar2) * (DAT_0050c190 / fVar3);
  }
  else if (DAT_0050c19c < (int)ALBW_AS_U32(fVar3)) {
    iVar4 = (int)((DAT_0050c190 - fVar3) * fVar5);
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    fVar3 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *pfVar2 = *pfVar2 + (DAT_0050c18c - *pfVar2) * (DAT_0050c190 / fVar3);
  }
  else {
    param_1[0x112] = (int)ALBW_AS_U32(DAT_0050c190);
  }
  local_18 = DAT_0050c1b0;
  uVar1 = param_1[0x111];
  pfVar2 = (float *)(DAT_0050c1a4 + (uVar1 >> 0x18) * 0x10);
  fVar3 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (*pfVar2 + pfVar2[1] * fVar3 * DAT_0050c1a0) * DAT_0050c1a8 * ALBW_AS_F32(param_1[0x112]);
  param_1[0x10d] = (int)ALBW_AS_U32(fVar3);
  param_1[0x10b] = (int)ALBW_AS_U32(fVar3);
  param_1[0x111] = uVar1 + *DAT_0050c1ac;
  if ((uint)param_1[0x10f] <= (uint)param_1[0x10e]) {
    func_0066B6C4(param_1 + 0x113,0);
    local_14 = s_SE_Seesaw_MELT_0050c1c8;
    return func_00150A84(param_1,&local_18,0);
  }
  param_1[0x10e] = param_1[0x10e] + 1;
  local_14 = s_SE_Seesaw_MELT_PRE_0050c1b4;
  return func_001507D8((int)param_1,&local_18,0);
}

