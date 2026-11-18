#include "ghidra_types.h"

extern int func_0034C57C(int param_1,int param_2);
extern int func_005568D4(int param_1);
extern int *DAT_00369fac;
extern int *DAT_00369fb0;
extern int *DAT_00369fb4;

// USA 00369F34 <- EU 00369F10 (Ghidra, non-matching)
// GLOBAL DAT_00369fac int *
// GLOBAL DAT_00369fb0 int *
// GLOBAL DAT_00369fb4 int *

undefined4 func_00369F34(int param_1)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  
  if (*(char *)(*DAT_00369fac + 0x70) != '\x01') {
    if (*DAT_00369fb0 == 0) {
      *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
    }
    else {
      uVar2 = func_005568D4(*DAT_00369fb0);
      piVar1 = DAT_00369fb4;
      uVar3 = (uint)uVar2;
      if (*(uint *)(param_1 + 0x68) == 0xffffffff) {
        *(uint *)(param_1 + 0x68) = uVar3;
        *(uint *)(param_1 + 0x6c) = uVar3;
        func_0034C57C(*(int *)(param_1 + 0x60),uVar3);
        *(undefined4 *)(*piVar1 + 0x338) = *(undefined4 *)(param_1 + 0x68);
      }
      else if (((*(byte *)(*(int *)(*DAT_00369fb4 + 0x130) + 0x74) & 4) != 0) ||
              (*(uint *)(param_1 + 0x68) != uVar3)) {
        return 1;
      }
    }
  }
  return 0;
}

