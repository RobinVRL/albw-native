#include "ghidra_types.h"

extern int func_003CB5F0(undefined4 *param_1,uint param_2,int param_3);
extern undefined4 *DAT_0032313c;

// USA 00323158 <- EU 00323134 (Ghidra, non-matching)
// GLOBAL DAT_0032313c undefined4 *

undefined4 func_00323158(undefined4 param_1,uint param_2,int param_3)

{
  return func_003CB5F0(DAT_0032313c,param_2,param_3);
}

