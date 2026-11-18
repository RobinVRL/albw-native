#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0014f848;

// USA 0014F804 <- EU 0014F804 (Ghidra, non-matching)
// GLOBAL DAT_0014f848 int *

undefined4 func_0014F804(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0052FBA0(*DAT_0014f848 + 0x3dbbc,*param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x396) == '\0') {
      uVar2 = 1;
      *(undefined1 *)(iVar1 + 0x396) = 0x16;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

