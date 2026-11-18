#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00374AC4(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_006540C8(undefined4 *param_1,uint *param_2,undefined1 param_3);
extern undefined4 DAT_0060883c;
extern int DAT_00608840;
extern undefined4 DAT_00608844;
extern undefined4 DAT_00608848;
extern undefined4 DAT_0060884c;
extern undefined4 *DAT_00608850;

// USA 006087D0 <- EU 006087A8 (Ghidra, non-matching)
// GLOBAL DAT_0060883c undefined4
// GLOBAL DAT_00608840 int
// GLOBAL DAT_00608844 undefined4
// GLOBAL DAT_00608848 undefined4
// GLOBAL DAT_0060884c undefined4
// GLOBAL DAT_00608850 undefined4 *

int * func_006087D0(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060883c);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_006540C8(puVar1,param_1,2);
    iVar3 = DAT_00608840 + 0xbc;
    *piVar2 = DAT_00608840;
    piVar2[200] = iVar3;
    func_004BE114(piVar2,2,0,0,DAT_0060884c);
    func_00374AC4((int)piVar2);
    func_004C03B8((int)piVar2,DAT_00608850);
    piVar2[0x22b] = piVar2[0x22b] | 0x10;
  }
  return piVar2;
}

