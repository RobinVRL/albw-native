#include "ghidra_types.h"

extern int func_0010DEB0(undefined4 *param_1);
extern int func_005902C0(void *param_1);
extern undefined4 *DAT_0059a4a4;
extern undefined4 DAT_0059a4a8;
extern undefined4 DAT_0059a4ac;
extern undefined4 *DAT_0059a4b0;
extern undefined4 DAT_0059a4b4;
extern undefined4 *DAT_0059a4b8;
extern undefined4 DAT_0059a4bc;
extern undefined4 *DAT_0059a4c0;
extern undefined4 DAT_0059a4c4;

// USA 0059A43C <- EU 0059A414 (Ghidra, non-matching)
// GLOBAL DAT_0059a4a4 undefined4 *
// GLOBAL DAT_0059a4a8 undefined4
// GLOBAL DAT_0059a4ac undefined4
// GLOBAL DAT_0059a4b0 undefined4 *
// GLOBAL DAT_0059a4b4 undefined4
// GLOBAL DAT_0059a4b8 undefined4 *
// GLOBAL DAT_0059a4bc undefined4
// GLOBAL DAT_0059a4c0 undefined4 *
// GLOBAL DAT_0059a4c4 undefined4

undefined4 func_0059A43C(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0059a4a4;
  *DAT_0059a4a4 = 0;
  func_0010DEB0(puVar2);
  *DAT_0059a4b0 = 0;
  puVar1 = DAT_0059a4b8;
  *DAT_0059a4b8 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *DAT_0059a4c0 = 0;
  puVar2 = puVar2 + 3;
  *puVar2 = 0;
  func_0010DEB0(puVar2);
  return func_005902C0(puVar2);
}

