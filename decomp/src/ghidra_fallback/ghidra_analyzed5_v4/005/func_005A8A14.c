#include "ghidra_types.h"

extern int func_004941D0(undefined4 *param_1);
extern int func_005902C0(void *param_1);
extern int DAT_005a8a34;
extern undefined4 *DAT_005a8a38;
extern undefined4 DAT_005a8a3c;
extern undefined4 *DAT_005a8a40;
extern undefined4 DAT_005a8a44;
extern undefined4 DAT_005a8a48;

// USA 005A8A14 <- EU 005A89EC (Ghidra, non-matching)
// GLOBAL DAT_005a8a34 int
// GLOBAL DAT_005a8a38 undefined4 *
// GLOBAL DAT_005a8a3c undefined4
// GLOBAL DAT_005a8a40 undefined4 *
// GLOBAL DAT_005a8a44 undefined4
// GLOBAL DAT_005a8a48 undefined4

undefined4 func_005A8A14(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005a8a34;
  *(undefined4 *)(DAT_005a8a34 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005a8a38;
  *DAT_005a8a38 = 0;
  puVar2[1] = 0;
  puVar2[-4] = DAT_005a8a3c;
  puVar2 = func_004941D0(DAT_005a8a40);
  return func_005902C0(puVar2);
}

