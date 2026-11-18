#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_002313DC(int param_1);
extern int func_00232540(undefined4 *param_1);
extern int func_003FDF90(int param_1,int param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern undefined4 DAT_00480148;
extern undefined4 DAT_0048014c;
extern undefined *DAT_00480150;
extern int DAT_00480160;
extern undefined DAT_00480178;
extern int DAT_00480190;
extern char s_ChangeState_00480154[];
extern char s_G_Heart__02d_00480194[];
extern char s_HardMode_004801ac[];
extern char s_Heart_004801a4[];
extern char s_InWait_00480170[];
extern char s_Number_00480188[];
extern char s_OutWait_00480180[];
extern char s_SetState_00480164[];
extern char s_cf_00480194[];

// USA 0047FE9C <- EU 0047FE74 (Ghidra, non-matching)
// GLOBAL DAT_00480148 undefined4
// GLOBAL DAT_0048014c undefined4
// GLOBAL DAT_00480150 undefined *
// GLOBAL DAT_00480160 int
// GLOBAL DAT_00480178 undefined
// GLOBAL DAT_00480190 int
// GLOBAL s_ChangeState_00480154 string
// GLOBAL s_cf_00480194 string
// GLOBAL s_HardMode_004801ac string
// GLOBAL s_Heart_004801a4 string
// GLOBAL s_InWait_00480170 string
// GLOBAL s_Number_00480188 string
// GLOBAL s_OutWait_00480180 string
// GLOBAL s_SetState_00480164 string

undefined2 * func_0047FE9C(undefined4 *param_1,int *param_2,int *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_3d (*(undefined1 *)(albw_frame + 0x33))
  #define local_38 (*(int *)(albw_frame + 0x38))
  #define local_34 (*(char * *)(albw_frame + 0x3c))
  #define local_30 (*(int *)(albw_frame + 0x40))
  #define local_2c (*(char * *)(albw_frame + 0x44))
  puVar4 = func_00232540(param_1);
  uVar2 = DAT_0048014c;
  *puVar4 = DAT_00480148;
  *(undefined2 *)(puVar4 + 8) = 0;
  *(undefined2 *)((int)puVar4 + 0x22) = 0xffff;
  puVar4[9] = uVar2;
  puVar4[10] = 0;
  *(undefined2 *)(puVar4 + 0xb) = 0;
  *(undefined2 *)((int)puVar4 + 0x2e) = 0xffff;
  puVar4[0xc] = uVar2;
  puVar4[0xd] = 0;
  *(undefined2 *)(puVar4 + 0xe) = 0;
  *(undefined2 *)((int)puVar4 + 0x3a) = 0xffff;
  puVar4[0xf] = uVar2;
  puVar4[0x10] = 0;
  *(undefined2 *)(puVar4 + 0x11) = 0;
  *(undefined2 *)((int)puVar4 + 0x46) = 0xffff;
  puVar4[0x12] = uVar2;
  puVar4[0x13] = 0;
  *(undefined2 *)(puVar4 + 0x14) = 0;
  *(undefined2 *)((int)puVar4 + 0x52) = 0xffff;
  puVar4[0x15] = uVar2;
  puVar4[0x16] = 0;
  *(undefined2 *)(puVar4 + 0x17) = 0;
  *(undefined2 *)((int)puVar4 + 0x5e) = 0xffff;
  puVar4[0x18] = uVar2;
  puVar4[0x19] = 0;
  puVar5 = (undefined2 *)func_00100118((int)(puVar4 + 0x1a),DAT_00480150,0xc,0x14);
  *(undefined1 *)(puVar5 + 0x78) = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x74);
  piVar6 = (int *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    piVar6 = func_00168434(puVar4);
  }
  func_00168100(piVar6,param_2,param_3);
  *(int **)(puVar5 + -0x26) = piVar6;
  *(uint *)(puVar5 + -0x28) = *(uint *)(puVar5 + -0x28) | 0x10;
  func_0016773C((int)piVar6,0x1b);
  iVar3 = DAT_00480160;
  local_34 = s_ChangeState_00480154;
  local_38 = DAT_00480160;
  func_00166C20(piVar6,0,&local_38,0);
  local_34 = s_SetState_00480164;
  local_38 = iVar3;
  func_00166C20(piVar6,1,&local_38,0);
  local_34 = s_InWait_00480170;
  local_38 = iVar3;
  func_00166C20(piVar6,2,&local_38,0);
  local_34 = &DAT_00480178;
  local_38 = iVar3;
  func_00166C20(piVar6,3,&local_38,0);
  local_34 = s_OutWait_00480180;
  local_38 = iVar3;
  func_00166C20(piVar6,4,&local_38,0);
  local_34 = s_Number_00480188;
  iVar8 = 0;
  local_38 = iVar3;
  func_00166C20(piVar6,5,&local_38,0);
  local_64 = local_5c;
  uStack_60 = 0x20;
  uVar9 = 0;
  uStack_3d = 0;
  local_5c[0] = 0;
  local_68 = DAT_00480190;
  do {
    func_004994B0((int)&local_68,s_G_Heart__02d_00480194,uVar9,iVar8);
    local_2c = s_Heart_004801a4;
    local_30 = iVar3;
    (**(code **)(local_68 + 8))(&local_68);
    iVar8 = func_003FDF90(*(int *)(*piVar6 + 0x14),(int)local_64);
    func_00166C20(piVar6,uVar9 + 6,&local_30,iVar8);
    puVar7 = puVar5;
    if (uVar9 < 0x14) {
      puVar7 = puVar5 + uVar9 * 6;
    }
    sVar1 = (short)uVar9;
    *(int **)(puVar7 + 4) = piVar6;
    uVar9 = uVar9 + 1;
    *puVar7 = 5;
    puVar7[1] = sVar1 + 6;
  } while ((int)uVar9 < 0x14);
  local_34 = s_HardMode_004801ac;
  local_38 = iVar3;
  func_00166C20(piVar6,0x1a,&local_38,0);
  *(int **)(puVar5 + -0x1a) = piVar6;
  puVar5[-0x1d] = 0;
  puVar5[-0x1e] = 0;
  *(int **)(puVar5 + -0x14) = piVar6;
  puVar5[-0x17] = 1;
  puVar5[-0x18] = 0;
  *(int **)(puVar5 + -8) = piVar6;
  puVar5[-0xb] = 3;
  puVar5[-0xc] = 0;
  *(int **)(puVar5 + -0xe) = piVar6;
  puVar5[-0x11] = 5;
  puVar5[-0x12] = 5;
  *(int **)(puVar5 + -0x20) = piVar6;
  puVar5[-0x23] = 0x1a;
  puVar5[-0x24] = 0;
  func_002313DC((int)(puVar5 + -0x24));
  return puVar5 + -0x34;
}

