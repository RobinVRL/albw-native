// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00556AF8();
extern int func_00556BE0(int param_1);
extern int func_0066C424(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0043d53c;

// USA 0043D4F4 <- EU 0043D4D4 (Ghidra, non-matching)
// GLOBAL DAT_0043d53c int *

void func_0043D4F4(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x19c) != '\x02') {
    iVar3 = *DAT_0043d53c;
    iVar2 = func_00556AF8(iVar3);
    if (((iVar2 == 0) && (iVar2 = func_00556BE0(iVar3), iVar2 == 0)) &&
       (sVar1 = *(short *)(param_1 + 0x174) + 1, *(short *)(param_1 + 0x174) = sVar1, 0x9f < sVar1))
    {
      func_0066C424((undefined4 *)(param_1 + 0x74),0);
    }
  }
  return;
}

