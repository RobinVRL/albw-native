#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_001139F8(int param_1);
extern void func_001FE4C0(int param_1,float fparam_0);
extern int func_001FE6C8(int param_1);
extern int func_002C2D00(int *param_1);
extern int func_002FF8A4(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int param_7);
extern int func_0030022C(undefined4 *param_1);
extern void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D0134(int param_1,int param_2);
extern int func_00504D48(int param_1,int param_2);
extern int func_00522DDC(int param_1);
extern int func_00533400(int param_1,int *param_2);
extern undefined4 uRam001ff5ec;
extern uint DAT_001ff5b4;
extern uint DAT_001ff5b8;
extern int *DAT_001ff5bc;
extern uint DAT_001ff5d8;
extern int *DAT_001ff5dc;
extern uint *DAT_001ff5e0;
extern undefined4 *DAT_001ff5e4;
extern undefined4 DAT_001ff5e8;
extern char s_Actor_FrescoBase_bch_001ff5c0[];
extern char s_cf_001ff5c0[];

// USA 001FF22C <- EU 001FF22C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// GLOBAL DAT_001ff5b4 uint
// GLOBAL DAT_001ff5b8 uint
// GLOBAL DAT_001ff5bc int *
// GLOBAL DAT_001ff5d8 uint
// GLOBAL DAT_001ff5dc int *
// GLOBAL DAT_001ff5e0 uint *
// GLOBAL DAT_001ff5e4 undefined4 *
// GLOBAL DAT_001ff5e8 undefined4
// GLOBAL UNK_001ff5ec undefined4
// GLOBAL s_cf_001ff5c0 string

/* WARNING: Variable defined which should be unmapped: objStack_c0 */

