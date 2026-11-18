#include "ghidra_types.h"

extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_0058A204(int param_1,int param_2);
extern undefined4 DAT_00263e68;
extern float DAT_00263e6c;
extern float DAT_00263e70;

// USA 00263D84 <- EU 00263DAC (Ghidra, non-matching)
// GLOBAL DAT_00263e68 undefined4
// GLOBAL DAT_00263e6c float
// GLOBAL DAT_00263e70 float

uint func_00263D84(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar3 = (param_2 & 0xff) - 0xe;
  if (*(short *)(param_1 + 0x508) < 1) {
    uVar1 = param_2 & 0xff;
    bVar5 = 0x1d < uVar1;
    if (uVar1 != 0x1e) {
      bVar5 = 2 < uVar3;
    }
    if (!bVar5 || (uVar1 == 0x1e || uVar3 == 3)) {
      iVar2 = func_0058A204(param_3,0);
      if (iVar2 == 0) {
        func_004FBA18(param_1,0xb,0xc,-1,0x10,0,(ushort)DAT_00263e68,DAT_00263e70,DAT_00263e6c);
      }
      else {
        func_004FBA18(param_1,9,10,-1,0x10,1,(ushort)DAT_00263e68,DAT_00263e70,DAT_00263e6c);
      }
    }
  }
  uVar1 = param_2 & 0xff;
  bVar5 = 0x1d < uVar1;
  bVar4 = uVar1 == 0x1e;
  if (!bVar4) {
    bVar5 = 2 < uVar3;
  }
  if (!bVar5 || (bVar4 || uVar3 == 3)) {
    uVar1 = 0xf;
  }
  if (bVar5 && (!bVar4 && uVar3 != 3)) {
    uVar1 = param_2;
  }
  return uVar1;
}

