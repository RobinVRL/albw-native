#include "ghidra_types.h"

extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int DAT_00157be4;
extern undefined4 DAT_00157be8;
extern float DAT_00157bec;
extern float DAT_00157bf0;

// USA 00157B50 <- EU 00157B54 (Ghidra, non-matching)
// GLOBAL DAT_00157be4 int
// GLOBAL DAT_00157be8 undefined4
// GLOBAL DAT_00157bec float
// GLOBAL DAT_00157bf0 float

uint func_00157B50(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  if ((param_2 == 3) &&
     (cVar1 = *(char *)(param_1 + 0x8c0), (cVar1 == '\x04' || cVar1 == '\x05') || cVar1 == '\x06'))
  {
    return 0;
  }
  if (*(short *)(DAT_00157be4 + param_1) < 1) {
    uVar2 = param_2 & 0xff;
    bVar4 = 0x1d < uVar2;
    bVar3 = uVar2 != 0x1e;
    if (bVar3) {
      uVar2 = uVar2 - 0xe;
      bVar4 = 2 < uVar2;
    }
    if (!bVar4 || (!bVar3 || uVar2 == 3)) {
      func_004FBA18(param_1,0x10,0x11,-1,0x11,0,(ushort)DAT_00157be8,DAT_00157bf0,DAT_00157bec);
    }
  }
  return param_2;
}

