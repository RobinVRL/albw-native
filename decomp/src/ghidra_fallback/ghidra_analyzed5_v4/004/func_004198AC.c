#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_00414F8C(undefined4 *param_1);
extern uint DAT_00419900;

// USA 004198AC <- EU 0041988C (Ghidra, non-matching)
// GLOBAL DAT_00419900 uint

void func_004198AC(char *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*param_1 == '\0') {
    iVar3 = 0;
    uVar1 = (uint)((ulonglong)param_3 * (ulonglong)DAT_00419900 >> 0x26);
    if (uVar1 != 0) {
      do {
        if (param_2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2 = func_00414F8C(param_2);
        }
        func_00112364((int *)(param_1 + 0x10),(int)(param_1 + 0x14),puVar2 + 0x16);
        iVar3 = iVar3 + 1;
        param_2 = param_2 + 0x18;
      } while (iVar3 < (int)uVar1);
    }
    *(uint *)(param_1 + 0x20) = uVar1;
    *param_1 = '\x01';
    *(uint *)(param_1 + 0x1c) = uVar1;
  }
  return;
}

