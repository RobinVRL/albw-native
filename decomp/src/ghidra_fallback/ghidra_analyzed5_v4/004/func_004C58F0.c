#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0019B04C(uint param_1);
extern int func_001E1228(int param_1,int param_2,int *param_3);
extern int func_00325004(int *param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_004A0038(int param_1,int param_2,int param_3,uint param_4,int *param_5,int param_6);
extern uint DAT_004c5a60;
extern undefined DAT_004c5a84;
extern undefined4 DAT_004c5a9c;
extern int *DAT_004c5ac4;
extern char s_ActorUnitHeap_004c5a74[];
extern char s_Archive_ActorProfile_szs_004c5aa8[];
extern char s_PlayerUnitHeap_004c5a50[];
extern char s_SmallUnitHeap_004c5a64[];
extern char s_World_004c5aa0[];
extern char s_cf_004c5aa8[];

// USA 004C58F0 <- EU 004C58C8 (Ghidra, non-matching)
// GLOBAL DAT_004c5a60 uint
// GLOBAL DAT_004c5a84 undefined
// GLOBAL DAT_004c5a9c undefined4
// GLOBAL DAT_004c5ac4 int *
// GLOBAL s_ActorUnitHeap_004c5a74 string
// GLOBAL s_cf_004c5aa8 string
// GLOBAL s_PlayerUnitHeap_004c5a50 string
// GLOBAL s_SmallUnitHeap_004c5a64 string
// GLOBAL s_World_004c5aa0 string

/* WARNING: Variable defined which should be unmapped: objStack_6c */

undefined4 func_004C58F0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char **ppcVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_6c ((uint *)(albw_frame + 0x4))
  #define local_68 (*(char * *)(albw_frame + 0x8))
  #define piStack_64 (*(int * *)(albw_frame + 0xc))
  #define local_60 (*(int * *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(uint *)(albw_frame + 0x30))
  #define local_3c (*(char * *)(albw_frame + 0x34))
  #define local_38 (*(undefined1 *)(albw_frame + 0x38))
  #define local_37 (*(undefined1 *)(albw_frame + 0x39))
  #define local_36 (*(undefined1 *)(albw_frame + 0x3a))
  #define local_35 (*(undefined1 *)(albw_frame + 0x3b))
  #define local_34 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_28 (*(uint *)(albw_frame + 0x48))
  #define local_24 (*(char * *)(albw_frame + 0x4c))
  #define local_20 (*(uint *)(albw_frame + 0x50))
  #define local_1c (*(undefined * *)(albw_frame + 0x54))
  uVar5 = DAT_004c5a60;
  local_24 = s_PlayerUnitHeap_004c5a50;
  local_28 = DAT_004c5a60;
  objStack_6c[0] = 0;
  piVar1 = func_004A0038(0x24000,1,(int)&local_28,4,param_2,0);
  *(int **)(param_1 + 0x14) = piVar1;
  local_24 = s_SmallUnitHeap_004c5a64;
  local_28 = uVar5;
  objStack_6c[0] = 0;
  piVar1 = func_004A0038(0x1800,0x78,(int)&local_28,4,param_2,0);
  *(int **)(param_1 + 0x20) = piVar1;
  local_24 = s_ActorUnitHeap_004c5a74;
  local_28 = uVar5;
  objStack_6c[0] = 0;
  piVar1 = func_004A0038(0x8000,0xd8,(int)&local_28,4,param_2,0);
  *(int **)(param_1 + 0x24) = piVar1;
  local_1c = &DAT_004c5a84;
  local_20 = uVar5;
  piVar1 = func_0010B954(0,(int)&local_20,param_2,1,0);
  objStack_6c[0] = uVar5;
  local_5c = 0x20;
  uStack_58 = 0;
  local_50 = 0;
  local_3c = s_World_004c5aa0;
  local_4c = 0;
  local_38 = 7;
  local_37 = 4;
  local_36 = 0;
  local_48 = 0;
  local_35 = 1;
  ppcVar4 = &local_68;
  local_54 = 0;
  local_34 = 1;
  local_40 = uVar5;
  local_44 = 0;
  local_68 = s_Archive_ActorProfile_szs_004c5aa8;
  piStack_64 = piVar1;
  local_60 = piVar1;
  puVar2 = func_001E1228(*DAT_004c5ac4,(int)objStack_6c,(int *)0x0);
  uVar5 = 0;
  do {
    iVar3 = func_0019B04C(uVar5);
    if (iVar3 != 0) {
      func_00325004((int *)(iVar3 + 0x18),(int)puVar2,piVar1,ppcVar4);
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x280);
  return (**(code **)(*piVar1 + 0x10))(piVar1);
}

