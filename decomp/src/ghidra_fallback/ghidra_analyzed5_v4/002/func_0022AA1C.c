#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002BC580(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0022aae0;
extern uint *DAT_0022aae4;
extern undefined4 DAT_0022aae8;
extern undefined4 *DAT_0022aaec;

// USA 0022AA1C <- EU 0022AA1C (Ghidra, non-matching)
// GLOBAL DAT_0022aae0 int *
// GLOBAL DAT_0022aae4 uint *
// GLOBAL DAT_0022aae8 undefined4
// GLOBAL DAT_0022aaec undefined4 *

undefined4 func_0022AA1C(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  
  uVar6 = DAT_0022aae8;
  puVar2 = DAT_0022aae4;
  piVar1 = DAT_0022aae0;
  iVar8 = 0;
  uVar7 = 0;
  do {
    puVar3 = (uint *)(param_1 + 0x8c0);
    if (uVar7 < 0xf) {
      puVar3 = puVar3 + uVar7;
    }
    puVar4 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*puVar3);
    if (puVar4 != (undefined4 *)0x0) {
      if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0022aae4), iVar5 != 0)) {
        *DAT_0022aaec = uVar6;
      }
      iVar5 = (**(code **)*puVar4)(puVar4,DAT_0022aaec);
      if (iVar5 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      if (puVar4 != (undefined4 *)0x0) {
        if (param_2 == iVar8) {
          uVar6 = func_002BC580((int)puVar4);
          return uVar6;
        }
        iVar8 = iVar8 + 1;
      }
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0xf);
  return puVar4;
}

