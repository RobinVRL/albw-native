#include "ghidra_types.h"

extern int func_001E6908(void);
extern int func_0030A578(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4, undefined1 param_5);
extern int *DAT_001ca6cc;

// USA 001CA638 <- EU 001CA638 (Ghidra, non-matching)
// GLOBAL DAT_001ca6cc int *

int func_001CA638(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((1 < param_2) && (param_2 != 2 && param_2 != 3)) {
    iVar1 = func_001E6908();
    return iVar1;
  }
  iVar2 = param_1 + 0x478;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x478) + 0x40))(iVar2);
  if (*(char *)(iVar1 + 0xda) == '\0') {
    *(char *)(*DAT_001ca6cc + 0x2f4) = (char)param_2;
    iVar1 = (**(code **)(*(int *)(param_1 + 0x478) + 0x40))(iVar2);
    func_0030A578(iVar1,0,0x29,0,0);
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x478) + 0x40))(iVar2);
  return (int)*(char *)(iVar1 + 0xdb);
}

