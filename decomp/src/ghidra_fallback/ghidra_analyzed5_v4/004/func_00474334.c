#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_001673D0(int *param_1,int *param_2,int param_3,undefined4 param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168434(undefined4 *param_1);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00474474;
extern int DAT_00474478;
extern int *DAT_0047447c;
extern undefined DAT_00474480;
extern int DAT_00474484;
extern undefined DAT_00474488;
extern undefined DAT_0047448c;
extern int *DAT_00474494;
extern int *DAT_00474498;

// USA 00474334 <- EU 0047430C (Ghidra, non-matching)
// GLOBAL DAT_00474474 int
// GLOBAL DAT_00474478 int
// GLOBAL DAT_0047447c int *
// GLOBAL DAT_00474480 undefined
// GLOBAL DAT_00474484 int
// GLOBAL DAT_00474488 undefined
// GLOBAL DAT_0047448c undefined
// GLOBAL DAT_00474494 int *
// GLOBAL DAT_00474498 int *

int * func_00474334(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  piVar3 = func_004B9A10(param_1,1);
  iVar2 = DAT_00474478;
  iVar1 = DAT_00474474;
  piVar3[0xe] = DAT_00474474 + 0x54;
  *piVar3 = iVar1;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  *(undefined2 *)((int)piVar3 + 0x76) = 0xffff;
  piVar3[0x1e] = iVar2;
  piVar3[0x1f] = 0;
  piVar3[0x21] = 0x78;
  piVar3[0x20] = 0;
  piVar3[0x22] = 0x78;
  *(undefined2 *)(piVar3 + 0x23) = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x74);
  piVar5 = (int *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    piVar5 = func_00168434(puVar4);
  }
  piVar6 = DAT_0047447c;
  piVar3[7] = (int)piVar5;
  func_001673D0(piVar5,piVar6,0,in_r3);
  piVar5 = (int *)piVar3[7];
  func_0016773C((int)piVar5,3);
  iVar1 = DAT_00474484;
  local_1c = &DAT_00474480;
  local_20 = DAT_00474484;
  func_00166C20(piVar5,0,&local_20,0);
  local_1c = &DAT_00474488;
  local_20 = iVar1;
  func_00166C20(piVar5,1,&local_20,0);
  local_1c = &DAT_0047448c;
  local_20 = iVar1;
  func_00166C20(piVar5,2,&local_20,0);
  piVar3[10] = (int)piVar5;
  *(undefined2 *)((int)piVar3 + 0x22) = 0;
  *(undefined2 *)(piVar3 + 8) = 0;
  piVar3[0xd] = (int)piVar5;
  *(undefined2 *)((int)piVar3 + 0x2e) = 1;
  *(undefined2 *)(piVar3 + 0xb) = 0;
  piVar3[0x1f] = (int)piVar5;
  *(undefined2 *)((int)piVar3 + 0x76) = 2;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  piVar6 = (int *)func_005229AC((int *)piVar3[7],DAT_00474494);
  piVar5 = DAT_00474498;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar5) goto LAB_00474464;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_00474464:
  piVar3[0x20] = (int)piVar6;
  return piVar3;
}

