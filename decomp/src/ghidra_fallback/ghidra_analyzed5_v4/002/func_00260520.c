#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_00587FCC(int param_1,int *param_2);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int DAT_00260704;
extern int DAT_00260708;
extern int DAT_0026070c;
extern undefined DAT_00260710;
extern int *DAT_00260714;
extern undefined DAT_00260718;
extern char s__s_DOWN_00260720[];
extern char s_cf_00260720[];

// USA 00260520 <- EU 00260548 (Ghidra, non-matching)
// GLOBAL DAT_00260704 int
// GLOBAL DAT_00260708 int
// GLOBAL DAT_0026070c int
// GLOBAL DAT_00260710 undefined
// GLOBAL DAT_00260714 int *
// GLOBAL DAT_00260718 undefined
// GLOBAL s_cf_00260720 string

void func_00260520(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

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
  #define local_24 (*(undefined * *)(albw_frame + 0x3c))
  iVar1 = DAT_00260704;
  local_50 = 0x20;
  uStack_2d = 0;
  local_58 = DAT_00260708;
  local_54 = local_4c;
  (**(code **)(*param_2 + 8))(param_2);
  uVar5 = 0;
  do {
    if (*(char *)(param_2[1] + uVar5) == '\0') {
      if ((int)uVar5 < 0x40001) goto LAB_002605c4;
      break;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x40001);
  uVar5 = 0;
LAB_002605c4:
  if (local_50 <= (int)uVar5) {
    uVar5 = local_50 - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(local_4c,(uint *)param_2[1],uVar5);
  local_58 = DAT_0026070c;
  *(undefined1 *)((int)local_4c + uVar5) = 0;
  local_24 = &DAT_00260710;
  local_28 = iVar1;
  func_00689928(&local_58,&local_28,0xffffffff);
  piVar2 = DAT_00260714;
  uVar3 = func_00587FCC(*DAT_00260714,&local_58);
  **(undefined4 **)(param_1 + 0x40) = uVar3;
  local_24 = &DAT_00260718;
  local_28 = iVar1;
  func_00689928(&local_58,&local_28,0xffffffff);
  uVar3 = func_00587FCC(*piVar2,&local_58);
  puVar4 = *(undefined4 **)(param_1 + 0x40);
  if (1 < *(uint *)(param_1 + 0x3c)) {
    puVar4 = puVar4 + 1;
  }
  *puVar4 = uVar3;
  (**(code **)(*param_2 + 8))(param_2);
  func_004994B0((int)&local_58,s__s_DOWN_00260720,param_2[1],param_4);
  uVar3 = func_00587FCC(*piVar2,&local_58);
  puVar4 = *(undefined4 **)(param_1 + 0x40);
  if (2 < *(uint *)(param_1 + 0x3c)) {
    puVar4 = puVar4 + 2;
  }
  *puVar4 = uVar3;
  local_24 = &DAT_00260718;
  local_28 = iVar1;
  func_00689928(&local_58,&local_28,0xffffffff);
  uVar3 = func_00587FCC(*piVar2,&local_58);
  puVar4 = *(undefined4 **)(param_1 + 0x40);
  if (3 < *(uint *)(param_1 + 0x3c)) {
    puVar4 = puVar4 + 3;
  }
  *puVar4 = uVar3;
  return;
}

