#include "ghidra_types.h"

extern int DAT_005931b8;
extern undefined4 *DAT_005931bc;

// USA 005931A4 <- EU 0059317C (Ghidra, non-matching)
// GLOBAL DAT_005931b8 int
// GLOBAL DAT_005931bc undefined4 *

void func_005931A4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005931b8;
  *(undefined4 *)(DAT_005931b8 + 0x38) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x3c) = 0xffffffff;
  puVar2 = DAT_005931bc;
  *DAT_005931bc = 0;
  puVar2[1] = 0;
  puVar2[-5] = 0;
  puVar2[-4] = 0;
  puVar2[-3] = 0;
  return;
}

