#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_001DA348(int param_1,float *param_2,float *param_3,int param_4);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern undefined4 DAT_001dabe4;
extern uint DAT_001dabe8;
extern float DAT_001dabec;
extern undefined4 *DAT_001dabf0;
extern int *DAT_001dabf4;
extern uint *DAT_001dabf8;
extern float DAT_001dabfc;
extern undefined4 *DAT_001dac00;
extern undefined4 DAT_001dac04;
extern int *DAT_001dac08;
extern float DAT_001dac0c;
extern undefined4 DAT_001dac10;
extern float DAT_001dac14;
extern float DAT_001dac18;
extern int *DAT_001dac1c;

// USA 001DA898 <- EU 001DA898 (Ghidra, non-matching)
// GLOBAL DAT_001dabe4 undefined4
// GLOBAL DAT_001dabe8 uint
// GLOBAL DAT_001dabec float
// GLOBAL DAT_001dabf0 undefined4 *
// GLOBAL DAT_001dabf4 int *
// GLOBAL DAT_001dabf8 uint *
// GLOBAL DAT_001dabfc float
// GLOBAL DAT_001dac00 undefined4 *
// GLOBAL DAT_001dac04 undefined4
// GLOBAL DAT_001dac08 int *
// GLOBAL DAT_001dac0c float
// GLOBAL DAT_001dac10 undefined4
// GLOBAL DAT_001dac14 float
// GLOBAL DAT_001dac18 float
// GLOBAL DAT_001dac1c int *

