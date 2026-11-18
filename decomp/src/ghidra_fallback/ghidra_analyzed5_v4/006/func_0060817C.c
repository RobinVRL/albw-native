#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00327978(int param_1);
extern undefined4 DAT_006081d8;
extern int DAT_006081dc;
extern int DAT_006081e0;
extern int DAT_006081e4;
extern int DAT_006081e8;

// USA 0060817C <- EU 00608154 (Ghidra, non-matching)
// GLOBAL DAT_006081d8 undefined4
// GLOBAL DAT_006081dc int
// GLOBAL DAT_006081e0 int
// GLOBAL DAT_006081e4 int
// GLOBAL DAT_006081e8 int

int * func_0060817C(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  puVar3 = (undefined4 *)func_0010BAB4(DAT_006081d8);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_00150E40(puVar3,param_1);
    iVar2 = DAT_006081e0;
    iVar1 = DAT_006081dc;
    piVar4[200] = DAT_006081dc + 0x58;
    *piVar4 = iVar1;
    piVar4[0x103] = iVar2;
    piVar4[0x104] = iVar2;
    piVar4[0x105] = iVar2;
    iVar1 = DAT_006081e4;
    piVar4[0x106] = DAT_006081e4;
    piVar4[0x107] = iVar1;
    piVar4[0x108] = iVar1;
    func_00327978((int)piVar4);
    iVar1 = DAT_006081e8;
    *piVar4 = DAT_006081e8;
    piVar4[200] = iVar1 + 0x58;
    piVar4[0x109] = 0;
  }
  return piVar4;
}

