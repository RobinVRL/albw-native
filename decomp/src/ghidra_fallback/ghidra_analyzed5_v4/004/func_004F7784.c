#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0018E508(int param_1);
extern int func_0034C8F0(uint *param_1,int param_2,int param_3);
extern int func_0051228C(int *param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_004f78cc;
extern undefined4 DAT_004f78d0;
extern uint *DAT_004f78d4;
extern undefined4 *DAT_004f78d8;
extern uint *DAT_004f78dc;
extern undefined4 *DAT_004f78e0;

// USA 004F7784 <- EU 004F775C (Ghidra, non-matching)
// GLOBAL DAT_004f78cc int *
// GLOBAL DAT_004f78d0 undefined4
// GLOBAL DAT_004f78d4 uint *
// GLOBAL DAT_004f78d8 undefined4 *
// GLOBAL DAT_004f78dc uint *
// GLOBAL DAT_004f78e0 undefined4 *

undefined4 func_004F7784(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if (*(uint **)(param_1 + 0x34) != (uint *)0x0) {
    if (*(int *)(param_1 + 0x4c) == 0) {
      return 1;
    }
    iVar3 = func_0034C8F0(*(uint **)(param_1 + 0x34),*(int *)(param_1 + 0x4c),param_2);
    piVar1 = DAT_004f78cc;
    if (iVar3 != 0) {
      piVar4 = (int *)func_0052FBA0(*DAT_004f78cc + 0x3dbbc,*(uint *)(param_2 + 0x28));
      uVar2 = DAT_004f78d0;
      if (piVar4 != (int *)0x0) {
        if (((*DAT_004f78d4 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_004f78d4), iVar3 != 0))
        {
          *DAT_004f78d8 = uVar2;
        }
        iVar3 = (**(code **)*piVar4)(piVar4,DAT_004f78d8);
        if (iVar3 == 0) {
          piVar4 = (int *)0x0;
        }
        if (piVar4 != (int *)0x0) {
          func_0051228C(piVar4,1);
          return 1;
        }
      }
      if (((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\t')) &&
         (puVar5 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_2 + 0x28)),
         puVar5 != (undefined4 *)0x0)) {
        if (((*DAT_004f78dc & 1) == 0) && (iVar3 = func_00100174((int *)DAT_004f78dc), iVar3 != 0))
        {
          *DAT_004f78e0 = uVar2;
        }
        iVar3 = (**(code **)*puVar5)(puVar5,DAT_004f78e0);
        if (iVar3 == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        if ((puVar5 != (undefined4 *)0x0) && (iVar3 = func_0018E508((int)puVar5), iVar3 != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

