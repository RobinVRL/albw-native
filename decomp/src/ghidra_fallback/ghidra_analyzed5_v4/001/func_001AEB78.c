#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_002F8DE4(int *param_1,int param_2,uint param_3,int param_4);
extern int func_002F928C(int param_1,int *param_2);
extern int func_002F97EC(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern float func_004F944C(void);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00588BE4(int param_1);
extern int func_0058A8F0(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_0058E2B8(int *param_1);
extern int func_0065AD50(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_001aef38;
extern float DAT_001aef3c;
extern int DAT_001aef40;
extern float DAT_001aef44;
extern int DAT_001aef48;
extern float DAT_001aef4c;
extern float DAT_001aef50;
extern float DAT_001aef54;
extern int *DAT_001aef58;
extern int DAT_001aef5c;
extern int DAT_001aef60;
extern float DAT_001aef64;
extern int DAT_001aef68;
extern float DAT_001aef6c;
extern undefined4 DAT_001aef70;
extern undefined4 DAT_001aef74;
extern undefined4 *DAT_001aef78;
extern undefined4 DAT_001aef7c;
extern undefined4 DAT_001af0a0;
extern int *DAT_001af0a4;
extern int DAT_001af0a8;

// USA 001AEB78 <- EU 001AEB78 (Ghidra, non-matching)
// GLOBAL DAT_001aef38 float
// GLOBAL DAT_001aef3c float
// GLOBAL DAT_001aef40 int
// GLOBAL DAT_001aef44 float
// GLOBAL DAT_001aef48 int
// GLOBAL DAT_001aef4c float
// GLOBAL DAT_001aef50 float
// GLOBAL DAT_001aef54 float
// GLOBAL DAT_001aef58 int *
// GLOBAL DAT_001aef5c int
// GLOBAL DAT_001aef60 int
// GLOBAL DAT_001aef64 float
// GLOBAL DAT_001aef68 int
// GLOBAL DAT_001aef6c float
// GLOBAL DAT_001aef70 undefined4
// GLOBAL DAT_001aef74 undefined4
// GLOBAL DAT_001aef78 undefined4 *
// GLOBAL DAT_001aef7c undefined4
// GLOBAL DAT_001af0a0 undefined4
// GLOBAL DAT_001af0a4 int *
// GLOBAL DAT_001af0a8 int

undefined4 func_001AEB78(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fparam_0;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define local_f4 (*(float *)(albw_frame + 0xc))
  #define fStack_f0 (*(float *)(albw_frame + 0x10))
  #define local_ec (*(float *)(albw_frame + 0x14))
  #define local_e8 ((uint *)(albw_frame + 0x18))
  #define local_dc (*(int *)(albw_frame + 0x24))
  #define local_d8 (*(undefined2 *)(albw_frame + 0x28))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_cc (*(float * *)(albw_frame + 0x34))
  #define local_c8 (*(int * *)(albw_frame + 0x38))
  #define local_bc (*(undefined4 *)(albw_frame + 0x44))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_a4 (*(float * *)(albw_frame + 0x5c))
  #define local_a0 (*(float *)(albw_frame + 0x60))
  #define local_9c (*(int *)(albw_frame + 0x64))
  #define local_98 (*(float *)(albw_frame + 0x68))
  #define local_90 ((float *)(albw_frame + 0x70))
  #define local_88 (*(float *)(albw_frame + 0x78))
  #define local_84 (*(float *)(albw_frame + 0x7c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x80))
  #define local_7c (*(undefined4 *)(albw_frame + 0x84))
  #define local_78 ((byte *)(albw_frame + 0x88))
  #define local_68 (*(undefined4 *)(albw_frame + 0x98))
  #define local_64 (*(undefined4 *)(albw_frame + 0x9c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0xa0))
  #define local_5c (*(undefined4 *)(albw_frame + 0xa4))
  #define local_58 (*(undefined4 *)(albw_frame + 0xa8))
  #define local_54 (*(float *)(albw_frame + 0xac))
  #define local_50 (*(undefined1 *)(albw_frame + 0xb0))
  #define local_4f (*(undefined1 *)(albw_frame + 0xb1))
  #define local_48 (*(int *)(albw_frame + 0xb8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xbc))
  #define iStack_40 (*(int *)(albw_frame + 0xc0))
  fparam_0 = DAT_001aef38;
  if (*(char *)((int)param_1 + 0x9e1) != '\0') {
    if ((param_1[0x267] != 0) &&
       (lVar15 = func_0058ACC8((int)param_1,DAT_001aef3c), (int)lVar15 != 0)) {
      *(undefined1 *)(param_1 + 0x278) = 1;
      param_1[0x276] = (int)ALBW_AS_U32(fparam_0);
      param_1[0x277] = *(int *)(param_1[0x265] + 8);
    }
    iVar2 = func_0058A8F0((int)param_1);
    if (iVar2 != 0) {
      func_002F8DE4(param_1,2,0xffffffff,0);
      *(undefined1 *)((int)param_1 + 0x9e1) = 0;
      if (param_1[0x268] != 0) {
        *(undefined1 *)(param_1[0x268] + 0x61) = 1;
      }
    }
  }
  if (param_1[0x273] != 0) {
    param_1[0x273] = param_1[0x273] + -1;
  }
  local_a4 = (float *)func_00520FC0();
  local_f4 = *local_a4;
  fStack_f0 = local_a4[1];
  local_ec = local_a4[2];
  func_00115C70(local_90,&local_f4,(float *)(param_1 + 0xf4));
  iVar3 = func_0068C690(local_90);
  iVar2 = DAT_001aef48;
  fVar12 = DAT_001aef44;
  uVar6 = param_1[0x272] + DAT_001aef40;
  param_1[0x272] = uVar6;
  uVar5 = iVar3 + 0x20000000U >> 0x1e;
  pfVar7 = (float *)(iVar2 + (uVar6 >> 0x18) * 0x10);
  fVar11 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = *pfVar7 + pfVar7[1] * fVar11 * fVar12;
  if (uVar5 == 0) {
    local_ec = local_ec + (fVar12 * DAT_001aef4c - DAT_001aef50);
  }
  else if (uVar5 == 1) {
    local_f4 = local_f4 + (fVar12 * DAT_001aef4c - DAT_001aef54);
  }
  else if (uVar5 == 2) {
    local_ec = local_ec + DAT_001aef50 + fVar12 * DAT_001aef4c;
  }
  else if (uVar5 == 3) {
    local_f4 = local_f4 + DAT_001aef54 + fVar12 * DAT_001aef4c;
  }
  fVar11 = DAT_001aef50;
  iVar3 = func_00588BE4((int)param_1);
  iVar2 = DAT_001aef60;
  iVar10 = param_1[0xfa];
  iVar8 = *DAT_001aef58;
  fVar12 = DAT_001aef64;
  iVar4 = func_0051D2F4(param_1 + 0xfa,uVar5 << 0x1e,DAT_001aef60,DAT_001aef5c,DAT_001aef64);
  if (param_1[0x233] != 0) {
    local_dc = param_1[0xfa] - iVar10;
    iVar10 = func_0058E2B8(&local_dc);
    if (iVar10 < iVar2) {
      iVar10 = iVar2;
    }
    func_0051D2F4(param_1 + 0x233,0,iVar2,iVar10,fVar12);
  }
  func_00115C70(&local_a0,&local_f4,(float *)(param_1 + 0xf4));
  uVar14 = CONCAT44(DAT_001aef6c,fVar11);
  fVar12 = *(float *)(param_1[0x265] + 4);
  if ((int)ALBW_AS_U32((local_90[0] * local_90[0] + local_88 * local_88)) < DAT_001aef68) {
    fVar12 = fVar12 * DAT_001aef6c;
  }
  if (fVar12 * fVar12 <= local_a0 * local_a0 + local_98 * local_98) {
    uVar5 = func_0068C690(&local_a0);
    func_0014FAFC((int)param_1,uVar5,fVar12);
  }
  else {
    param_1[0xf7] = (int)ALBW_AS_U32(local_a0);
    param_1[0xf8] = local_9c;
    param_1[0xf9] = (int)ALBW_AS_U32(local_98);
    fVar12 = func_004F944C();
    param_1[0xf8] = (int)ALBW_AS_U32(fVar12);
  }
  piVar9 = param_1 + 0x243;
  if ((param_1[0x273] == 0) && (iVar4 != 0)) {
    local_68 = DAT_001aef74;
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[4] = 0;
    local_78[5] = 0;
    local_78[6] = 0;
    local_78[7] = 0;
    local_78[8] = 0;
    local_78[9] = 0;
    local_78[10] = 0;
    local_78[0xb] = 0;
    local_78[0xc] = 0;
    local_78[0xd] = 0;
    local_78[0xe] = 0;
    local_78[0xf] = 0;
    local_64 = 0xff;
    uStack_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0;
    local_4f = 1;
    uVar13 = DAT_001aef70;
    local_54 = fparam_0;
    func_00110D44(local_e8,local_78,0x2a);
    puVar1 = DAT_001aef78;
    local_b8 = *DAT_001aef78;
    local_b4 = DAT_001aef78[1];
    local_b0 = DAT_001aef78[2];
    local_80 = DAT_001aef7c;
    local_bc = uVar13;
    local_84 = fparam_0;
    local_7c = uVar13;
    func_004D7F70(&local_84,param_1[0xfa]);
    local_b8 = *puVar1;
    local_b4 = puVar1[1];
    local_b0 = puVar1[2];
    func_00115C54(&local_84,&local_84,(float *)(param_1 + 0xf4));
    local_48 = param_1[0xf4];
    iStack_40 = param_1[0xf6];
    local_e8[0] = 0;
    local_44 = local_80;
    local_c8 = &local_48;
    local_cc = &local_84;
    local_e8[1] = 0;
    local_dc = param_1[0xb3];
    local_d4 = DAT_001af0a0;
    local_d8 = (undefined2)param_1[0x15];
    iVar2 = func_004A9F98(*DAT_001af0a4,local_e8,0xff,ALBW_AS_F32(((ulonglong)uVar14 >> 0x20)),
                          ALBW_AS_F32(uVar14));
    if (iVar2 == 0) {
      if (iVar3 != iVar8) {
        return func_0065AD50(piVar9,0xb);
      }
      return func_0065AD50(piVar9,10);
    }
  }
  iVar2 = func_002F928C((int)param_1,(int *)0x0);
  if (iVar2 == 1) {
    if ((uint)param_1[0x275] < 0x28) {
      param_1[0x275] = param_1[0x275] + 1;
      iVar2 = DAT_001af0a8;
      param_1[0xf7] = (int)ALBW_AS_U32(fparam_0);
      param_1[0xf9] = (int)ALBW_AS_U32(fparam_0);
      return func_002F97EC((int)param_1,local_a4,iVar2,fparam_0);
    }
  }
  else if (iVar2 != 2) {
    param_1[0x275] = 0;
    return 0;
  }
  return func_0065AD50(piVar9,2);
}

