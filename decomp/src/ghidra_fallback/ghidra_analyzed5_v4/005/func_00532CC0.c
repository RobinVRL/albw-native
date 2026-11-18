#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001139F8(int param_1);
extern int func_003CD3DC(undefined4 *param_1);
extern int func_0048AC60(undefined4 param_1);
extern int func_0048C55C(undefined4 *param_1);
extern int func_00495028(int param_1,undefined4 *param_2);
extern int func_00495080(int param_1);
extern int func_00495090(int param_1);
extern int func_004950C4(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_004951F0(int param_1,undefined4 param_2,float *param_3,int param_4);
extern float DAT_00532f24;
extern undefined4 DAT_00532f28;
extern uint *DAT_00532f2c;
extern int *DAT_00532f30;
extern undefined4 *DAT_00532f34;
extern undefined4 DAT_00532f38;
extern int *DAT_00532f3c;
extern undefined4 *DAT_00532f40;
extern undefined4 *DAT_00532f44;

// USA 00532CC0 <- EU 00532C98 (Ghidra, non-matching)
// GLOBAL DAT_00532f24 float
// GLOBAL DAT_00532f28 undefined4
// GLOBAL DAT_00532f2c uint *
// GLOBAL DAT_00532f30 int *
// GLOBAL DAT_00532f34 undefined4 *
// GLOBAL DAT_00532f38 undefined4
// GLOBAL DAT_00532f3c int *
// GLOBAL DAT_00532f40 undefined4 *
// GLOBAL DAT_00532f44 undefined4 *

void func_00532CC0(int param_1,uint param_2,float fparam_0)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define local_138 (*(int *)(albw_frame + 0x8))
  #define local_134 (*(ushort *)(albw_frame + 0xc))
  #define local_132 (*(ushort *)(albw_frame + 0xe))
  #define local_130 (*(undefined1 *)(albw_frame + 0x10))
  #define local_12f (*(undefined1 *)(albw_frame + 0x11))
  #define local_12e (*(undefined1 *)(albw_frame + 0x12))
  #define local_12d (*(undefined1 *)(albw_frame + 0x13))
  #define local_12c (*(undefined1 *)(albw_frame + 0x14))
  #define local_123 (*(undefined1 *)(albw_frame + 0x1d))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0xb4))
  #define local_88 (*(uint *)(albw_frame + 0xb8))
  #define local_84 (*(uint *)(albw_frame + 0xbc))
  #define local_80 (*(int *)(albw_frame + 0xc0))
  #define local_7c (*(undefined1 *)(albw_frame + 0xc4))
  #define local_7b (*(undefined1 *)(albw_frame + 0xc5))
  #define local_78 (*(undefined4 *)(albw_frame + 0xc8))
  #define local_74 (*(float *)(albw_frame + 0xcc))
  #define local_70 (*(float *)(albw_frame + 0xd0))
  #define local_6c (*(float *)(albw_frame + 0xd4))
  #define local_68 (*(undefined4 *)(albw_frame + 0xd8))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0xdc))
  #define local_60 (*(undefined4 *)(albw_frame + 0xe0))
  #define local_5c (*(float *)(albw_frame + 0xe4))
  #define local_58 (*(float *)(albw_frame + 0xe8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xec))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0xf0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0xf4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0xf8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xfc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x100))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x104))
  #define local_38 (*(undefined4 *)(albw_frame + 0x108))
  #define local_34 (*(undefined1 *)(albw_frame + 0x10c))
  #define local_30 (*(float *)(albw_frame + 0x110))
  #define local_2c (*(float *)(albw_frame + 0x114))
  #define local_28 (*(float *)(albw_frame + 0x118))
  #define local_24 (*(float *)(albw_frame + 0x11c))
  if (*(char *)(param_1 + 0x50) == '\x02') {
    local_30 = DAT_00532f24;
    local_2c = DAT_00532f24;
    local_28 = DAT_00532f24;
    fVar12 = DAT_00532f24;
    local_24 = fparam_0;
    func_003CD3DC(&local_138);
    local_134 = (ushort)**(undefined4 **)(param_1 + 0x70);
    local_132 = (ushort)*(undefined4 *)(*(int *)(param_1 + 0x70) + 4);
    if (*(char *)(param_1 + 0x80) == '\x02') {
      local_12d = 1;
      local_12c = 3;
    }
    local_12e = 0;
    local_12f = 0;
    local_130 = 3;
    piVar3 = (int *)(param_1 + 0x70 + (param_2 ^ 1) * 8);
    if (*(char *)(param_1 + 0x80) == '\0') {
      local_138 = func_001139F8(*(int *)(*piVar3 + 8));
    }
    else {
      local_138 = func_001139F8(*(int *)(piVar3[1] + 8));
    }
    local_123 = 0;
    func_0048C55C(&uStack_8c);
    local_88 = (uint)local_134;
    local_84 = (uint)local_132;
    local_80 = local_138;
    local_7c = local_130;
    local_7b = local_123;
    iVar7 = *DAT_00532f30;
    uVar11 = DAT_00532f28;
    if (((*DAT_00532f2c & 1) == 0) &&
       (iVar4 = func_00100174((int *)DAT_00532f2c), uVar2 = DAT_00532f38, puVar1 = DAT_00532f34,
       iVar4 != 0)) {
      puVar6 = DAT_00532f34 + 3;
      *DAT_00532f34 = uVar11;
      puVar1[1] = uVar2;
      puVar1[2] = uVar11;
      *puVar6 = uVar11;
      puVar1[4] = ALBW_AS_U32(fVar12);
      puVar1[5] = uVar11;
      puVar1[6] = uVar11;
      puVar1[7] = uVar11;
      puVar1[8] = uVar11;
      puVar1[9] = uVar11;
      puVar1[10] = ALBW_AS_U32(fVar12);
      puVar1[0xb] = uVar11;
    }
    func_00495090(iVar7);
    func_00495028(iVar7,DAT_00532f34);
    iVar4 = *(int *)(*DAT_00532f3c + 0x1b8);
    local_58 = *(float *)(iVar4 + 0xc) - *(float *)(iVar4 + 4);
    local_5c = *(float *)(iVar4 + 0x10) - *(float *)(iVar4 + 8);
    local_74 = fVar12;
    local_70 = fVar12;
    local_6c = fVar12;
    if (*(char *)(param_1 + 0x80) != '\x02') {
      fVar10 = (float)VectorUnsignedToFloat((uint)local_132,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorUnsignedToFloat((uint)local_134,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorUnsignedToFloat((uint)local_132,(byte)(in_fpscr >> 0x15) & 3);
      local_74 = fVar12 - local_58 / fVar10;
      local_70 = local_5c / fVar8;
      local_6c = local_58 / fVar9;
    }
    local_68 = *DAT_00532f40;
    uStack_64 = DAT_00532f40[1];
    local_60 = DAT_00532f40[2];
    local_54 = *DAT_00532f44;
    uStack_50 = DAT_00532f44[1];
    uStack_4c = DAT_00532f44[2];
    uStack_48 = DAT_00532f44[3];
    local_44 = *DAT_00532f44;
    uStack_40 = DAT_00532f44[1];
    uStack_3c = DAT_00532f44[2];
    local_38 = DAT_00532f44[3];
    local_34 = 0;
    local_78 = uVar11;
    pfVar5 = (float *)func_004950C4((int)&local_68,&local_30,&local_30);
    func_004951F0(iVar7,&uStack_8c,pfVar5,(int)&local_78);
    func_00495080(iVar7);
    func_0048AC60(&uStack_8c);
  }
  return;
}

