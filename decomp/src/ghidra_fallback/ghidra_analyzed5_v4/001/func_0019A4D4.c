#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014F0F8(int *param_1,int *param_2,undefined1 *param_3);
extern int func_0019A020(int param_1,int *param_2,int param_3,uint *param_4);
extern int func_001DF8F8(int param_1,int *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588154(int param_1,uint param_2);
extern int *DAT_0019a68c;
extern int DAT_0019a690;
extern int DAT_0019a694;
extern int DAT_0019a698;
extern int *DAT_0019a69c;
extern uint *DAT_0019a6a0;
extern undefined4 *DAT_0019a6a4;
extern undefined4 DAT_0019a6a8;

// USA 0019A4D4 <- EU 0019A4D4 (Ghidra, non-matching)
// GLOBAL DAT_0019a68c int *
// GLOBAL DAT_0019a690 int
// GLOBAL DAT_0019a694 int
// GLOBAL DAT_0019a698 int
// GLOBAL DAT_0019a69c int *
// GLOBAL DAT_0019a6a0 uint *
// GLOBAL DAT_0019a6a4 undefined4 *
// GLOBAL DAT_0019a6a8 undefined4

undefined4 func_0019A4D4(int param_1,int param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(int *)(albw_frame + 0x8))
  #define local_a4 (*(uint * *)(albw_frame + 0xc))
  #define local_a0 (*(int *)(albw_frame + 0x10))
  #define local_9c ((uint *)(albw_frame + 0x14))
  #define uStack_5d (*(undefined1 *)(albw_frame + 0x53))
  #define local_58 (*(int *)(albw_frame + 0x58))
  #define local_54 (*(uint * *)(albw_frame + 0x5c))
  #define local_48 (*(int *)(albw_frame + 0x68))
  #define local_44 (*(uint * *)(albw_frame + 0x6c))
  #define local_40 ((char *)(albw_frame + 0x70))
  #define iStack_34 (*(int *)(albw_frame + 0x7c))
  #define iStack_30 (*(int *)(albw_frame + 0x80))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x84))
  #define local_28 (*(uint * *)(albw_frame + 0x88))
  iStack_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  puVar2 = (uint *)func_00588154(*DAT_0019a68c,param_3);
  iVar1 = DAT_0019a690;
  local_48 = DAT_0019a690;
  local_a0 = 0x40;
  uStack_5d = 0;
  local_a8 = DAT_0019a694;
  local_a4 = local_9c;
  local_44 = puVar2;
  (**(code **)(DAT_0019a690 + 8))(&local_48);
  uVar6 = 0;
  do {
    if (*(char *)((int)local_44 + uVar6) == '\0') {
      if ((int)uVar6 < 0x40001) goto LAB_0019a56c;
      break;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x40001);
  uVar6 = 0;
LAB_0019a56c:
  if (local_a0 <= (int)uVar6) {
    uVar6 = local_a0 - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(local_9c,local_44,uVar6);
  local_a8 = DAT_0019a698;
  *(undefined1 *)((int)local_9c + uVar6) = 0;
  piVar3 = (int *)func_0052FBA0(*DAT_0019a69c + 0x3dbbc,*(uint *)(param_1 + 0x38));
  if (((*DAT_0019a6a0 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0019a6a0), iVar4 != 0)) {
    *DAT_0019a6a4 = DAT_0019a6a8;
  }
  if ((piVar3 == (int *)0x0) || (iVar4 = (**(code **)*piVar3)(piVar3,DAT_0019a6a4), iVar4 == 0)) {
    piVar3 = (int *)0x0;
  }
  local_40[0] = '\0';
  if ((piVar3 != (int *)0x0) && (iVar4 = func_0014F0F8(piVar3,&local_a8,local_40), iVar4 == 0)) {
    return 0;
  }
  piVar3 = func_0019A020(param_1,&local_a8,param_2,local_28);
  uVar5 = 0;
  if (piVar3 != (int *)0x0) {
    if (local_40[0] != '\0') {
      local_58 = iVar1;
      local_54 = puVar2;
      func_001DF8F8((int)piVar3,&local_58);
    }
    uVar5 = 1;
  }
  return uVar5;
}

