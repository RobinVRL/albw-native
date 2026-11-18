#include "ghidra_types.h"

extern int func_003DF3BC(int param_1,int param_2,uint *param_3);
extern int DAT_003e11cc;

// USA 003E11D0 <- EU 003E11B0 (Ghidra, non-matching)
// GLOBAL DAT_003e11cc int

bool func_003E11D0(int param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = func_003DF3BC(DAT_003e11cc,**(uint **)(param_1 + 0x68) & 0xff,param_2);
  return bVar1;
}

