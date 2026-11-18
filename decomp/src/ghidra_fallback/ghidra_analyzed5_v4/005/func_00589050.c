#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00547D48(int param_1,undefined4 *param_2,float *param_3);
extern uint DAT_00589134;
extern int *DAT_00589138;
extern uint *DAT_0058913c;
extern undefined4 DAT_00589140;
extern undefined4 *DAT_00589144;

// USA 00589050 <- EU 00589028 (Ghidra, non-matching)
// GLOBAL DAT_00589134 uint
// GLOBAL DAT_00589138 int *
// GLOBAL DAT_0058913c uint *
// GLOBAL DAT_00589140 undefined4
// GLOBAL DAT_00589144 undefined4 *

undefined4 func_00589050(int param_1,undefined4 *param_2,float *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  
  uVar3 = DAT_00589140;
  puVar2 = DAT_0058913c;
  piVar1 = DAT_00589138;
  uVar8 = 0;
  uVar10 = (ulonglong)DAT_00589134;
  do {
    uVar9 = (undefined4)uVar10;
    piVar4 = (int *)(param_1 + 0xc0);
    if (uVar8 < 8) {
      piVar4 = piVar4 + uVar8;
    }
    if (*piVar4 == 0) break;
    puVar7 = (uint *)(param_1 + 0xc0);
    if (uVar8 < 8) {
      puVar7 = puVar7 + uVar8;
    }
    puVar5 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*puVar7);
    if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0058913c), iVar6 != 0)) {
      *DAT_00589144 = uVar3;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar5)(puVar5,DAT_00589144), iVar6 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    if ((puVar5 != (undefined4 *)0x0) &&
       (iVar6 = func_00547D48((int)puVar5,param_2,param_3), iVar6 != 0)) {
      return 1;
    }
    uVar9 = (undefined4)uVar10;
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 8);
  *param_2 = uVar9;
  param_2[1] = uVar9;
  param_2[2] = uVar9;
  return 0;
}

