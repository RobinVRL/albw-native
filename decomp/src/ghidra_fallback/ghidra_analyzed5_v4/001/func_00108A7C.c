#include "ghidra_types.h"

extern int func_0010ADF0(void);
extern int func_0010AEA8(uint *param_1);
extern int func_0010AF18(void);
extern uint DAT_00108aa0;

// USA 00108A7C <- EU 00108A7C (Ghidra, non-matching)
// GLOBAL DAT_00108aa0 uint

uint func_00108A7C(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = func_0010ADF0();
  if (iVar1 != 0) {
    puVar2 = (uint *)func_0010AF18();
    uVar3 = func_0010AEA8(puVar2);
    return uVar3;
  }
  return DAT_00108aa0;
}

