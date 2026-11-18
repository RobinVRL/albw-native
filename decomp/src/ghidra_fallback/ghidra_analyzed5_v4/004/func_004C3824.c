#include "ghidra_types.h"

extern int func_00293AE4(int param_1,int param_2);
extern int DAT_004c3884;

// USA 004C3824 <- EU 004C37FC (Ghidra, non-matching)
// GLOBAL DAT_004c3884 int

undefined4 func_004C3824(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  if (((*(int *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x9b9) != '\0')) &&
     (*(uint *)(param_1 + 0x9c0) < 2)) {
    func_00293AE4(param_1 + 0x9cc,param_2);
    iVar1 = DAT_004c3884;
    *(int *)(param_1 + 0x9bc) = param_2;
    *(int *)(param_1 + 0x14) = param_1 + 0x9cc + param_2 * iVar1 * 4;
    puVar2 = (uint *)(param_1 + 0x4dd8 + param_2 * 4);
    *puVar2 = *puVar2 | 7;
    *(undefined4 *)(param_1 + 0x9c0) = 7;
    *(undefined1 *)(param_1 + 0x9c4) = 1;
    return 1;
  }
  return 0;
}