undefined4 func_001DA898(uint param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d4 (*(float *)(albw_frame + 0xc))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_cc (*(float *)(albw_frame + 0x14))
  #define local_c8 (*(float *)(albw_frame + 0x18))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_c0 (*(float *)(albw_frame + 0x20))
  #define local_bc (*(float *)(albw_frame + 0x24))
  #define local_b8 (*(float *)(albw_frame + 0x28))
  #define local_b4 (*(float *)(albw_frame + 0x2c))
  #define local_b0 (*(float * *)(albw_frame + 0x30))
  #define local_ac (*(int *)(albw_frame + 0x34))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_9c (*(undefined4 *)(albw_frame + 0x44))
  #define local_94 (*(float * *)(albw_frame + 0x4c))
  #define pfStack_90 (*(float * *)(albw_frame + 0x50))
  #define local_84 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x68))
  #define local_74 ((byte *)(albw_frame + 0x6c))
  #define local_64 (*(uint *)(albw_frame + 0x7c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x80))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x84))
  #define local_58 (*(undefined4 *)(albw_frame + 0x88))
  #define local_54 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_50 (*(float *)(albw_frame + 0x90))
  #define local_4c (*(undefined1 *)(albw_frame + 0x94))
  #define local_4b (*(undefined1 *)(albw_frame + 0x95))
  #define local_48 (*(float *)(albw_frame + 0x98))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x9c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0xa0))
  #define local_38 (*(float *)(albw_frame + 0xa8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xac))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0xb0))
  local_64 = param_1 & 0xffff0000 | DAT_001dabe8;
  local_74[0] = 0;
  local_74[1] = 0;
  local_74[2] = 0;
  local_74[3] = 0;
  local_74[4] = 0;
  local_74[5] = 0;
  local_74[6] = 0;
  local_74[7] = 0;
  local_74[8] = 0;
  local_74[9] = 0;
  local_74[10] = 0;
  local_74[0xb] = 0;
  local_74[0xc] = 0;
  local_74[0xd] = 0;
  local_74[0xe] = 0;
  local_74[0xf] = 0;
  uStack_60 = 0xff;
  uStack_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = DAT_001dabec;
  local_4c = 0;
  local_4b = 1;
  fVar10 = DAT_001dabec;
  uVar5 = DAT_001dabe4;
  func_00110D44(&local_b0,local_74,0x2a);
  local_80 = *DAT_001dabf0;
  uStack_7c = DAT_001dabf0[1];
  uStack_78 = DAT_001dabf0[2];
  iVar4 = 2;
  local_84 = uVar5;
  if (param_2 == 0) {
    func_00115C70(&local_38,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x368));
    local_48 = local_38;
    uStack_44 = uStack_34;
    uStack_40 = uStack_30;
    func_00115D88(&local_38,&local_48,DAT_001dabfc);
    local_bc = local_38;
    local_b8 = ALBW_AS_F32(uStack_34);
    local_b4 = ALBW_AS_F32(uStack_30);
    func_001DA348(param_1,&local_d4,(float *)(param_1 + 0x368),0);
  }
  else {
    func_001DA348(param_1,&local_c8,(float *)(param_1 + 0x3d0),0);
    puVar3 = (undefined4 *)func_0052FBA0(*DAT_001dabf4 + 0x3dbbc,*(uint *)(param_1 + 0x50));
    if (((*DAT_001dabf8 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001dabf8), iVar4 != 0)) {
      *DAT_001dac00 = DAT_001dac04;
    }
    if ((puVar3 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar3)(puVar3,DAT_001dac00), iVar4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3 == (undefined4 *)0x0) {
      local_d4 = **(float **)(*DAT_001dac08 + 0x1c);
      local_cc = (*(float **)(*DAT_001dac08 + 0x1c))[2];
    }
    else {
      local_d4 = ALBW_AS_F32(puVar3[0xf4]);
      local_cc = ALBW_AS_F32(puVar3[0xf6]);
    }
    local_d0 = local_c4;
    func_00115C70(&local_bc,&local_c8,&local_d4);
    fVar9 = SQRT(local_bc * local_bc + local_b8 * local_b8 + local_b4 * local_b4) * DAT_001dac0c;
    iVar11 = (int)fVar9;
    fVar12 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
    uVar8 = in_fpscr & 0xfffffff | (uint)(fVar12 == fVar9) << 0x1e;
    if ((!SUB41(uVar8 >> 0x1e,0)) &&
       (uVar8 = in_fpscr & 0xfffffff | (uint)(fVar10 == fVar9) << 0x1e |
                (uint)(fVar9 <= fVar10) << 0x1d, bVar1 = (byte)(uVar8 >> 0x18),
       !(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6))) {
      iVar11 = iVar11 + 1;
    }
    iVar4 = iVar11 + -1;
    if (iVar4 < 0) {
      return 0;
    }
    fVar10 = (float)VectorSignedToFloat(iVar11,(byte)(uVar8 >> 0x15) & 3);
    func_00115D88(&local_48,&local_bc,fVar10);
    local_bc = local_48;
    local_b8 = ALBW_AS_F32(uStack_44);
    local_b4 = ALBW_AS_F32(uStack_40);
  }
  func_00115C54(&local_c8,&local_d4,&local_bc);
  local_ac = param_1 + 0x4e8;
  *(undefined1 *)(param_1 + 0x51a) = 0;
  piVar2 = DAT_001dac1c;
  local_a4 = *(undefined4 *)(param_1 + 0x2cc);
  local_9c = DAT_001dac10;
  uVar5 = *(undefined4 *)(param_1 + 0x430);
  uVar6 = *(undefined4 *)(param_1 + 0x434);
  uVar7 = *(undefined4 *)(param_1 + 0x438);
  local_b0 = &local_c8;
  pfStack_90 = &local_d4;
  iVar11 = 0;
  fVar10 = DAT_001dac18;
  fVar9 = DAT_001dac14;
  local_94 = local_b0;
  if (0 < iVar4 + 1) {
    do {
      *(float *)(param_1 + 0x430) = local_c8;
      *(undefined4 *)(param_1 + 0x434) = local_c4;
      *(float *)(param_1 + 0x438) = local_c0;
      func_004A7620(*piVar2,(uint *)&local_b0,0x2f,fVar10,fVar9);
      if (*(char *)(param_1 + 0x51a) != '\0') {
        *(float *)(param_1 + 0x430) = local_c8;
        *(undefined4 *)(param_1 + 0x434) = local_c4;
        *(float *)(param_1 + 0x438) = local_c0;
        func_001DA348(param_1,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x430),1);
        return 1;
      }
      local_d4 = local_c8;
      local_d0 = local_c4;
      local_cc = local_c0;
      func_00115C54(&local_c8,&local_c8,&local_bc);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar4 + 1);
  }
  *(undefined4 *)(param_1 + 0x430) = uVar5;
  *(undefined4 *)(param_1 + 0x434) = uVar6;
  *(undefined4 *)(param_1 + 0x438) = uVar7;
  return 0;
}

