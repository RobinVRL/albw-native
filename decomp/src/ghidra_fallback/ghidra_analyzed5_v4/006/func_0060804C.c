#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00327978(int param_1);
extern undefined4 DAT_00608090;
extern int DAT_00608094;
extern int DAT_00608098;
extern int DAT_0060809c;

// USA 0060804C <- EU 00608024 (Ghidra, non-matching)
// GLOBAL DAT_00608090 undefined4
// GLOBAL DAT_00608094 int
// GLOBAL DAT_00608098 int
// GLOBAL DAT_0060809c int

int * func_0060804C(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00608090);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00150E40(puVar2,param_1);
    iVar1 = DAT_00608098;
    iVar4 = DAT_00608094 + 0x58;
    *piVar3 = DAT_00608094;
    piVar3[200] = iVar4;
    piVar3[0x103] = iVar1;
    piVar3[0x104] = iVar1;
    piVar3[0x105] = iVar1;
    iVar1 = DAT_0060809c;
    piVar3[0x106] = DAT_0060809c;
    piVar3[0x107] = iVar1;
    piVar3[0x108] = iVar1;
    func_00327978((int)piVar3);
  }
  return piVar3;
}

