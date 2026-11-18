#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_00587FCC(int param_1,int *param_2);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int DAT_0034c41c;
extern int DAT_0034c420;
extern int DAT_0034c424;
extern undefined DAT_0034c428;
extern int *DAT_0034c42c;
extern char s__QUICK_0034c430[];
extern char s__s_DOWN_0034c444[];
extern char s__s_DOWN_FIN_0034c44c[];
extern char s__s_UP_FIN_0034c438[];
extern char s_cf_0034c438[];
extern char s_cf_0034c444[];
extern char s_cf_0034c44c[];

// USA 0034C200 <- EU 0034C1DC (Ghidra, non-matching)
// GLOBAL DAT_0034c41c int
// GLOBAL DAT_0034c420 int
// GLOBAL DAT_0034c424 int
// GLOBAL DAT_0034c428 undefined
// GLOBAL DAT_0034c42c int *
// GLOBAL s_cf_0034c444 string
// GLOBAL s_cf_0034c44c string
// GLOBAL s_cf_0034c438 string
// GLOBAL s__QUICK_0034c430 string

void func_0034C200(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(uint * *)(albw_frame + 0xc))
  #define local_50 (*(int *)(albw_frame + 0x10))
  #define local_4c ((uint *)(albw_frame + 0x14))
  #define uStack_2d (*(undefined1 *)(albw_frame + 0x33))
  #define local_28 (*(int *)(albw_frame + 0x38))
  #define local_24 (*(char * *)(albw_frame + 0x3c))
  iVar1 = DAT_0034c41c;
  local_50 = 0x20;
  uStack_2d = 0;
  local_58 = DAT_0034c420;
  local_54 = local_4c;
  (**(code **)(*param_2 + 8))(param_2);
  uVar5 = 0;
  do {
    if (*(char *)(param_2[1] + uVar5) == '\0') {
      if ((int)uVar5 < 0x40001) goto LAB_0034c258;
      break;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x40001);
  uVar5 = 0;
LAB_0034c258:
  if (local_50 <= (int)uVar5) {
    uVar5 = local_50 - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(local_4c,(uint *)param_2[1],uVar5);
  local_58 = DAT_0034c424;
  *(undefined1 *)((int)local_4c + uVar5) = 0;
  local_24 = &DAT_0034c428;
  local_28 = iVar1;
  func_00689928(&local_58,&local_28,0xffffffff);
  piVar2 = DAT_0034c42c;
  uVar3 = func_00587FCC(*DAT_0034c42c,&local_58);
  **(undefined4 **)(param_1 + 0x54) = uVar3;
  local_24 = s__QUICK_0034c430;
  local_28 = iVar1;
  func_00689928(&local_58,&local_28,0xffffffff);
  uVar3 = func_00587FCC(*piVar2,&local_58);
  puVar4 = *(undefined4 **)(param_1 + 0x54);
  if (1 < *(uint *)(param_1 + 0x50)) {
    puVar4 = puVar4 + 1;
  }
  *puVar4 = uVar3;
  (**(code **)(*param_2 + 8))(param_2);
  func_004994B0((int)&local_58,s__s_UP_FIN_0034c438,param_2[1],param_4);
  uVar3 = func_00587FCC(*piVar2,&local_58);
  puVar4 = *(undefined4 **)(param_1 + 0x54);
  if (2 < *(uint *)(param_1 + 0x50)) {
    puVar4 = puVar4 + 2;
  }
  *puVar4 = uVar3;
  (**(code **)(*param_2 + 8))(param_2);
  func_004994B0((int)&local_58,s__s_DOWN_0034c444,param_2[1],param_4);
  uVar3 = func_00587FCC(*piVar2,&local_58);
  puVar4 = *(undefined4 **)(param_1 + 0x54);
  if (3 < *(uint *)(param_1 + 0x50)) {
    puVar4 = puVar4 + 3;
  }
  *puVar4 = uVar3;
  local_24 = s__QUICK_0034c430;
  local_28 = iVar1;
  func_00689928(&local_58,&local_28,0xffffffff);
  uVar3 = func_00587FCC(*piVar2,&local_58);
  puVar4 = *(undefined4 **)(param_1 + 0x54);
  if (4 < *(uint *)(param_1 + 0x50)) {
    puVar4 = puVar4 + 4;
  }
  *puVar4 = uVar3;
  (**(code **)(*param_2 + 8))(param_2);
  func_004994B0((int)&local_58,s__s_DOWN_FIN_0034c44c,param_2[1],param_4);
  uVar3 = func_00587FCC(*piVar2,&local_58);
  puVar4 = *(undefined4 **)(param_1 + 0x54);
  if (5 < *(uint *)(param_1 + 0x50)) {
    puVar4 = puVar4 + 5;
  }
  *puVar4 = uVar3;
  return;
}

