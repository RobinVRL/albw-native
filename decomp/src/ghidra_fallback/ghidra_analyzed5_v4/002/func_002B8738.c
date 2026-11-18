#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004C6654(int param_1,uint param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568E8(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00556EAC(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_002b89b0;
extern int *DAT_002b89b4;
extern int *DAT_002b89b8;
extern uint *DAT_002b89bc;
extern undefined4 *DAT_002b89c0;
extern undefined4 DAT_002b89c4;
extern int *DAT_002b89c8;

// USA 002B8738 <- EU 002B8714 (Ghidra, non-matching)
// GLOBAL DAT_002b89b0 int *
// GLOBAL DAT_002b89b4 int *
// GLOBAL DAT_002b89b8 int *
// GLOBAL DAT_002b89bc uint *
// GLOBAL DAT_002b89c0 undefined4 *
// GLOBAL DAT_002b89c4 undefined4
// GLOBAL DAT_002b89c8 int *

undefined4 func_002B8738(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int in_r1;
  uint uVar9;
  
  piVar4 = *(int **)(param_1 + 0x43c);
  if (piVar4 != (int *)0x0) {
    in_r1 = *piVar4;
  }
  if (piVar4 == (int *)0x0 || in_r1 == 0) {
    return 0;
  }
  puVar5 = (undefined4 *)func_0052FBA0(*DAT_002b89b0 + 0x3dbbc,piVar4[1]);
  cVar1 = *(char *)(*(int *)(param_1 + 0x43c) + 0x21);
  if ((-1 < cVar1) && (cVar1 != '\x11' && cVar1 != '\x04')) {
    *(undefined4 *)(param_1 + 0x938) = 0;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x93c) + 4) + 0x124))(*(int **)(*(int *)(param_1 + 0x93c) + 4));
    pcVar6 = (char *)(param_1 + 0xba8);
    uVar9 = (uint)*(char *)(*(int *)(param_1 + 0x43c) + 0x21);
    if (uVar9 < 0x20) {
      pcVar6 = pcVar6 + uVar9;
    }
    *pcVar6 = *pcVar6 + '\x01';
    *(uint *)(param_1 + 0x938) =
         *(uint *)(param_1 + 0x938) | 1 << *(sbyte *)(*(int *)(param_1 + 0x43c) + 0x21);
    if (puVar5 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0xb30) = puVar5[0x14];
    }
  }
  piVar4 = DAT_002b89b4;
  iVar7 = *(int *)(param_1 + 0x43c);
  if (*(char *)(iVar7 + 0x21) == '\x03') {
    if ((*(char *)(iVar7 + 0x23) != '\x01') ||
       (*(uint *)(param_1 + 0x938) = *(uint *)(param_1 + 0x938) | 2, *(char *)(iVar7 + 0x20) != '\f'
       )) goto LAB_002b888c;
    if (puVar5 == (undefined4 *)0x0) {
      uVar8 = func_005568E8(*piVar4);
      *(undefined4 *)(param_1 + 0xb30) = uVar8;
      goto LAB_002b8924;
    }
  }
  else {
    if (*(char *)(iVar7 + 0x21) == '\x05') {
      bVar3 = func_00556EAC(*DAT_002b89b4,0x45);
      if (bVar3) {
        uVar9 = *(uint *)(param_1 + 0x938) | 0x400000;
      }
      else {
        bVar3 = func_00556EAC(*piVar4,0x2e);
        if ((!bVar3) && (bVar3 = func_00556EAC(*piVar4,0x2f), !bVar3)) goto LAB_002b888c;
        uVar9 = *(uint *)(param_1 + 0x938) | 0x800000;
      }
      *(uint *)(param_1 + 0x938) = uVar9;
    }
LAB_002b888c:
    if (puVar5 == (undefined4 *)0x0) goto LAB_002b8924;
  }
  iVar7 = func_00588BE4((int)puVar5);
  if (iVar7 == *DAT_002b89b8) {
    if (((*DAT_002b89bc & 1) == 0) && (iVar7 = func_00100174((int *)DAT_002b89bc), iVar7 != 0)) {
      *DAT_002b89c0 = DAT_002b89c4;
    }
    iVar7 = (**(code **)*puVar5)(puVar5,DAT_002b89c0);
    uVar9 = *(uint *)(param_1 + 0x938);
    if (iVar7 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    *(uint *)(param_1 + 0x938) = uVar9 | 0x100000;
    if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 0x239) == '\x01')) {
      *(uint *)(param_1 + 0x938) = uVar9 | 0x300000;
    }
  }
LAB_002b8924:
  piVar2 = DAT_002b89c8;
  cVar1 = *(char *)(*(int *)(param_1 + 0x43c) + 0x21);
  if (cVar1 == '\x03') {
    if (*(char *)(*(int *)(param_1 + 0x43c) + 0x23) == '\x02') {
      uVar9 = func_0055696C(*piVar4,7);
      iVar7 = *piVar2;
      if (2 < uVar9) {
        func_004C6654(iVar7,0x16);
        return func_004C6654(*piVar2,0x17);
      }
      return func_004C6654(iVar7,0x16);
    }
  }
  else {
    if (cVar1 == '\t') {
      return func_004C6654(*DAT_002b89c8,10);
    }
    if (cVar1 == '\v') {
      return func_004C6654(*DAT_002b89c8,0x14);
    }
  }
  return 0;
}

