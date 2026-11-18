#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0038F454(int param_1);
extern int DAT_00609938;
extern int *DAT_0060993c;

// USA 006098F0 <- EU 006098C8 (Ghidra, non-matching)
// GLOBAL DAT_00609938 int
// GLOBAL DAT_0060993c int *

int * func_006098F0(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x410);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00150E40(puVar1,param_1);
    iVar3 = DAT_00609938 + 0x54;
    *piVar2 = DAT_00609938;
    piVar2[200] = iVar3;
    piVar2[0xb8] = piVar2[0xb8] | 2;
    *(byte *)(piVar2 + 0x103) = (byte)*(undefined2 *)((int)piVar2 + 0x32) & 1;
    func_0038F454((int)piVar2);
    *(undefined1 *)(*DAT_0060993c + 0x98) = 1;
  }
  return piVar2;
}

