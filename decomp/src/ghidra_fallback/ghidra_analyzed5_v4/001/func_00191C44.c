#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0025B874(undefined4 *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int DAT_00191c88;
extern int DAT_00191c8c;

// USA 00191C44 <- EU 00191C44 (Ghidra, non-matching)
// GLOBAL DAT_00191c88 int
// GLOBAL DAT_00191c8c int

undefined4 func_00191C44(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00191c88;
  *param_1 = DAT_00191c88;
  param_1[200] = iVar1 + 0x78;
  iVar1 = func_0025B874(param_1 + 0x17d);
  puVar2 = func_004EE540((undefined4 *)(iVar1 + -0xd4));
  iVar1 = DAT_00191c8c;
  puVar2[-0x80] = DAT_00191c8c + 0x5c;
  puVar2[-0x148] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x44);
  return func_001510A4(puVar2 + -0x104);
}

