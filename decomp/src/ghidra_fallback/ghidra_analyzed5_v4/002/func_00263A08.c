#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_00263bc4;
extern float DAT_00263bc8;
extern float DAT_00263bcc;
extern float DAT_00263bd0;
extern float DAT_00263bd4;
extern float DAT_00263bd8;
extern float DAT_00263bdc;
extern float DAT_00263be0;

// USA 00263A08 <- EU 00263A30 (Ghidra, non-matching)
// GLOBAL DAT_00263bc4 float
// GLOBAL DAT_00263bc8 float
// GLOBAL DAT_00263bcc float
// GLOBAL DAT_00263bd0 float
// GLOBAL DAT_00263bd4 float
// GLOBAL DAT_00263bd8 float
// GLOBAL DAT_00263bdc float
// GLOBAL DAT_00263be0 float

undefined4 func_00263A08(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  *(undefined1 *)(*(int *)(param_1 + 0x420) + 0x22) = 0;
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_24,pfVar2,(float *)(param_1 + 0x3d0));
  local_30 = local_24;
  uStack_2c = uStack_20;
  uStack_28 = uStack_1c;
  iVar3 = func_0068C690(&local_30);
  *(int *)(param_1 + 0xa10) = iVar3;
  if (*(char *)(param_1 + 0x8c1) != '\a') {
    *(uint *)(param_1 + 0xa10) = iVar3 + 0x20000000U & 0xc0000000;
  }
  fVar8 = DAT_00263bc4;
  fVar5 = *(float *)(param_1 + 1000);
  *(float *)(param_1 + 0xa0c) = fVar5;
  *(undefined1 *)(param_1 + 0xa48) = 0;
  *(undefined4 *)(param_1 + 0xa24) = 1;
  fVar7 = DAT_00263bcc;
  fVar1 = DAT_00263bc8;
  pfVar2 = *(float **)(param_1 + 0xa14);
  pfVar2[6] = *(float *)(param_1 + 0xa10);
  pfVar2[5] = fVar5;
  *pfVar2 = fVar8;
  pfVar2[4] = fVar8;
  pfVar2[3] = fVar8;
  pfVar2[1] = fVar1;
  pfVar2[2] = fVar7;
  fVar1 = DAT_00263bd0;
  puVar4 = *(undefined4 **)(param_1 + 0xa14);
  puVar4[4] = *puVar4;
  puVar4[3] = ALBW_AS_U32(fVar8);
  uVar6 = *(uint *)(param_1 + 0xa10);
  func_004D80A4((float *)(param_1 + 0xa4c),uVar6,fVar1);
  func_004D80A4((float *)(param_1 + 0x3dc),uVar6,DAT_00263bd4);
  *(undefined4 *)(param_1 + 0xa18) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(param_1 + 0x3e4);
  fVar1 = DAT_00263bdc;
  *(float *)(param_1 + 0xa28) =
       SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
            *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4)) * DAT_00263bd8;
  iVar3 = *(int *)(param_1 + 0xa10) - *(int *)(param_1 + 0xa0c);
  fVar7 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar7 * fVar1;
  if (iVar3 < 0) {
    fVar7 = fVar7 - DAT_00263be0;
  }
  if (fVar7 <= fVar8) {
    return func_004FABDC(param_1,6,0xffffffff,0);
  }
  return func_004FABDC(param_1,5,0xffffffff,0);
}

