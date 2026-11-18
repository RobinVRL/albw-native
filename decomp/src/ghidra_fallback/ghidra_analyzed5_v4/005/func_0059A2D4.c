#include "ghidra_types.h"

extern int func_0010DEB0(undefined4 *param_1);
extern int func_005902C0(void *param_1);
extern undefined4 *DAT_0059a300;
extern int DAT_0059a304;
extern undefined4 *DAT_0059a308;
extern undefined4 DAT_0059a30c;
extern undefined4 DAT_0059a310;

// USA 0059A2D4 <- EU 0059A2AC (Ghidra, non-matching)
// GLOBAL DAT_0059a300 undefined4 *
// GLOBAL DAT_0059a304 int
// GLOBAL DAT_0059a308 undefined4 *
// GLOBAL DAT_0059a30c undefined4
// GLOBAL DAT_0059a310 undefined4

undefined4 func_0059A2D4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_0059a300;
  DAT_0059a300[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar2 = DAT_0059a308;
  *puVar1 = *(undefined4 *)(DAT_0059a304 + 4);
  *puVar2 = 0;
  func_0010DEB0(puVar2);
  return func_005902C0(puVar2);
}

