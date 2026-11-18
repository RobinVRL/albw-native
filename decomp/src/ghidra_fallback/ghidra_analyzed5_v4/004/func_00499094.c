#include "ghidra_types.h"

extern undefined4 *DAT_00499098;
extern undefined4 *DAT_0049909c;

// USA 00499094 <- EU 0049906C (Ghidra, non-matching)
// GLOBAL DAT_00499098 undefined4 *
// GLOBAL DAT_0049909c undefined4 *

void * func_00499094(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00499098;
  *(undefined4 *)(param_1 + 0x14) = *DAT_00499098;
  *(undefined4 *)(param_1 + 0x18) = *puVar1;
  *(undefined4 *)(param_1 + 0x1c) = *puVar1;
  *(undefined4 *)(param_1 + 0x20) = *DAT_0049909c;
  return (void *)param_1;
}

