#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_00589A58(int param_1);
extern int *DAT_002b5f2c;
extern int *DAT_002b5f30;
extern uint *DAT_002b5f34;
extern undefined4 *DAT_002b5f38;
extern undefined4 DAT_002b5f3c;
extern int *DAT_002b5f40;
extern int DAT_002b5f44;
extern float DAT_002b5f48;

// USA 002B5DB8 <- EU 002B5D94 (Ghidra, non-matching)
// GLOBAL DAT_002b5f2c int *
// GLOBAL DAT_002b5f30 int *
// GLOBAL DAT_002b5f34 uint *
// GLOBAL DAT_002b5f38 undefined4 *
// GLOBAL DAT_002b5f3c undefined4
// GLOBAL DAT_002b5f40 int *
// GLOBAL DAT_002b5f44 int
// GLOBAL DAT_002b5f48 float

undefined4 func_002B5DB8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_002b5f2c + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar2 = func_00588BE4((int)puVar1);
  if (iVar2 == *DAT_002b5f30) {
    if (((*DAT_002b5f34 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002b5f34), iVar2 != 0)) {
      *DAT_002b5f38 = DAT_002b5f3c;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_002b5f38);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = puVar1;
    }
    if (puVar3 != (undefined4 *)0x0) {
      uVar4 = *(uint *)(param_2 + 0x30) & 0xffff;
      if (uVar4 < (uint)puVar3[0x187]) {
        iVar2 = puVar3[0x188] + uVar4 * 0x3c;
      }
      else {
        iVar2 = puVar3[0x188];
      }
      if (*(char *)(iVar2 + 0x34) != '\x01') {
        uVar4 = *(uint *)(param_2 + 0x30) & 0xffff;
        if (uVar4 < (uint)puVar3[0x187]) {
          iVar2 = puVar3[0x188] + uVar4 * 0x3c;
        }
        else {
          iVar2 = puVar3[0x188];
        }
        if (*(char *)(iVar2 + 0x34) != '\x02') goto LAB_002b5ee0;
      }
      *(undefined1 *)(param_1 + 0xb37) = 1;
      uVar4 = *(uint *)(param_2 + 0x30) & 0xffff;
      if (uVar4 < (uint)puVar3[0x187]) {
        iVar2 = puVar3[0x188] + uVar4 * 0x3c;
      }
      else {
        iVar2 = puVar3[0x188];
      }
      if (*(int *)(iVar2 + 0x24) != 0) {
        iVar2 = puVar3[0x188];
        if (uVar4 < (uint)puVar3[0x187]) {
          iVar2 = iVar2 + uVar4 * 0x3c;
        }
        puVar3 = (undefined4 *)func_00589A58(*(int *)(iVar2 + 0x24));
        uVar5 = *puVar3;
        uVar6 = puVar3[1];
        *(undefined4 *)(param_1 + 0x9e4) = puVar3[2];
        *(undefined4 *)(param_1 + 0x9dc) = uVar5;
        *(undefined4 *)(param_1 + 0x9e0) = uVar6;
      }
    }
  }
LAB_002b5ee0:
  iVar2 = func_00588BE4((int)puVar1);
  if (((iVar2 == *DAT_002b5f40) && (DAT_002b5f44 < *(int *)(param_2 + 8))) &&
     (*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0xc) + DAT_002b5f48)) {
    *(undefined1 *)(param_1 + 0xb3b) = 1;
  }
  return 0;
}

