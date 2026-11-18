#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern undefined4 DAT_004200e8;
extern int DAT_004200ec;

// USA 00420074 <- EU 00420054 (Ghidra, non-matching)
// GLOBAL DAT_004200e8 undefined4
// GLOBAL DAT_004200ec int

undefined4 * func_00420074(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = DAT_004200e8;
  if ((param_3 & 1) == 0) {
    *param_2 = 0;
    param_2[1] = uVar1;
    iVar2 = DAT_004200ec;
    param_2[2] = 0;
    param_2[3] = iVar2;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0x1000;
    param_2[7] = iVar2 + -0x150000;
    uVar3 = *(uint *)(param_1 + 0xc);
    func_00110D44(param_2 + 8,*(byte **)(param_1 + 8),uVar3);
    param_2 = (undefined4 *)((uVar3 & 0xfffffffc) + (int)(param_2 + 8));
  }
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined4 *)(param_1 + 0x60c) = 0;
  *(undefined1 *)(param_1 + 0x5f8) = 0;
  *(undefined1 *)(param_1 + 0x5f9) = 0;
  *(undefined1 *)(param_1 + 0x5fa) = 0;
  *(undefined1 *)(param_1 + 0x5fb) = 0;
  return param_2;
}

