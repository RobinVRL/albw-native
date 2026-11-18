#include "ghidra_types.h"

extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int DAT_0022f004;
extern undefined4 DAT_0022f008;
extern float DAT_0022f00c;
extern float DAT_0022f010;

// USA 0022EF30 <- EU 0022EF30 (Ghidra, non-matching)
// GLOBAL DAT_0022f004 int
// GLOBAL DAT_0022f008 undefined4
// GLOBAL DAT_0022f00c float
// GLOBAL DAT_0022f010 float

uint func_0022EF30(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  
  if ((2 < param_2 - 6) && (param_2 != 0)) {
    uVar2 = (ushort)DAT_0022f008;
    if (*(short *)(DAT_0022f004 + param_1) < 1) {
      if (*(char *)(param_3 + 0x24) == '\x03' || *(char *)(param_3 + 0x24) == '\x01') {
        func_004FBA18(param_1,8,0xff,-1,0x19,0,uVar2,DAT_0022f010,DAT_0022f00c);
      }
      else {
        func_004FBA18(param_1,9,0xff,-1,0x19,0,uVar2,DAT_0022f010,DAT_0022f00c);
      }
    }
    else {
      uVar1 = param_2 & 0xff;
      bVar4 = 0x1d < uVar1;
      bVar3 = uVar1 != 0x1e;
      if (bVar3) {
        uVar1 = uVar1 - 0xe;
        bVar4 = 2 < uVar1;
      }
      if (!bVar4 || (!bVar3 || uVar1 == 3)) {
        func_004FC218(param_1,'\a',-1,uVar2);
      }
    }
  }
  *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x80;
  return param_2;
}

