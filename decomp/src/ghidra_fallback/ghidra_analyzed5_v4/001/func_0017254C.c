#include "ghidra_types.h"

extern int func_0017222C(int param_1,uint param_2,undefined4 param_3,undefined4 param_4);
extern int func_00429F94(float fparam_0);
extern float DAT_001725a8;

// USA 0017254C <- EU 0017254C (Ghidra, non-matching)
// GLOBAL DAT_001725a8 float

undefined4 func_0017254C(int param_1)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x2f4);
  if (3 < bVar2) {
    bVar2 = 0;
    *(undefined1 *)(param_1 + 0x2f4) = 0;
  }
  if (bVar2 == 3) {
    return func_0017222C(param_1,0,0xffffffff,0xffffffff);
  }
  iVar1 = func_00429F94(DAT_001725a8);
  return func_0017222C(param_1,0,iVar1,0);
}

