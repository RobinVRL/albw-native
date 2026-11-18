#include "ghidra_types.h"

extern int func_0010ADF0(void);
extern int func_0010AE00(int param_1,int param_2);
extern int func_0010AE80(uint *param_1);
extern int func_0010AEF8(void);
extern int func_0010AF08(void);
extern int func_0010AF18(void);
extern uint DAT_0010898c;

// USA 0010893C <- EU 0010893C (Ghidra, non-matching)
// GLOBAL DAT_0010898c uint

uint func_0010893C(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = func_0010ADF0();
  uVar3 = DAT_0010898c;
  if (iVar1 != 0) {
    puVar2 = (uint *)func_0010AF18();
    uVar3 = func_0010AE80(puVar2);
    if ((-1 < (int)uVar3) && (iVar1 = func_0010AEF8(), iVar1 != 0)) {
      iVar1 = func_0010AF08();
      func_0010AE00(iVar1 + 0x30,1);
    }
  }
  return uVar3;
}

