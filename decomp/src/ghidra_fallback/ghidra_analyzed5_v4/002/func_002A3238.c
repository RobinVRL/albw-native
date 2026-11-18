#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_002A22CC(int param_1);
extern int func_002A27C4(int param_1,int param_2);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_002a33ac;
extern float DAT_002a33b0;
extern undefined4 DAT_002a33b4;
extern int DAT_002a33b8;
extern float DAT_002a33bc;
extern float DAT_002a33c0;
extern float DAT_002a33c4;
extern int *DAT_002a33c8;
extern int *DAT_002a33cc;
extern float DAT_002a33d0;
extern int DAT_002a33d4;

// USA 002A3238 <- EU 002A3214 (Ghidra, non-matching)
// GLOBAL DAT_002a33ac undefined4
// GLOBAL DAT_002a33b0 float
// GLOBAL DAT_002a33b4 undefined4
// GLOBAL DAT_002a33b8 int
// GLOBAL DAT_002a33bc float
// GLOBAL DAT_002a33c0 float
// GLOBAL DAT_002a33c4 float
// GLOBAL DAT_002a33c8 int *
// GLOBAL DAT_002a33cc int *
// GLOBAL DAT_002a33d0 float
// GLOBAL DAT_002a33d4 int

void func_002A3238(int param_1)

{
  bool bVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  local_28 = DAT_002a33b0;
  local_24 = DAT_002a33b0;
  local_20 = ALBW_AS_F32(DAT_002a33b4);
  fVar7 = DAT_002a33b0;
  func_004D7F70(&local_28,*(uint *)(param_1 + 1000));
  func_002A27C4(param_1,1);
  func_00115C54((float *)(param_1 + 0xa78),&local_28,(float *)(param_1 + 0x3d0));
  func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0xb7c),DAT_002a33b8 >> 1,DAT_002a33b8,
                DAT_002a33bc);
  fVar8 = DAT_002a33c0;
  fVar5 = *(float *)(param_1 + 0xb24);
  fVar5 = fVar5 + (DAT_002a33c0 - fVar5) * DAT_002a33c4;
  *(float *)(param_1 + 0xb24) = fVar5;
  uVar9 = *(undefined4 *)(param_1 + 0x3e0);
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),fVar5);
  *(undefined4 *)(param_1 + 0x3e0) = uVar9;
  uVar10 = func_0058A474(param_1,0x32);
  fVar5 = DAT_002a33d0;
  iVar4 = *DAT_002a33c8;
  if ((int)uVar10 != 0) {
    iVar4 = -iVar4;
  }
  *(int *)(param_1 + 0xb80) = iVar4 + *(int *)(param_1 + 0xb80);
  uVar2 = *(int *)(param_1 + 0xb80) * *DAT_002a33cc;
  pfVar3 = (float *)(DAT_002a33d4 + (uVar2 >> 0x18) * 0x10);
  fVar6 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  local_28 = (*pfVar3 + pfVar3[1] * fVar6 * fVar5) * fVar8;
  local_24 = fVar7;
  local_20 = fVar7;
  func_004D7F70(&local_28,*(uint *)(param_1 + 1000));
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_28);
  bVar1 = func_002A22CC(param_1);
  if (bVar1) {
    func_00115C70(&local_28,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
    iVar4 = func_0068C690(&local_28);
    *(int *)(param_1 + 0xb7c) = iVar4;
  }
  if (*(uint *)(param_1 + 0xb60) < *(uint *)(param_1 + 0xb64)) {
    *(uint *)(param_1 + 0xb60) = *(uint *)(param_1 + 0xb60) + 1;
  }
  else {
    func_00662128((undefined4 *)(param_1 + 0x9e0),0xc);
  }
  return;
}

