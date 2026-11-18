#include "ghidra_types.h"

extern int func_0010818C(undefined4 *param_1);

// USA 00104164 <- EU 00104164 (Ghidra, non-matching)

undefined4 func_00104164(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  func_0010818C(param_1 + 1);
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xfffffffe;
  }
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar3;
  return uVar2;
}

