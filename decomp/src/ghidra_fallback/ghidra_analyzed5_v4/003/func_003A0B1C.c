#include "ghidra_types.h"

extern int func_004A4744(int param_1);

// USA 003A0B1C <- EU 003A0AF8 (Ghidra, non-matching)

void func_003A0B1C(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x394);
  if ((iVar1 < (int)param_2) && ((int)param_2 <= iVar1 + 3)) {
    iVar2 = param_1 + 0x54;
    if (param_2 - iVar1 < 6) {
      iVar2 = param_1 + 0x54 + (param_2 - iVar1) * 0x88;
    }
    *(int *)(param_1 + 900) = iVar2;
    func_004A4744(iVar2);
    if (param_2 < 0x32) {
      *(uint *)(param_1 + 0x388 + ((int)param_2 >> 5) * 4) =
           *(uint *)(param_1 + 0x388 + ((int)param_2 >> 5) * 4) | 1 << (param_2 & 0x1f);
    }
    if (*(int *)(param_1 + 0x390) < 0x32) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x3e) = 0;
      *(undefined2 *)(param_1 + 0x3c) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x3e) = 1;
    *(undefined2 *)(param_1 + 0x3c) = 0;
  }
  return;
}

