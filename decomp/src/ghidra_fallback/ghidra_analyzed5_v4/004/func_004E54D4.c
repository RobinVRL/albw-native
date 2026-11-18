#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001507A8(int param_1,int param_2);

// USA 004E54D4 <- EU 004E54AC (Ghidra, non-matching)

bool func_004E54D4(int param_1,int param_2)

{
  bool bVar1;
  
  func_00115C54((float *)(param_1 + 0x4ec),(float *)(param_1 + 0x4ec),(float *)(param_2 + 4));
  bVar1 = func_001507A8(param_1,param_2);
  return bVar1;
}

