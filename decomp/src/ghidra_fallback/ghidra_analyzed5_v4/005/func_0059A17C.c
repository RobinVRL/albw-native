#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_0059a1bc;
extern undefined4 DAT_0059a1c0;
extern undefined4 DAT_0059a1c4;
extern undefined4 DAT_0059a1c8;
extern undefined4 *DAT_0059a1cc;
extern undefined4 DAT_0059a1d0;
extern undefined4 DAT_0059a1d4;

// USA 0059A17C <- EU 0059A154 (Ghidra, non-matching)
// GLOBAL DAT_0059a1bc undefined4 *
// GLOBAL DAT_0059a1c0 undefined4
// GLOBAL DAT_0059a1c4 undefined4
// GLOBAL DAT_0059a1c8 undefined4
// GLOBAL DAT_0059a1cc undefined4 *
// GLOBAL DAT_0059a1d0 undefined4
// GLOBAL DAT_0059a1d4 undefined4

undefined4 func_0059A17C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_0059a1bc;
  DAT_0059a1bc[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  uVar2 = DAT_0059a1c0;
  puVar1[0x18] = 0xffffffff;
  *puVar1 = uVar2;
  puVar1[0x17] = 0;
  puVar1 = DAT_0059a1cc;
  *DAT_0059a1cc = DAT_0059a1d0;
  puVar1[1] = 0;
  return func_005902C0(puVar1);
}

