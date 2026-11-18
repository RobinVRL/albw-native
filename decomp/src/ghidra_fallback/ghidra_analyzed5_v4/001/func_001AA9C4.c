#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB384(int param_1,float fparam_0);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0065AAC8(undefined4 *param_1,undefined1 param_2);
extern float fRam001aaa58;

// USA 001AA9C4 <- EU 001AA9C4 (Ghidra, non-matching)
// GLOBAL UNK_001aaa58 float

undefined4 func_001AA9C4(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (0x23 < *(int *)(param_1 + 0x904)) {
    uVar2 = func_0058AB74(param_1);
    if ((int)uVar2 == 1) {
      return func_004FABDC(param_1,2,0xffffffff,0);
    }
    uVar2 = func_0058AB74(param_1);
    if (((int)uVar2 == 2) && (iVar1 = func_0058A8F0(param_1), iVar1 != 0)) {
      func_004FABDC(param_1,3,2,0);
      func_004FB384(param_1,fRam001aaa58);
      func_0065AAC8((undefined4 *)(param_1 + 0x904),5);
    }
  }
  return 0;
}

