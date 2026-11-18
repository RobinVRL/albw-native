#include "ghidra_types.h"

extern int func_0014E868(int *param_1,int param_2);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001BA1EC(int param_1);
extern int func_00547B20(int param_1);
extern int DAT_001ba9c0;
extern int DAT_001ba9c4;
extern undefined4 DAT_001ba9c8;
extern undefined4 DAT_001ba9cc;
extern int DAT_001ba9d0;
extern int *DAT_001ba9d4;
extern int DAT_001ba9d8;

// USA 001BA8C4 <- EU 001BA8C4 (Ghidra, non-matching)
// GLOBAL DAT_001ba9c0 int
// GLOBAL DAT_001ba9c4 int
// GLOBAL DAT_001ba9c8 undefined4
// GLOBAL DAT_001ba9cc undefined4
// GLOBAL DAT_001ba9d0 int
// GLOBAL DAT_001ba9d4 int *
// GLOBAL DAT_001ba9d8 int

int * func_001BA8C4(undefined4 *param_1,uint *param_2,int param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = func_00150E40(param_1,param_2);
  iVar4 = DAT_001ba9c0;
  piVar3[200] = DAT_001ba9c0 + 0x5c;
  *piVar3 = iVar4;
  piVar3[0x103] = 0;
  iVar4 = DAT_001ba9c4;
  piVar3[0x104] = 0;
  piVar3[0x105] = 0;
  *(undefined1 *)(piVar3 + 0x106) = 0;
  piVar3[0x107] = iVar4;
  piVar3[0x108] = *(int *)(param_4 + 4);
  piVar3[0x10a] = (int)(piVar3 + 0x10c);
  piVar3[0x10b] = 0x40;
  *(undefined1 *)(piVar3[0x10a] + 0x3f) = 0;
  *(undefined1 *)piVar3[0x10a] = 0;
  piVar3[0x109] = DAT_001ba9d0;
  piVar3[0x11c] = 0;
  *(undefined1 *)(piVar3 + 0x11d) = 0;
  *(undefined1 *)((int)piVar3 + 0x475) = 0;
  *(undefined1 *)((int)piVar3 + 0x476) = 0;
  bVar2 = func_00547B20((int)param_2);
  *(bool *)((int)piVar3 + 0x477) = bVar2;
  *(undefined1 *)(piVar3 + 0x11e) = 0;
  *(undefined1 *)((int)piVar3 + 0x479) = 0;
  *(undefined1 *)((int)piVar3 + 0x47a) = 0;
  *(undefined1 *)((int)piVar3 + 0x47b) = 0;
  piVar1 = DAT_001ba9d4;
  piVar3[0x11f] = (int)(short)param_2[0xb];
  piVar3[0x121] = 0;
  iVar4 = piVar1[1];
  piVar3[0x122] = *piVar1;
  piVar3[0x123] = iVar4;
  piVar3[0x120] = DAT_001ba9d8;
  func_0014E868(piVar3,1);
  if (param_3 != 0) {
    func_001BA1EC((int)piVar3);
  }
  return piVar3;
}

