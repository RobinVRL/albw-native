#include "ghidra_types.h"

extern int func_00232540(undefined4 *param_1);
extern int func_0034B980(int param_1);
extern undefined4 DAT_0034c720;
extern undefined4 DAT_0034c724;

// USA 0034C698 <- EU 0034C674 (Ghidra, non-matching)
// GLOBAL DAT_0034c720 undefined4
// GLOBAL DAT_0034c724 undefined4

undefined4 * func_0034C698(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = func_00232540(param_1);
  *puVar2 = DAT_0034c720;
  iVar4 = 10;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = param_2;
  if (0 < (int)(param_2 - 1)) {
    if ((param_2 & 1) == 0) {
      iVar4 = 100;
    }
    for (iVar3 = (int)(param_2 - 1) >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      iVar4 = iVar4 * 100;
    }
  }
  puVar2[0xc] = iVar4 + -1;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  uVar1 = DAT_0034c724;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = uVar1;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  *(undefined1 *)(puVar2 + 0x16) = 1;
  func_0034B980((int)puVar2);
  return puVar2;
}

