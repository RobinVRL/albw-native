#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005b9378;
extern undefined4 DAT_005b937c;
extern undefined4 DAT_005b9380;
extern undefined4 DAT_005b9384;

// USA 005B9378 <- EU 005B9350 (Ghidra, non-matching)
// GLOBAL DAT_005b9378 undefined4 *
// GLOBAL DAT_005b937c undefined4
// GLOBAL DAT_005b9380 undefined4
// GLOBAL DAT_005b9384 undefined4

undefined4 func_005B9378(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9378;
  DAT_005b9378[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = DAT_005b937c;
  return func_005902C0(puVar1);
}

