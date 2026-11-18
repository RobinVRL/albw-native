#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00475de0;
extern undefined4 DAT_00475de4;
extern undefined DAT_00475de8;
extern int DAT_00475dec;
extern undefined DAT_00475df0;
extern int *DAT_00475df4;
extern int *DAT_00475df8;

// USA 00475CC4 <- EU 00475C9C (Ghidra, non-matching)
// GLOBAL DAT_00475de0 int
// GLOBAL DAT_00475de4 undefined4
// GLOBAL DAT_00475de8 undefined
// GLOBAL DAT_00475dec int
// GLOBAL DAT_00475df0 undefined
// GLOBAL DAT_00475df4 int *
// GLOBAL DAT_00475df8 int *

int * func_00475CC4(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  piVar1 = func_004B9A10(param_1,0);
  iVar2 = DAT_00475de0 + 0x54;
  *piVar1 = DAT_00475de0;
  piVar1[0xe] = iVar2;
  piVar1[0x1d] = 0;
  puVar3 = (undefined4 *)func_0010BAB4(0x78);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_0017A520(puVar3,0x400,(int *)0x0,0);
  }
  piVar1[0x1e] = (int)puVar4;
  (**(code **)(*piVar1 + 0x38))(piVar1,DAT_00475de4,0);
  piVar7 = (int *)piVar1[7];
  func_0016773C((int)piVar7,2);
  iVar2 = DAT_00475dec;
  local_1c = &DAT_00475de8;
  local_20 = DAT_00475dec;
  func_00166C20(piVar7,0,&local_20,0);
  local_1c = &DAT_00475df0;
  local_20 = iVar2;
  func_00166C20(piVar7,1,&local_20,0);
  piVar1[10] = (int)piVar7;
  *(undefined2 *)((int)piVar1 + 0x22) = 0;
  *(undefined2 *)(piVar1 + 8) = 0;
  piVar1[0xd] = (int)piVar7;
  *(undefined2 *)((int)piVar1 + 0x2e) = 1;
  *(undefined2 *)(piVar1 + 0xb) = 0;
  piVar5 = (int *)func_005229AC((int *)piVar1[7],DAT_00475df4);
  piVar7 = DAT_00475df8;
  if (piVar5 != (int *)0x0) {
    piVar6 = (int *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (piVar6 == piVar7) goto LAB_00475db8;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_00475db8:
  piVar1[0x1d] = (int)piVar5;
  if (piVar5 != (int *)0x0) {
    puVar4 = (undefined4 *)piVar1[0x1e];
    *puVar4 = piVar5 + 0x45;
    piVar5[0x4a] = (int)puVar4;
  }
  return piVar1;
}

