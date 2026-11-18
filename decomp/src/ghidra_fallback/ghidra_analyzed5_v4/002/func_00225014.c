#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00248344(int param_1);
extern int func_0034C8F0(uint *param_1,int param_2,int param_3);
extern int func_004FA8A0(int param_1);
extern int func_0051228C(int *param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_002251d8;
extern undefined4 DAT_002251dc;
extern int DAT_002251e0;
extern uint *DAT_002251e4;
extern undefined4 *DAT_002251e8;
extern uint *DAT_002251ec;
extern undefined4 *DAT_002251f0;

// USA 00225014 <- EU 00225014 (Ghidra, non-matching)
// GLOBAL DAT_002251d8 int *
// GLOBAL DAT_002251dc undefined4
// GLOBAL DAT_002251e0 int
// GLOBAL DAT_002251e4 uint *
// GLOBAL DAT_002251e8 undefined4 *
// GLOBAL DAT_002251ec uint *
// GLOBAL DAT_002251f0 undefined4 *

undefined4 func_00225014(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar2 = func_0034C8F0(*(uint **)(param_1 + 0x434),*(int *)(param_1 + 0x3a0),param_2);
  if (iVar2 != 0) {
    func_004FA8A0(param_2);
    uVar1 = DAT_002251dc;
    piVar4 = DAT_002251d8;
    if ((((*(char *)(param_1 + 0x73c) == '\0') ||
         (*(char *)(DAT_002251e0 + param_1) == '\x0f' || *(char *)(DAT_002251e0 + param_1) == '\x10'
         )) && (*(int *)(param_2 + 0x2c) != 0)) &&
       ((*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x01' &&
        (puVar3 = (undefined4 *)func_0052FBA0(*DAT_002251d8 + 0x3dbbc,*(uint *)(param_2 + 0x28)),
        puVar3 != (undefined4 *)0x0)))) {
      if (((*DAT_002251e4 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002251e4), iVar2 != 0)) {
        *DAT_002251e8 = uVar1;
      }
      iVar2 = (**(code **)*puVar3)(puVar3,DAT_002251e8);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      if (puVar3 != (undefined4 *)0x0) {
        func_00248344((int)puVar3);
      }
    }
    if (((*(char *)(param_1 + 0x751) == '\0') && (*(int *)(param_2 + 0x2c) != 0)) &&
       ((*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\a' &&
        (iVar2 = func_0052FBA0(*piVar4 + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar2 != 0)))) {
      *(undefined1 *)(iVar2 + 0x2d7) = 1;
    }
    if (((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x02')) &&
       (piVar4 = (int *)func_0052FBA0(*piVar4 + 0x3dbbc,*(uint *)(param_2 + 0x28)),
       piVar4 != (int *)0x0)) {
      if (((*DAT_002251ec & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002251ec), iVar2 != 0)) {
        *DAT_002251f0 = uVar1;
      }
      iVar2 = (**(code **)*piVar4)(piVar4,DAT_002251f0);
      if (iVar2 == 0) {
        piVar4 = (int *)0x0;
      }
      if (piVar4 != (int *)0x0) {
        func_0051228C(piVar4,1);
      }
    }
  }
  return 0;
}

