#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_002160F0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00521078(int param_1);
extern float func_0058AA40(int param_1);
extern float func_0058AC38(int param_1);
extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);
extern float DAT_0021699c;
extern float DAT_002169a0;
extern int DAT_002169a4;
extern uint DAT_002169a8;
extern undefined4 DAT_002169ac;
extern undefined4 DAT_002169b0;
extern float DAT_002169b4;
extern float DAT_002169b8;
extern float DAT_002169bc;
extern int *DAT_002169c0;
extern int DAT_002169c4;
extern undefined4 DAT_002169c8;

// USA 002166DC <- EU 002166DC (Ghidra, non-matching)
// GLOBAL DAT_0021699c float
// GLOBAL DAT_002169a0 float
// GLOBAL DAT_002169a4 int
// GLOBAL DAT_002169a8 uint
// GLOBAL DAT_002169ac undefined4
// GLOBAL DAT_002169b0 undefined4
// GLOBAL DAT_002169b4 float
// GLOBAL DAT_002169b8 float
// GLOBAL DAT_002169bc float
// GLOBAL DAT_002169c0 int *
// GLOBAL DAT_002169c4 int
// GLOBAL DAT_002169c8 undefined4

void func_002166DC(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint unaff_r6;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 ((uint *)(albw_frame + 0x0))
  #define local_b4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_b0 (*(undefined2 *)(albw_frame + 0x10))
  #define local_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a4 (*(undefined4 * *)(albw_frame + 0x1c))
  #define local_a0 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_94 (*(float *)(albw_frame + 0x2c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x30))
  #define local_8c (*(undefined4 *)(albw_frame + 0x34))
  #define local_88 (*(undefined4 *)(albw_frame + 0x38))
  #define local_84 ((byte *)(albw_frame + 0x3c))
  #define local_74 (*(uint *)(albw_frame + 0x4c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x54))
  #define local_68 (*(undefined4 *)(albw_frame + 0x58))
  #define local_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x60))
  #define local_5c (*(undefined1 *)(albw_frame + 0x64))
  #define local_5b (*(undefined1 *)(albw_frame + 0x65))
  #define local_54 (*(float *)(albw_frame + 0x6c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x70))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x74))
  #define local_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_40 (*(float *)(albw_frame + 0x80))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x84))
  #define local_38 (*(undefined4 *)(albw_frame + 0x88))
  #define local_34 (*(float *)(albw_frame + 0x8c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x90))
  #define local_2c (*(float *)(albw_frame + 0x94))
  #define local_28 (*(float *)(albw_frame + 0x98))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x9c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0xa0))
  fVar5 = func_0058AA40(param_1);
  fVar6 = func_0058AC38(param_1);
  fVar5 = fVar5 / fVar6;
  func_00115D70(&local_28,(float *)(param_1 + 0x9fc),DAT_0021699c);
  local_54 = local_28;
  uStack_50 = uStack_24;
  uStack_4c = uStack_20;
  func_00115D70(&local_2c,&local_54,DAT_002169a0 - fVar5);
  *(float *)(param_1 + 0x3dc) = local_2c;
  *(float *)(param_1 + 0x3e0) = local_28;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_24;
  *(undefined4 *)(param_1 + 0xa38) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0xa3c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xa40) = *(undefined4 *)(param_1 + 0x3d8);
  iVar2 = DAT_002169a4;
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xaf4),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0xa3c) =
       *(float *)(param_1 + 0xa44) * fVar5 * fVar5 + *(float *)(param_1 + 0xa48) * fVar5 +
       *(float *)(param_1 + 0xa4c);
  *(int *)(param_1 + 0xaf4) = *(int *)(param_1 + 0xaf4) + 1;
  func_0051D27C((int *)(param_1 + 1000),*(int *)(param_1 + 0xa64),iVar2);
  local_74 = unaff_r6 & 0xffff0000 | DAT_002169a8;
  local_84[0] = 0;
  local_84[1] = 0;
  local_84[2] = 0;
  local_84[3] = 0;
  local_84[4] = 0;
  local_84[5] = 0;
  local_84[6] = 0;
  local_84[7] = 0;
  local_84[8] = 0;
  local_84[9] = 0;
  local_84[10] = 0;
  local_84[0xb] = 0;
  local_84[0xc] = 0;
  local_84[0xd] = 0;
  local_84[0xe] = 0;
  local_84[0xf] = 0;
  local_70 = 0xff;
  uStack_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = DAT_002169ac;
  local_5c = 0;
  local_5b = 1;
  uVar7 = DAT_002169ac;
  func_00110D44(local_c0,local_84,0x2a);
  local_44 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_3c = *(undefined4 *)(param_1 + 0x3d8);
  puVar4 = &local_38;
  local_a0 = &local_44;
  uVar3 = 0xf;
  local_40 = *(float *)(param_1 + 0x3d4) + DAT_002169b4;
  local_34 = *(float *)(param_1 + 0x3d4) - DAT_002169b4;
  local_a4 = &local_38;
  local_c0[0] = 0;
  local_94 = DAT_002169b4;
  local_ac = 0x7f;
  local_b4 = 0;
  local_b0 = *(undefined2 *)(param_1 + 0x54);
  local_90 = uVar7;
  local_8c = uVar7;
  local_88 = uVar7;
  local_38 = local_44;
  uStack_30 = uStack_3c;
  iVar2 = func_004A9F98(*DAT_002169c0,local_c0,0xf,DAT_002169bc,DAT_002169b8);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xb3c) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xb3c) = 1;
  }
  if ((*(char *)(param_1 + 0xb39) == '\0') &&
     (fVar5 = func_0058AA40(param_1), DAT_002169c4 < (int)ALBW_AS_U32(fVar5))) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffcff;
    *(undefined1 *)(param_1 + 0xb39) = 1;
  }
  if ((*(uint *)(param_1 + 0x59c) & 0x300) == 0) {
    if (*(uint *)(param_1 + 0xad0) < *(uint *)(param_1 + 0xad4)) {
      *(uint *)(param_1 + 0xad0) = *(uint *)(param_1 + 0xad0) + 1;
    }
    else {
      iVar2 = func_002160F0(param_1,*(uint *)(param_1 + 0xad4),uVar3,(uint)puVar4);
      if (iVar2 != 0) {
        *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x300;
      }
      uVar7 = DAT_002169c8;
      *(undefined4 *)(param_1 + 0xad4) = 2;
      *(undefined4 *)(param_1 + 0xad8) = uVar7;
      *(undefined4 *)(param_1 + 0xad0) = 0;
    }
  }
  if ((*(float *)(param_1 + 0xa3c) <= *(float *)(param_1 + 0x3d4)) &&
     (bVar1 = func_00521078(param_1), bVar1)) {
    func_0065D9FC((undefined4 *)(param_1 + 0x8bc),6);
    *(undefined4 *)(param_1 + 0xa4c) = *(undefined4 *)(param_1 + 0x3d4);
  }
  return;
}

