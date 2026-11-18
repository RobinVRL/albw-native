#include "ghidra_types.h"

extern int func_002D455C(int *param_1,int param_2,byte param_3,int param_4);
extern int *DAT_00255144;

// USA 00255070 <- EU 00255098 (Ghidra, non-matching)
// GLOBAL DAT_00255144 int *

void func_00255070(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  if ((*DAT_00255144 != 0) && (uVar1 = (uint)*(char *)(*DAT_00255144 + 0x18), uVar1 < 0x20)) {
    *(char *)((int)param_1 + uVar1 + 0x10c) = (char)param_1[9];
    *(undefined1 *)((int)param_1 + uVar1 + 0x14c) = *(undefined1 *)((int)param_1 + 0x25);
  }
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  if ((char)param_1[8] != '\0') {
    param_1[0x37] = param_1[1];
    param_1[0x38] = param_1[2];
    param_1[0x39] = param_1[3];
    param_1[0x3a] = param_1[4];
    param_1[0x3b] = param_1[5];
    param_1[0x1b] = param_1[6];
    if (((char)param_1[7] != -1) &&
       (piVar2 = (int *)(*param_1 + 0x694 + (char)param_1[7] * 0xc), piVar2 != (int *)0x0)) {
      func_002D455C(piVar2,0x11,0,1);
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}

