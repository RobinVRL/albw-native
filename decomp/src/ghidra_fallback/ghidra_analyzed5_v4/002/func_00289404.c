#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_006615C4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00289650;
extern int DAT_00289654;
extern int *DAT_00289658;
extern uint *DAT_0028965c;
extern undefined4 *DAT_00289660;
extern undefined4 DAT_00289664;
extern char s_SE_OctorokRock_BREAK_00289668[];

// USA 00289404 <- EU 0028942C (Ghidra, non-matching)
// GLOBAL DAT_00289650 int *
// GLOBAL DAT_00289654 int
// GLOBAL DAT_00289658 int *
// GLOBAL DAT_0028965c uint *
// GLOBAL DAT_00289660 undefined4 *
// GLOBAL DAT_00289664 undefined4
// GLOBAL s_SE_OctorokRock_BREAK_00289668 string

undefined4 func_00289404(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_00289650;
  if (*(uint *)(param_2 + 0x28) == param_1[0x14]) {
    return 0;
  }
  puVar3 = (undefined4 *)func_0052FBA0(*DAT_00289650 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  iVar2 = DAT_00289654;
  if (puVar3 == (undefined4 *)0x0) {
    return 1;
  }
  if (param_1[0x14] == puVar3[0x14]) {
    return 1;
  }
  if ((puVar3[0xb4] != 0) && (*(int *)(puVar3[0xb4] + 8) == *DAT_00289658)) {
    if (((*DAT_0028965c & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0028965c), iVar4 != 0)) {
      *DAT_00289660 = DAT_00289664;
    }
    iVar4 = (**(code **)*puVar3)(puVar3,DAT_00289660);
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3 != (undefined4 *)0x0) {
      iVar4 = func_0052FBA0(*piVar1 + 0x3dbbc,puVar3[0x14]);
      if (iVar4 == 0) {
        *(undefined1 *)((int)puVar3 + 0x2d7) = 1;
      }
      else {
        func_006615C4(puVar3 + 0x103,1);
      }
      (**(code **)(puVar3[200] + 0x30))(puVar3 + 200);
      local_24 = s_SE_OctorokRock_BREAK_00289668;
      local_28 = iVar2;
      func_00150A84(param_1,&local_28,0);
      iVar4 = func_0052FBA0(*piVar1 + 0x3dbbc,param_1[0x14]);
      goto joined_r0x00289624;
    }
  }
  iVar4 = *(int *)(param_2 + 0x34);
  if (iVar4 == 0) {
    return 1;
  }
  if (*(short *)(iVar4 + 10) == 4) {
    iVar4 = func_0052FBA0(*piVar1 + 0x3dbbc,param_1[0x14]);
  }
  else {
    if ((*(ushort *)(iVar4 + 4) & 0xff) != 2) {
      return 1;
    }
    iVar4 = func_0052FBA0(*piVar1 + 0x3dbbc,param_1[0x14]);
  }
joined_r0x00289624:
  if (iVar4 == 0) {
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  }
  else {
    func_006615C4(param_1 + 0x103,1);
  }
  (**(code **)(param_1[200] + 0x30))(param_1 + 200);
  local_24 = s_SE_OctorokRock_BREAK_00289668;
  local_28 = iVar2;
  func_00150A84(param_1,&local_28,0);
  return 1;
}

