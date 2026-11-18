#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined1 *DAT_005c7150;
extern undefined4 *DAT_005c7154;
extern undefined4 DAT_005c7164;
extern undefined4 DAT_005c7168;
extern undefined4 DAT_005c716c;
extern undefined4 *DAT_005c7170;
extern undefined4 *DAT_005c717c;
extern undefined4 *DAT_005c718c;
extern undefined4 *DAT_005c719c;
extern undefined4 *DAT_005c71ac;
extern undefined4 *DAT_005c71bc;
extern undefined4 *DAT_005c71cc;
extern undefined4 *DAT_005c71e0;
extern undefined4 *DAT_005c71f0;
extern undefined4 DAT_005c7200;
extern undefined4 *DAT_005c7204;
extern undefined4 DAT_005c7208;
extern undefined1 *DAT_005c720c;
extern uint DAT_005c7210;
extern char s_LlegB_jnt_005c71e4[];
extern char s_Lshoulder_jnt_005c71d0[];
extern char s_RlegB_jnt_005c71f4[];
extern char s_center_005c7174[];
extern char s_chest_jnt_005c7180[];
extern char s_cl_LhandA_005c71b0[];
extern char s_cl_RhandA_005c71c0[];
extern char s_head_jnt_005c7190[];
extern char s_neck_jnt_005c71a0[];
extern char s_skl_root_005c7158[];

// USA 005C6F74 <- EU 005C6F4C (Ghidra, non-matching)
// GLOBAL DAT_005c7150 undefined1 *
// GLOBAL DAT_005c7154 undefined4 *
// GLOBAL DAT_005c7164 undefined4
// GLOBAL DAT_005c7168 undefined4
// GLOBAL DAT_005c716c undefined4
// GLOBAL DAT_005c7170 undefined4 *
// GLOBAL DAT_005c717c undefined4 *
// GLOBAL DAT_005c718c undefined4 *
// GLOBAL DAT_005c719c undefined4 *
// GLOBAL DAT_005c71ac undefined4 *
// GLOBAL DAT_005c71bc undefined4 *
// GLOBAL DAT_005c71cc undefined4 *
// GLOBAL DAT_005c71e0 undefined4 *
// GLOBAL DAT_005c71f0 undefined4 *
// GLOBAL DAT_005c7200 undefined4
// GLOBAL DAT_005c7204 undefined4 *
// GLOBAL DAT_005c7208 undefined4
// GLOBAL DAT_005c720c undefined1 *
// GLOBAL DAT_005c7210 uint
// GLOBAL s_LlegB_jnt_005c71e4 string
// GLOBAL s_Lshoulder_jnt_005c71d0 string
// GLOBAL s_RlegB_jnt_005c71f4 string
// GLOBAL s_center_005c7174 string
// GLOBAL s_chest_jnt_005c7180 string
// GLOBAL s_cl_LhandA_005c71b0 string
// GLOBAL s_cl_RhandA_005c71c0 string
// GLOBAL s_head_jnt_005c7190 string
// GLOBAL s_neck_jnt_005c71a0 string
// GLOBAL s_skl_root_005c7158 string

void func_005C6F74(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar1 = DAT_005c7150;
  *(undefined4 *)(DAT_005c7150 + 0x18) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1c) = 0xffffffff;
  uVar2 = DAT_005c7164;
  puVar4 = DAT_005c7154;
  *DAT_005c7154 = 0;
  puVar4[1] = 0;
  puVar4[3] = s_skl_root_005c7158;
  puVar4[2] = uVar2;
  puVar4 = DAT_005c7170;
  DAT_005c7170[1] = s_center_005c7174;
  *puVar4 = uVar2;
  puVar4 = DAT_005c717c;
  DAT_005c717c[1] = s_chest_jnt_005c7180;
  *puVar4 = uVar2;
  puVar4 = DAT_005c718c;
  DAT_005c718c[1] = s_head_jnt_005c7190;
  *puVar4 = uVar2;
  puVar4 = DAT_005c719c;
  DAT_005c719c[1] = s_neck_jnt_005c71a0;
  *puVar4 = uVar2;
  puVar4 = DAT_005c71ac;
  DAT_005c71ac[1] = s_cl_LhandA_005c71b0;
  *puVar4 = uVar2;
  puVar4 = DAT_005c71bc;
  DAT_005c71bc[1] = s_cl_RhandA_005c71c0;
  *puVar4 = uVar2;
  puVar4 = DAT_005c71cc;
  DAT_005c71cc[1] = s_Lshoulder_jnt_005c71d0;
  *puVar4 = uVar2;
  puVar4 = DAT_005c71e0;
  DAT_005c71e0[1] = s_LlegB_jnt_005c71e4;
  *puVar4 = uVar2;
  puVar4 = DAT_005c71f0;
  DAT_005c71f0[1] = s_RlegB_jnt_005c71f4;
  *puVar4 = uVar2;
  uVar2 = DAT_005c7200;
  puVar1 = DAT_005c7150;
  *DAT_005c7150 = 0xff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 0x78) = 0x80;
  *(undefined4 *)(puVar1 + 0x7c) = 0x80;
  uVar3 = DAT_005c7208;
  puVar4 = DAT_005c7204;
  *DAT_005c7204 = uVar2;
  puVar4[1] = uVar3;
  puVar4[2] = uVar2;
  puVar1 = DAT_005c720c;
  puVar4 = (undefined4 *)(DAT_005c720c + 4);
  *DAT_005c720c = 0xff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xff;
  uVar5 = func_00114608(DAT_005c7210,0);
  *puVar4 = (int)uVar5;
  puVar1[8] = 0xff;
  puVar1[9] = 0;
  puVar1[10] = 0x8a;
  puVar1[0xb] = 0x6a;
  puVar1[0xc] = 0xff;
  puVar1[0xd] = 0xf0;
  puVar1[0xe] = 0x7f;
  puVar1[0xf] = 0xe6;
  uVar5 = func_00114608(0x4e000000,0x7f);
  *(int *)(puVar1 + 0x10) = (int)uVar5;
  return;
}

