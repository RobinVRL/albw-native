#include "ghidra_types.h"

extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_0058A204(int param_1,int param_2);
extern undefined4 DAT_0067457c;
extern float DAT_00674580;
extern float DAT_00674584;

// USA 006744F0 <- EU 006744C8 (Ghidra, non-matching)
// GLOBAL DAT_0067457c undefined4
// GLOBAL DAT_00674580 float
// GLOBAL DAT_00674584 float

uint func_006744F0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  if (*(short *)(param_1 + 0x508) < 1) {
    uVar1 = param_2 & 0xff;
    bVar4 = 0x1d < uVar1;
    bVar3 = uVar1 != 0x1e;
    if (bVar3) {
      uVar1 = uVar1 - 0xe;
      bVar4 = 2 < uVar1;
    }
    if (!bVar4 || (!bVar3 || uVar1 == 3)) {
      iVar2 = func_0058A204(param_3,0);
      if (iVar2 == 0) {
        func_004FBA18(param_1,6,7,-1,0x14,0,(ushort)DAT_0067457c,DAT_00674584,DAT_00674580);
      }
      else {
        func_004FBA18(param_1,8,9,-1,0x14,1,(ushort)DAT_0067457c,DAT_00674584,DAT_00674580);
      }
    }
  }
  *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x80;
  return param_2;
}

