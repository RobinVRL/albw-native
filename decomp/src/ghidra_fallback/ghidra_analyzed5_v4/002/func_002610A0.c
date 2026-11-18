#include "ghidra_types.h"

extern int func_0010DA24(int param_1,undefined4 param_2);
extern int func_0019B04C(uint param_1);
extern int func_0019B064(int param_1,int param_2,undefined4 param_3);
extern int func_002E0168(uint param_1);
extern int func_005808BC(int *param_1,undefined4 *param_2);

// USA 002610A0 <- EU 002610C8 (Ghidra, non-matching)

undefined4 func_002610A0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define auStack_20 ((undefined4 *)(albw_frame + 0x0))
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  func_0010DA24((int)auStack_20,param_2);
  uVar2 = 0;
  do {
    iVar1 = func_002E0168(uVar2);
    if ((iVar1 == param_1) && (iVar1 = func_0019B04C(uVar2), iVar1 != 0)) {
      func_0019B064(iVar1,0,0);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x280);
  return func_005808BC(aiStack_18,auStack_20);
}