undefined4
func_001FF22C(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
             undefined4 *param_5,float fparam_0,float fparam_1,float fparam_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define objStack_c0 ((uint *)(albw_frame + 0x0))
  #define uStack_70 (*(uint *)(albw_frame + 0x50))
  #define uStack_6c (*(uint *)(albw_frame + 0x54))
  #define uStack_68 (*(uint *)(albw_frame + 0x58))
  #define uStack_64 (*(uint *)(albw_frame + 0x5c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x64))
  #define local_58 (*(undefined4 *)(albw_frame + 0x68))
  #define local_54 (*(undefined1 *)(albw_frame + 0x6c))
  #define local_53 (*(undefined1 *)(albw_frame + 0x6d))
  #define local_50 (*(undefined4 *)(albw_frame + 0x70))
  #define local_4c (*(undefined4 *)(albw_frame + 0x74))
  #define local_48 (*(undefined4 *)(albw_frame + 0x78))
  #define local_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x80))
  #define local_3c (*(undefined4 *)(albw_frame + 0x84))
  #define local_38 (*(undefined1 *)(albw_frame + 0x88))
  #define local_37 (*(undefined1 *)(albw_frame + 0x89))
  uVar10 = CONCAT44(fparam_1,fparam_0);
  puVar2 = (undefined4 *)func_0010BAB4(0x18c);
  iVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = func_0030022C(puVar2);
  }
  param_1[0x1f] = iVar3;
  uVar7 = param_5[1];
  uVar8 = param_5[2];
  param_1[0x13] = *param_5;
  param_1[0x14] = uVar7;
  param_1[0x15] = uVar8;
  param_1[0x23] = (int)uVar10;
  param_1[0x24] = (int)((ulonglong)uVar10 >> 0x20);
  param_1[0x25] = ALBW_AS_U32(fparam_2);
  objStack_c0[1] = 0;
  objStack_c0[0] = 1;
  objStack_c0[2] = 0;
  func_002FF8A4(param_1[0x1f],0x80,0x80,1,1,(int *)0x0,0);
  iVar3 = param_1[0x1f];
  *(undefined4 *)(iVar3 + 0x16c) = param_1[0x13];
  *(undefined4 *)(iVar3 + 0x170) = param_1[0x14];
  *(undefined4 *)(iVar3 + 0x174) = param_1[0x15];
  iVar3 = param_1[0x1f];
  fVar9 = ALBW_AS_F32(param_1[0x23]);
  if (*(float *)(iVar3 + 0x164) != fVar9) {
    *(uint *)(iVar3 + 0x188) = *(uint *)(iVar3 + 0x188) | 8;
  }
  *(float *)(iVar3 + 0x164) = fVar9;
  *(undefined4 *)(param_1[0x1f] + 0x168) = 0x80000000;
  (**(code **)*param_1)(param_1,param_2);
  uVar7 = 0;
  if ((param_1[1] != 0) &&
     (objStack_c0[4] = func_00533400(param_1[1],param_3), uStack_70 = DAT_001ff5b8,
     uStack_6c = DAT_001ff5b4, uVar7 = 0, objStack_c0[4] != 0)) {
    objStack_c0[0] = DAT_001ff5b8;
    objStack_c0[1] = DAT_001ff5b4;
    objStack_c0[5] = 0;
    objStack_c0[2] = DAT_001ff5b8;
    objStack_c0[3] = DAT_001ff5b4;
    (*(undefined1 *)((char *)&objStack_c0[0xe] + 0)) = 1;
    objStack_c0[0xc] = 0;
    objStack_c0[0xd] = 0;
    objStack_c0[9] = 0;
    objStack_c0[0xb] = 0;
    objStack_c0[8] = 0;
    objStack_c0[10] = 0;
    (*(undefined1 *)((char *)&objStack_c0[0xe] + 1)) = 0xc4;
    objStack_c0[7] = CONCAT22((*(undefined2 *)((char *)&objStack_c0[7] + 2)),0x101);
    objStack_c0[6] = 1;
    piVar4 = func_002C2D00((int *)objStack_c0);
    param_1[2] = piVar4;
    piVar1 = DAT_001ff5bc;
    piVar4[0x59] = piVar4[0x59] | 1;
    uVar5 = func_00522DDC(*piVar1);
    func_004CE804(param_1[2],uVar5 & 0xffff,0,0,fVar9);
    objStack_c0[2] = 0;
    objStack_c0[3] = 0;
    objStack_c0[4] = 0x20;
    objStack_c0[5] = 0;
    objStack_c0[6] = 0;
    objStack_c0[7] = 0;
    objStack_c0[8] = 0;
    objStack_c0[9] = 0;
    objStack_c0[10] = 0;
    objStack_c0[0] = uStack_70;
    objStack_c0[1] = uStack_6c;
    objStack_c0[0xc] = DAT_001ff5d8;
    objStack_c0[0xb] = uStack_70;
    (*(undefined1 *)((char *)&objStack_c0[0xe] + 0)) = 0;
    objStack_c0[0xf] = uStack_70;
    objStack_c0[0x10] = (uint)s_Actor_FrescoBase_bch_001ff5c0;
    objStack_c0[0x11] = 0;
    objStack_c0[0x12] = 0;
    (*(undefined1 *)((char *)&objStack_c0[0x13] + 0)) = 0;
    objStack_c0[0xd] = 0x1000407;
    puVar2 = func_00504D48(*DAT_001ff5dc,(int)objStack_c0);
    uVar7 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[0x32] == 0) {
        local_60 = 0;
      }
      else {
        local_60 = *(undefined4 *)puVar2[0x34];
      }
      uStack_5c = 0;
      uStack_68 = uStack_70;
      uStack_64 = uStack_6c;
      local_40 = 0;
      local_38 = 1;
      local_54 = 2;
      local_3c = 0;
      local_4c = 0;
      local_44 = 0;
      local_50 = 0;
      local_48 = 0;
      local_37 = 0xc4;
      local_53 = 1;
      local_58 = 1;
      piVar4 = func_002C2D00((int *)&uStack_70);
      if (((*DAT_001ff5e0 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_001ff5e0), iVar3 != 0)) {
        *DAT_001ff5e4 = DAT_001ff5e8;
      }
      if ((piVar4 == (int *)0x0) ||
         (iVar3 = (**(code **)(*piVar4 + 8))(piVar4,DAT_001ff5e4), iVar3 == 0)) {
        piVar4 = (int *)0x0;
      }
      param_1[0x20] = piVar4;
      uVar5 = func_001139F8(*(int *)(param_1[0x1f] + 0x3c));
      *(uint *)piVar4[0x7a] = uVar5 >> 3;
      *(uint *)(param_1[0x20] + 0x164) = *(uint *)(param_1[0x20] + 0x164) | 1;
      func_004CF478(param_1[0x20],0);
      func_004D0134(param_1[0x20],0);
      (**(code **)(*(int *)param_1[0x20] + 0x10))((int *)param_1[0x20],0xef);
      uVar5 = func_00522DDC(*piVar1);
      func_004CE804(param_1[0x20],uVar5 & 0xffff,0,0,fVar9);
      iVar6 = func_0010BAB4(uRam001ff5ec);
      iVar3 = 0;
      if (iVar6 != 0) {
        iVar3 = func_001FE6C8(iVar6);
      }
      param_1[0x21] = iVar3;
      func_001FE4C0(iVar3,fVar9);
      param_1[0x22] = param_4;
      uVar7 = 1;
      *(undefined1 *)(param_1 + 0x27) = 0;
    }
  }
  return uVar7;
}

