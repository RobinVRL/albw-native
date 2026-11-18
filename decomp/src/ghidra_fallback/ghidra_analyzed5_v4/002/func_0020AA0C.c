#include "ghidra_types.h"

extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0058A8F0(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int DAT_0020aaac;

// USA 0020AA0C <- EU 0020AA0C (Ghidra, non-matching)
// GLOBAL DAT_0020aaac int

undefined4 func_0020AA0C(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = func_0058A8F0(param_1);
  iVar2 = DAT_0020aaac;
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0xd1a) == '\0') {
      return func_0065D630((undefined4 *)(param_1 + 0x8bc),0x11);
    }
    *(undefined1 *)(param_1 + 0xc54) = 1;
    sVar1 = *(short *)(iVar2 + param_1);
    if ((sVar1 < 0x51) && (uVar4 = func_0058A474(param_1,100), (int)uVar4 != 0)) {
      *(undefined4 *)(param_1 + 0xc44) = 2;
      *(uint *)(param_1 + 0xc44) = (sVar1 < 0x19) + 2;
    }
    else {
      *(undefined4 *)(param_1 + 0xc44) = 1;
    }
    func_0065D630((undefined4 *)(param_1 + 0x8bc),0x18);
  }
  return 0;
}

