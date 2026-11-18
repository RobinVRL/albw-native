#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002C3980(undefined4 *param_1,uint param_2);
extern int func_00388008(undefined4 *param_1,uint param_2);
extern undefined4 *DAT_001514bc;
extern undefined4 *DAT_001514c0;

// USA 0015137C <- EU 0015137C (Ghidra, non-matching)
// GLOBAL DAT_001514bc undefined4 *
// GLOBAL DAT_001514c0 undefined4 *

undefined4 * func_0015137C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = DAT_001514bc;
  *param_1 = param_2;
  puVar2 = DAT_001514c0;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  param_1[1] = *puVar1;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  uVar4 = puVar2[2];
  param_1[7] = 0;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar4;
  switch(param_3) {
  case 0:
    puVar2 = (undefined4 *)func_0010BAB4(0xa8);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar1 = func_002C3980(puVar2,0);
    }
    break;
  case 1:
    puVar2 = (undefined4 *)func_0010BAB4(0xa8);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = 1;
LAB_00151418:
      puVar1 = func_002C3980(puVar2,uVar3);
    }
    break;
  case 2:
    puVar2 = (undefined4 *)func_0010BAB4(0xa8);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = 2;
      goto LAB_00151418;
    }
    break;
  case 3:
    puVar2 = (undefined4 *)func_0010BAB4(0xa8);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = 3;
      goto LAB_00151418;
    }
    break;
  case 4:
    puVar2 = (undefined4 *)func_0010BAB4(0xa8);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = 4;
      goto LAB_00151418;
    }
    break;
  case 5:
    puVar2 = (undefined4 *)func_0010BAB4(0xac);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar1 = func_00388008(puVar2,5);
    }
    break;
  case 6:
    puVar2 = (undefined4 *)func_0010BAB4(0xac);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = 6;
LAB_0015149c:
      puVar1 = func_00388008(puVar2,uVar3);
    }
    break;
  case 7:
    puVar2 = (undefined4 *)func_0010BAB4(0xac);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = 7;
      goto LAB_0015149c;
    }
    break;
  default:
    goto switchD_001513bc_default;
  }
  param_1[7] = puVar1;
switchD_001513bc_default:
  return param_1;
}

