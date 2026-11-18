#include "ghidra_types.h"

extern uint *DAT_004137e4;
extern int DAT_004137e8;
extern int DAT_004137ec;

// USA 004137E4 <- EU 004137C4 (Ghidra, non-matching)
// GLOBAL DAT_004137e4 uint *
// GLOBAL DAT_004137e8 int
// GLOBAL DAT_004137ec int

uint func_004137E4(void)

{
  uint uVar1;
  
  uVar1 = *DAT_004137e4 * DAT_004137e8 + DAT_004137ec;
  *DAT_004137e4 = uVar1;
  return uVar1 >> 0x10;
}

