#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0034CA24(undefined4 *param_1);
extern int func_004CB9BC(int param_1);
extern int func_004CBAE0(int param_1);
extern uint DAT_004fbf0c;
extern float DAT_004fbf10;
extern int *DAT_004fbf14;
extern uint *DAT_004fbf18;
extern undefined4 *DAT_004fbf1c;
extern undefined4 DAT_004fbf20;

// USA 004FBD44 <- EU 004FBD1C (Ghidra, non-matching)
// GLOBAL DAT_004fbf0c uint
// GLOBAL DAT_004fbf10 float
// GLOBAL DAT_004fbf14 int *
// GLOBAL DAT_004fbf18 uint *
// GLOBAL DAT_004fbf1c undefined4 *
// GLOBAL DAT_004fbf20 undefined4

undefined4 func_004FBD44(undefined4 *param_1,uint *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  sbyte sVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(uint *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(uint *)(albw_frame + 0x14))
  if (param_4 == 0) {
    sVar7 = 0x12;
  }
  else {
    sVar7 = 0x10;
  }
  func_0034CA24(param_2);
  func_00115C70(&local_34,(float *)(param_1 + 0xf4),(float *)(param_1 + 0x20f));
  uVar5 = DAT_004fbf0c;
  param_2[2] = (uint)ALBW_AS_U32(local_34);
  param_2[3] = (uint)ALBW_AS_U32(local_30);
  param_2[4] = local_2c;
  param_2[3] = uVar5;
  func_00115DC8((float *)(param_2 + 2));
  *param_2 = *param_2 | 1 << sVar7;
  fparam_0 = ALBW_AS_F32(param_1[0x11c]) * DAT_004fbf10;
  func_00115C70(&local_34,(float *)(param_1 + 0x20f),(float *)(param_1 + 0xf4));
  local_40 = local_34;
  local_38 = local_2c;
  local_3c = uVar5;
  func_00115DC8(&local_40);
  func_00115D70(&local_40,&local_40,fparam_0);
  func_00115C54(&local_34,(float *)(param_1 + 0xf4),&local_40);
  param_2[5] = (uint)ALBW_AS_U32(local_34);
  param_2[6] = (uint)ALBW_AS_U32(local_30);
  param_2[7] = local_2c;
  piVar1 = DAT_004fbf14;
  uVar3 = 0;
  param_2[6] = (uint)ALBW_AS_U32((local_30 + ALBW_AS_F32(param_1[0x1e6])));
  *(sbyte *)((int)param_2 + 0x21) = sVar7;
  if (param_4 != 0 && param_3 != 0) {
    uVar3 = *(undefined2 *)(param_1 + 0x20e);
  }
  *(undefined2 *)(param_2 + 0xc) = uVar3;
  if (*(int *)(param_1[0xb4] + 8) == *piVar1) {
    if (((*DAT_004fbf18 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004fbf18), iVar4 != 0)) {
      *DAT_004fbf1c = DAT_004fbf20;
    }
    iVar4 = (**(code **)*param_1)(param_1,DAT_004fbf1c);
    puVar6 = param_1;
    if (iVar4 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 == (undefined4 *)0x0) {
LAB_004fbef8:
      return func_0034CA24(param_2);
    }
    if (*(char *)((int)param_1 + 0x8b7) == '\0') {
      uVar5 = func_004CBAE0((int)puVar6);
      if (uVar5 == 0) goto LAB_004fbef8;
      uVar2 = 3;
    }
    else {
      uVar5 = func_004CB9BC((int)puVar6);
      if (uVar5 == 0) goto LAB_004fbef8;
      uVar2 = 0xc;
    }
    *(undefined1 *)(param_2 + 8) = uVar2;
  }
  param_2[9] = param_2[2];
  param_2[10] = param_2[3];
  param_2[0xb] = param_2[4];
  return 0;
}

