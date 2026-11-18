#include "ghidra_types.h"

extern undefined4 *DAT_005b3798;
extern undefined4 *DAT_005b379c;

// USA 005B379C <- EU 005B3774 (Ghidra, non-matching)
// GLOBAL DAT_005b3798 undefined4 *
// GLOBAL DAT_005b379c undefined4 *

void func_005B379C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b3798;
  *DAT_005b3798 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b379c;
  *DAT_005b379c = 0;
  puVar1[1] = 0;
  return;
}

