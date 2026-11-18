#include "ghidra_types.h"

extern int func_0010ADF0(void);
extern int func_0010AE00(int param_1,int param_2);
extern int func_0010AE3C(uint *param_1,undefined4 param_2,undefined1 param_3);
extern int func_0010AEF8(void);
extern int func_0010AF08(void);
extern int func_0010AF18(void);
extern uint DAT_00108934;
extern undefined4 *DAT_00108938;

// USA 001088D4 <- EU 001088D4 (Ghidra, non-matching)
// GLOBAL DAT_00108934 uint
// GLOBAL DAT_00108938 undefined4 *

uint func_001088D4(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = func_0010ADF0();
  uVar3 = DAT_00108934;
  if (iVar1 != 0) {
    uVar4 = *DAT_00108938;
    puVar2 = (uint *)func_0010AF18();
    uVar3 = func_0010AE3C(puVar2,uVar4,0);
    if ((-1 < (int)uVar3) && (iVar1 = func_0010AEF8(), iVar1 != 0)) {
      iVar1 = func_0010AF08();
      func_0010AE00(iVar1 + 0x30,0);
    }
  }
  return uVar3;
}

