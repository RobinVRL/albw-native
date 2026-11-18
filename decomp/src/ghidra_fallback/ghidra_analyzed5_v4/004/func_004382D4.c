#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00438528;
extern int DAT_0043852c;
extern undefined1 *DAT_00438530;
extern undefined4 DAT_00438534;
extern undefined DAT_00438538;
extern int DAT_0043853c;
extern undefined DAT_00438548;
extern undefined DAT_00438550;
extern int *DAT_00438554;
extern int *DAT_00438558;
extern int *DAT_0043855c;
extern char s_Change_00438540[];

// USA 004382D4 <- EU 004382B4 (Ghidra, non-matching)
// GLOBAL DAT_00438528 int
// GLOBAL DAT_0043852c int
// GLOBAL DAT_00438530 undefined1 *
// GLOBAL DAT_00438534 undefined4
// GLOBAL DAT_00438538 undefined
// GLOBAL DAT_0043853c int
// GLOBAL DAT_00438548 undefined
// GLOBAL DAT_00438550 undefined
// GLOBAL DAT_00438554 int *
// GLOBAL DAT_00438558 int *
// GLOBAL DAT_0043855c int *
// GLOBAL s_Change_00438540 string

int * func_004382D4(undefined4 *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar2 = func_004B9A10(param_1,3);
  iVar3 = DAT_00438528 + 0x54;
  *piVar2 = DAT_00438528;
  piVar2[0xe] = iVar3;
  iVar3 = DAT_0043852c;
  *(undefined2 *)(piVar2 + 0x1d) = 0;
  *(undefined2 *)((int)piVar2 + 0x76) = 0xffff;
  piVar2[0x1e] = iVar3;
  piVar2[0x1f] = 0;
  *(undefined2 *)(piVar2 + 0x20) = 0;
  *(undefined2 *)((int)piVar2 + 0x82) = 0xffff;
  piVar2[0x21] = iVar3;
  piVar2[0x22] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x78);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0017A520(puVar4,0x400,(int *)0x0,0);
  }
  piVar2[0x23] = (int)puVar5;
  puVar4 = (undefined4 *)func_0010BAB4(0x78);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0017A520(puVar4,0x400,(int *)0x0,0);
  }
  puVar1 = DAT_00438530;
  piVar2[0x24] = (int)puVar5;
  piVar2[0x25] = 0;
  piVar2[0x26] = 0;
  *puVar1 = 1;
  (**(code **)(*piVar2 + 0x38))(piVar2,DAT_00438534,0);
  piVar8 = (int *)piVar2[7];
  func_0016773C((int)piVar8,4);
  iVar3 = DAT_0043853c;
  local_24 = &DAT_00438538;
  local_28 = DAT_0043853c;
  func_00166C20(piVar8,0,&local_28,0);
  local_24 = s_Change_00438540;
  local_28 = iVar3;
  func_00166C20(piVar8,1,&local_28,0);
  local_24 = &DAT_00438548;
  local_28 = iVar3;
  func_00166C20(piVar8,2,&local_28,0);
  local_24 = &DAT_00438550;
  local_28 = iVar3;
  func_00166C20(piVar8,3,&local_28,0);
  piVar2[10] = (int)piVar8;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0x22] = (int)piVar8;
  *(undefined2 *)((int)piVar2 + 0x82) = 1;
  *(undefined2 *)(piVar2 + 0x20) = 0;
  piVar2[0x1f] = (int)piVar8;
  *(undefined2 *)((int)piVar2 + 0x76) = 2;
  *(undefined2 *)(piVar2 + 0x1d) = 5;
  piVar2[0xd] = (int)piVar8;
  *(undefined2 *)((int)piVar2 + 0x2e) = 3;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  piVar8 = DAT_00438554;
  piVar2[6] = piVar2[6] | 0x40;
  piVar6 = (int *)func_005229AC((int *)piVar2[7],piVar8);
  piVar8 = DAT_00438558;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar8) goto LAB_004384a0;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_004384a0:
  piVar2[0x25] = (int)piVar6;
  piVar6 = (int *)func_005229AC((int *)piVar2[7],DAT_0043855c);
  piVar8 = DAT_00438558;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar8) goto LAB_004384e4;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_004384e4:
  piVar2[0x26] = (int)piVar6;
  iVar3 = piVar2[0x25];
  piVar8 = (int *)piVar2[0x23];
  *piVar8 = iVar3 + 0x114;
  *(int **)(iVar3 + 0x128) = piVar8;
  iVar3 = piVar2[0x26];
  piVar8 = (int *)piVar2[0x24];
  *piVar8 = iVar3 + 0x114;
  *(int **)(iVar3 + 0x128) = piVar8;
  *(undefined1 *)((int)piVar2 + 0xf) = 0x42;
  *puVar1 = 0;
  return piVar2;
}

