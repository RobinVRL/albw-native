#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float func_004F944C(void);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern float func_0058AC38(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float fRam0020a0dc;
extern float fRam0020a0e0;
extern float fRam0020a0e4;
extern float fRam0020a0ec;
extern int iRam0020a0d8;
extern undefined4 uRam0020a0d0;
extern undefined4 uRam0020a0d4;
extern undefined4 *puRam0020a0e8;

// USA 00209E24 <- EU 00209E24 (Ghidra, non-matching)
// GLOBAL UNK_0020a0d0 uint
// GLOBAL UNK_0020a0d4 undefined4
// GLOBAL UNK_0020a0d8 int
// GLOBAL UNK_0020a0dc float
// GLOBAL UNK_0020a0e0 float
// GLOBAL UNK_0020a0e4 float
// GLOBAL UNK_0020a0e8 undefined4 *
// GLOBAL UNK_0020a0ec float

void func_00209E24(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define fStack_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_34 (*(float *)(albw_frame + 0x1c))
  #define iStack_30 (*(int *)(albw_frame + 0x20))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define fStack_24 (*(float *)(albw_frame + 0x2c))
  pfVar6 = (float *)(param_1 + 0xc88);
  if (*(char *)(param_1 + 0xd18) == '\0') {
    func_004FABDC(param_1,0xe,1,0);
    func_00115C70(&local_3c,pfVar6,(float *)(param_1 + 0x3d0));
    local_48 = local_3c;
    uStack_44 = uStack_38;
    fStack_40 = fStack_34;
    iVar2 = func_0068C690(&local_48);
    uVar1 = uRam0020a0d0;
    iStack_30 = *(int *)(param_1 + 1000) - iVar2;
    uVar3 = func_0058E2B8(&iStack_30);
    uVar9 = uRam0020a0d4;
    if (uVar1 <= uVar3) {
      iVar4 = *(int *)(param_1 + 1000);
      if (iVar2 - iVar4 < 1) {
        func_004D80A4(&local_3c,iVar4 - uVar1,SQRT(local_48 * local_48 + fStack_40 * fStack_40));
        uStack_38 = uVar9;
        func_00115C54(&fStack_2c,(float *)(param_1 + 0x3d0),&local_3c);
        *pfVar6 = fStack_2c;
        *(undefined4 *)(param_1 + 0xc8c) = uStack_28;
        *(float *)(param_1 + 0xc90) = fStack_24;
      }
      else {
        func_004D80A4(&local_3c,iVar4 + uVar1,SQRT(local_48 * local_48 + fStack_40 * fStack_40));
        uStack_38 = uVar9;
        func_00115C54(&fStack_2c,(float *)(param_1 + 0x3d0),&local_3c);
        *pfVar6 = fStack_2c;
        *(undefined4 *)(param_1 + 0xc8c) = uStack_28;
        *(float *)(param_1 + 0xc90) = fStack_24;
      }
    }
    pfVar5 = (float *)func_00520FC0();
    fVar8 = *(float *)(param_1 + 0x3d0) - *pfVar5;
    fVar7 = *(float *)(param_1 + 0x3d8) - pfVar5[2];
    if ((int)ALBW_AS_U32(SQRT(fVar8 * fVar8 + fVar7 * fVar7)) < iRam0020a0d8) {
      func_00115C70(&fStack_2c,(float *)(param_1 + 0x3d0),pfVar6);
      local_3c = fStack_2c;
      fStack_34 = fStack_24;
      uStack_38 = uVar9;
      func_00115DC8(&local_3c);
      func_00115D70(&local_3c,&local_3c,fRam0020a0dc);
      func_00115D88(&local_3c,&local_3c,fRam0020a0e0);
      *(float *)(param_1 + 0x3dc) = local_3c;
      *(float *)(param_1 + 0x3e4) = fStack_34;
    }
    else {
      *(undefined4 *)(param_1 + 0x3dc) = uVar9;
      *(undefined4 *)(param_1 + 0x3e4) = uVar9;
    }
    fVar7 = func_0058AC38(param_1);
    fVar7 = fVar7 * fRam0020a0e4;
    *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(param_1 + 0xa18);
    *(undefined4 *)(param_1 + 0xa20) = *puRam0020a0e8;
    iVar2 = (int)fVar7;
    *(int *)(param_1 + 0xa28) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xa2c) = uVar9;
    }
    else {
      fVar7 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xa2c) = fRam0020a0ec / fVar7;
    }
    *(undefined4 *)(param_1 + 0xa24) = 0;
    *(undefined4 *)(param_1 + 0xa34) = 0;
    *(undefined4 *)(param_1 + 0xd08) = 0;
  }
  else {
    func_00115C70(&local_3c,pfVar6,(float *)(param_1 + 0x3d0));
    local_48 = local_3c;
    uStack_44 = uStack_38;
    fStack_40 = fStack_34;
    iVar2 = func_0068C690(&local_48);
    if (iVar2 - *(int *)(param_1 + 1000) < 1) {
      func_004FABDC(param_1,0x1e,6,0);
    }
    else {
      func_004FABDC(param_1,0x1d,6,0);
    }
  }
  fVar7 = func_004F944C();
  *(float *)(param_1 + 0x3e0) = fVar7;
  *(undefined1 *)(param_1 + 0x9d8) = 1;
  return;
}

