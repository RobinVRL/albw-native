/* compilefix: func_0051C63C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/005/func_0051C63C.c): 1 runtime type check(s) given
 * back their type-descriptor argument r1 (tools/rtti_arg_fix.py, BOOT_LOG 159). */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0012C790(int param_1);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0029E18C(int param_1,uint param_2);
extern int func_00369EBC(int param_1,int param_2);
extern int func_0043D33C(int param_1);
extern int func_004867F8(int param_1,uint param_2);
extern int func_00488C14(int param_1,uint param_2);
extern uint *DAT_0051c810;
extern undefined4 DAT_0051c814;
extern undefined4 *DAT_0051c818;
extern uint *DAT_0051c81c;
extern undefined4 *DAT_0051c820;

// USA 0051C63C <- EU 0051C614 (Ghidra, non-matching)
// GLOBAL DAT_0051c810 uint *
// GLOBAL DAT_0051c814 undefined4
// GLOBAL DAT_0051c818 undefined4 *
// GLOBAL DAT_0051c81c uint *
// GLOBAL DAT_0051c820 undefined4 *

undefined4 func_0051C63C(int param_1,uint param_2,undefined *param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + 0xd);
    bVar6 = cVar1 == '\0';
    if (bVar6) {
      cVar1 = *(char *)(iVar3 + 0xe);
    }
    if (!bVar6 || cVar1 != '\0') {
      func_0012C790(iVar3);
      func_001B6B38(*(int **)(param_1 + 0x54),extraout_r1,param_3,param_4);
    }
  }
  if (param_2 < 9) {
    if (*(short *)(param_1 + 0x58) != 1) {
      func_0029E18C(param_1 + 0x48,1);
    }
  }
  else if (*(short *)(param_1 + 0x58) != 0) {
    func_0029E18C(param_1 + 0x48,0);
  }
  uVar2 = DAT_0051c814;
  puVar5 = *(undefined4 **)(param_1 + 0x54);
  if (puVar5 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puVar5 + 0xd);
    bVar6 = cVar1 == '\0';
    if (bVar6) {
      cVar1 = *(char *)((int)puVar5 + 0xe);
    }
    if (!bVar6 || cVar1 != '\0') goto LAB_0051c7b4;
  }
  if (((*DAT_0051c810 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0051c810), iVar3 != 0)) {
    *DAT_0051c818 = uVar2;
  }
  if ((puVar5 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar5)(puVar5,DAT_0051c818), iVar3 == 0)) {
    puVar5 = (undefined4 *)0x0;
  }
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_1 + 0x54);
    if (((*DAT_0051c81c & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0051c81c), iVar3 != 0)) {
      *DAT_0051c820 = uVar2;
    }
    if ((puVar5 == (undefined4 *)0x0) || (iVar3 = (**(code **)*puVar5)(puVar5,DAT_0051c820), iVar3 == 0)) {   /* type descriptor restored (rtti_arg_fix) */
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      iVar3 = func_00488C14((int)puVar5,param_2);
      if (iVar3 == 0) {
        return 0;
      }
      *(undefined1 *)((int)puVar5 + 0xe) = 1;
    }
  }
  else {
    iVar3 = func_004867F8((int)puVar5,param_2);
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x54) + 0xe) = 1;
  }
LAB_0051c7b4:
  if (param_2 == 0xc) {
    iVar3 = *(int *)(param_1 + 0x130);
    iVar4 = 0;
  }
  else if (param_2 == 0xd) {
    iVar3 = *(int *)(param_1 + 0x130);
    iVar4 = 2;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x130);
    if (param_2 == 0xe) {
      iVar4 = 1;
    }
    else {
      iVar4 = 3;
    }
  }
  func_00369EBC(iVar3,iVar4);
  *(ushort *)(param_1 + 0x33e) = *(ushort *)(param_1 + 0x33e) & 64999;
  if (*(int *)(param_1 + 0x80) == 0) {
    return 0;
  }
  return func_0043D33C(*(int *)(param_1 + 0x80));
}

