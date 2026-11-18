#include "ghidra_types.h"

extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern int *DAT_0027b108;
extern undefined4 *DAT_0027b10c;
extern int *DAT_0027b110;
extern undefined *DAT_0027b114;

// USA 0027B0A8 <- EU 0027B0D0 (Ghidra, non-matching)
// GLOBAL DAT_0027b108 int *
// GLOBAL DAT_0027b10c undefined4 *
// GLOBAL DAT_0027b110 int *
// GLOBAL DAT_0027b114 undefined *

undefined4 func_0027B0A8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*DAT_0027b108 != 0) {
    uVar1 = **(undefined4 **)(*DAT_0027b108 + 0x2c);
  }
  *DAT_0027b10c = uVar1;
  return func_0052FD7C(*DAT_0027b110 + 0x3dbbc,DAT_0027b114,param_1);
}

