#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00334010(int param_1);
extern int func_004F4A68();
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_002a1364;
extern uint *DAT_002a1368;
extern undefined4 *DAT_002a136c;
extern undefined4 DAT_002a1370;
extern int *DAT_002a1374;
extern int *DAT_002a1378;

// USA 002A12C0 <- EU 002A129C (Ghidra, non-matching)
// GLOBAL DAT_002a1364 int *
// GLOBAL DAT_002a1368 uint *
// GLOBAL DAT_002a136c undefined4 *
// GLOBAL DAT_002a1370 undefined4
// GLOBAL DAT_002a1374 int *
// GLOBAL DAT_002a1378 int *

undefined4 func_002A12C0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_002a1364 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (puVar1 != (undefined4 *)0x0) {
    if (((*DAT_002a1368 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002a1368), iVar2 != 0)) {
      *DAT_002a136c = DAT_002a1370;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_002a136c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = puVar1;
    }
    if (puVar3 != (undefined4 *)0x0) {
      func_00334010((int)puVar3);
    }
    iVar2 = func_00588BE4((int)puVar1);
    if ((iVar2 == *DAT_002a1374) || (iVar2 == *DAT_002a1378)) {
      return 0;
    }
  }
  uVar4 = func_004F4A68(param_1,param_2);
  return uVar4;
}

