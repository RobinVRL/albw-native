#include "ghidra_types.h"

extern undefined4 *DAT_005b93f8;
extern undefined4 DAT_005b93fc;

// USA 005B9410 <- EU 005B93E8 (Ghidra, non-matching)
// GLOBAL DAT_005b93f8 undefined4 *
// GLOBAL DAT_005b93fc undefined4

void func_005B9410(void)

{
  *DAT_005b93f8 = DAT_005b93fc;
  return;
}

