#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00462db4;
extern int DAT_00462db8;
extern undefined4 DAT_00462dbc;
extern undefined DAT_00462dc0;
extern int DAT_00462dc4;
extern undefined DAT_00462dc8;
extern int *DAT_00462dd8;
extern char s_P_Wipe_00_00462dcc[];

// USA 00462CB0 <- EU 00462C88 (Ghidra, non-matching)
// GLOBAL DAT_00462db4 int
// GLOBAL DAT_00462db8 int
// GLOBAL DAT_00462dbc undefined4
// GLOBAL DAT_00462dc0 undefined
// GLOBAL DAT_00462dc4 int
// GLOBAL DAT_00462dc8 undefined
// GLOBAL DAT_00462dd8 int *
// GLOBAL s_P_Wipe_00_00462dcc string

int * func_00462CB0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar4 = func_004B9A10(param_1,3);
  iVar2 = DAT_00462db8;
  iVar1 = DAT_00462db4;
  iVar7 = DAT_00462db4 + -0x54;
  piVar4[0xe] = DAT_00462db4;
  *piVar4 = iVar7;
  piVar4[0x1d] = iVar2;
  piVar4[0x1e] = iVar2;
  piVar4[0x1f] = iVar2;
  *(undefined1 *)(piVar4 + 0x20) = 0;
  uVar3 = DAT_00462dbc;
  *(undefined1 *)((int)piVar4 + 0x81) = 0;
  *(undefined1 *)((int)piVar4 + 0x82) = 1;
  (**(code **)(iVar1 + -0x1c))(piVar4,uVar3,0);
  piVar8 = (int *)piVar4[7];
  func_0016773C((int)piVar8,2);
  iVar1 = DAT_00462dc4;
  local_1c = &DAT_00462dc0;
  local_20 = DAT_00462dc4;
  func_00166C20(piVar8,0,&local_20,0);
  local_1c = &DAT_00462dc8;
  local_20 = iVar1;
  func_00166C20(piVar8,1,&local_20,0);
  piVar4[10] = (int)piVar8;
  *(undefined2 *)((int)piVar4 + 0x22) = 0;
  *(undefined2 *)(piVar4 + 8) = 0;
  piVar4[0xd] = (int)piVar8;
  *(undefined2 *)((int)piVar4 + 0x2e) = 1;
  *(undefined2 *)(piVar4 + 0xb) = 0;
  *(undefined1 *)((int)piVar4 + 0xf) = 1;
  local_1c = s_P_Wipe_00_00462dcc;
  local_20 = iVar1;
  piVar5 = (int *)func_005229AC((int *)piVar4[7],&local_20);
  piVar8 = DAT_00462dd8;
  if (piVar5 != (int *)0x0) {
    piVar6 = (int *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (piVar6 == piVar8) goto LAB_00462da4;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_00462da4:
  piVar4[0x25] = (int)piVar5;
  return piVar4;
}

