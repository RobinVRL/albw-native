#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int DAT_00607fa4;
extern int DAT_00607fa8;

// USA 00607F84 <- EU 00607F5C (Ghidra, non-matching)
// GLOBAL DAT_00607fa4 int
// GLOBAL DAT_00607fa8 int

void func_00607F84(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x410);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00150E40(puVar1,param_1);
    iVar3 = DAT_00607fa4 + 0x54;
    *piVar2 = DAT_00607fa4;
    piVar2[200] = iVar3;
    iVar3 = DAT_00607fa8;
    *(undefined1 *)((int)piVar2 + 0x40e) = 0;
    *(short *)(iVar3 + (int)piVar2) = (short)piVar2[0xb];
  }
  return;
}

