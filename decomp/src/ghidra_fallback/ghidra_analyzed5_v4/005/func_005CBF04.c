#include "ghidra_types.h"

extern undefined4 *DAT_005cbf00;
extern undefined4 *DAT_005cbf04;

// USA 005CBF04 <- EU 005CBEDC (Ghidra, non-matching)
// GLOBAL DAT_005cbf00 undefined4 *
// GLOBAL DAT_005cbf04 undefined4 *

void func_005CBF04(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cbf00;
  *DAT_005cbf00 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cbf04;
  *DAT_005cbf04 = 0;
  puVar1[1] = 0;
  return;
}

