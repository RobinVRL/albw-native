#include "ghidra_types.h"

extern int func_00100C38(uint param_1);
extern int func_00100E50(byte param_1);
extern int func_00101458(undefined4 param_1);
extern int func_00101528(void);

// USA 00100C18 <- EU 00100C18 (Ghidra, non-matching)

undefined4 func_00100C18(void)

{
  int iVar1;
  undefined4 uVar2;
  
  func_00101528();
  func_00100E50(0);
  iVar1 = func_00100C38(0);
  uVar2 = func_00101458(iVar1);
  return uVar2;
}

