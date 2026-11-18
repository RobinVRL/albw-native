#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_006584B0(undefined4 *param_1,int param_2);
extern uint *DAT_00120f2c;
extern undefined4 *DAT_00120f30;
extern undefined4 DAT_00120f34;
extern undefined1 *DAT_00120f38;

// USA 00120E50 <- EU 00120E50 (Ghidra, non-matching)
// GLOBAL DAT_00120f2c uint *
// GLOBAL DAT_00120f30 undefined4 *
// GLOBAL DAT_00120f34 undefined4
// GLOBAL DAT_00120f38 undefined1 *

void func_00120E50(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (((*DAT_00120f2c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00120f2c), iVar2 != 0)) {
    *DAT_00120f30 = DAT_00120f34;
  }
  if ((param_1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*param_1)(param_1,DAT_00120f30), iVar2 == 0)) {
    param_1 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00120f38;
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = *(ushort *)((int)param_1 + 0x2e) & 0xff;
    if ((uVar3 < 4) && (1 < uVar3)) {
      iVar2 = uVar3 - 2;
    }
    else {
      iVar2 = -1;
    }
    if (iVar2 < 0) {
      param_1[1000] = *(undefined4 *)(DAT_00120f38 + 8);
      func_006584B0(param_1 + 0x22f,2);
    }
    else {
      func_006584B0(param_1 + 0x22f,0x16);
    }
    *puVar1 = 1;
  }
  return;
}

