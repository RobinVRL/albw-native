#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00189400(int param_1,undefined4 param_2);
extern int func_00189458(int param_1,undefined4 param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568E8(int param_1);
extern int *DAT_00305e90;
extern int *DAT_00305e94;
extern uint *DAT_00305e98;
extern undefined4 *DAT_00305e9c;
extern undefined4 DAT_00305ea0;

// USA 00305DC8 <- EU 00305DA4 (Ghidra, non-matching)
// GLOBAL DAT_00305e90 int *
// GLOBAL DAT_00305e94 int *
// GLOBAL DAT_00305e98 uint *
// GLOBAL DAT_00305e9c undefined4 *
// GLOBAL DAT_00305ea0 undefined4

undefined4 func_00305DC8(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((*DAT_00305e90 == 0) || (uVar1 = func_005568E8(*DAT_00305e90), *param_2 != uVar1)) {
    if ((*(char *)(param_1 + 0x4c8) != '\0') &&
       (puVar2 = (undefined4 *)func_0052FBA0(*DAT_00305e94 + 0x3dbbc,*param_2),
       puVar2 != (undefined4 *)0x0)) {
      if (((*DAT_00305e98 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00305e98), iVar3 != 0)) {
        *DAT_00305e9c = DAT_00305ea0;
      }
      iVar3 = (**(code **)*puVar2)(puVar2,DAT_00305e9c);
      if (iVar3 == 0) {
        puVar2 = (undefined4 *)0x0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        if (*(char *)(param_1 + 0x4a8) != '\0') {
          return func_00189400((int)puVar2,*(undefined4 *)(param_1 + 1000));
        }
        return func_00189458((int)puVar2,*(undefined4 *)(param_1 + 1000));
      }
    }
  }
  else {
    **(uint **)(param_1 + 0x454) = **(uint **)(param_1 + 0x454) | 0x20000;
  }
  return 0;
}

