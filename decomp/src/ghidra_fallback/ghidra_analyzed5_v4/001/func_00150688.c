#include "ghidra_types.h"

extern int func_00435BE8(int param_1,undefined2 *param_2);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int *DAT_001506f4;

// USA 00150688 <- EU 00150688 (Ghidra, non-matching)
// GLOBAL DAT_001506f4 int *

undefined4 func_00150688(undefined4 param_1,int param_2,undefined2 *param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    bVar1 = *(byte *)(param_2 + 0x20);
    func_00435BE8(param_2 + 0x20,param_3);
    piVar2 = DAT_001506f4;
    uVar3 = (ushort)param_3[2] & 0xff;
    if (bVar1 != uVar3) {
      *(char *)(param_2 + 0x20) = (char)param_3[2];
      func_004A9120(*piVar2,param_2);
      return func_004A8BFC(*piVar2,param_2,uVar3);
    }
  }
  return 0;
}

