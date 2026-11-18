#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036CB64(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int DAT_0032ecb4;
extern int DAT_0032ecb8;

// USA 0032EC88 <- EU 0032EC64 (Ghidra, non-matching)
// GLOBAL DAT_0032ecb4 int
// GLOBAL DAT_0032ecb8 int

undefined4 func_0032EC88(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0032ecb4;
  *param_1 = DAT_0032ecb4;
  param_1[200] = iVar1 + 0x84;
  puVar2 = func_0036CB64(param_1 + 0x2a8);
  func_0036D0E0(puVar2 + -0x78);
  func_0036D0E0(puVar2 + -0x79);
  iVar1 = DAT_0032ecb8;
  puVar2[-0x2a8] = DAT_0032ecb8;
  puVar2[-0x1e0] = iVar1 + 0x84;
  return func_001510A4(puVar2 + -0x2a8);
}

