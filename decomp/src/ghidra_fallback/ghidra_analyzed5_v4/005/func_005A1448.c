#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005a1460;
extern undefined4 *DAT_005a1464;
extern undefined4 DAT_005a1468;
extern undefined DAT_005a146c;
extern undefined4 DAT_005a1470;
extern undefined4 DAT_005a1474;

// USA 005A1448 <- EU 005A1420 (Ghidra, non-matching)
// GLOBAL DAT_005a1460 int
// GLOBAL DAT_005a1464 undefined4 *
// GLOBAL DAT_005a1468 undefined4
// GLOBAL DAT_005a146c undefined
// GLOBAL DAT_005a1470 undefined4
// GLOBAL DAT_005a1474 undefined4

undefined4 func_005A1448(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005a1460;
  *(undefined4 *)(DAT_005a1460 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005a1464;
  *DAT_005a1464 = 0;
  puVar2[1] = 0;
  puVar2[2] = DAT_005a1468;
  puVar2[3] = &DAT_005a146c;
  return func_005902C0(puVar2 + 2);
}

