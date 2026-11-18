#include "ghidra_types.h"

extern int func_0028D7A4(int param_1,float fparam_0);
extern int func_0053F5E0(int param_1);
extern float DAT_001dbe40;

// USA 001DBDD4 <- EU 001DBDD4 (Ghidra, non-matching)
// GLOBAL DAT_001dbe40 float

undefined4 func_001DBDD4(int param_1)

{
  char cVar1;
  int iVar2;
  float fparam_0;
  
  iVar2 = *(int *)(param_1 + 0x10);
  cVar1 = func_0053F5E0(*(int *)(iVar2 + 0x614));
  if ((cVar1 != '\v') && (cVar1 = func_0053F5E0(*(int *)(iVar2 + 0x614)), cVar1 != '\x11')) {
    return 0;
  }
  fparam_0 = DAT_001dbe40;
  func_0028D7A4(*(int *)(iVar2 + 0x600) + 0x3c,DAT_001dbe40);
  return func_0028D7A4(*(int *)(iVar2 + 0x600) + 0x5c,fparam_0);
}

