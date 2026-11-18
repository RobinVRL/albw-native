#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern int DAT_0058ae98;
extern int *DAT_0058ae9c;
extern undefined1 *DAT_0058aea0;

// USA 0058ADE0 <- EU 0058ADB8 (Ghidra, non-matching)
// GLOBAL DAT_0058ae98 int
// GLOBAL DAT_0058ae9c int *
// GLOBAL DAT_0058aea0 undefined1 *

undefined1 * func_0058ADE0(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (((*(uint *)(DAT_0058ae98 + 0x24) & 1) == 0) &&
     (iVar2 = func_00100174(DAT_0058ae9c), puVar1 = DAT_0058aea0, iVar2 != 0)) {
    DAT_0058aea0[1] = 0x80;
    puVar1[2] = 0x80;
    *puVar1 = 0x80;
    puVar1[3] = 0x80;
  }
  puVar1 = DAT_0058aea0;
  uVar3 = 0;
  if (*(byte *)(param_1 + 0xa8) != 0) {
    do {
      iVar2 = *(int *)(param_1 + uVar3 * 0xc);
      if ((iVar2 != 0) && (0 < *(int *)(*(int *)(iVar2 + 0x20) + 4))) {
        puVar4 = (undefined1 *)func_00584CA8(iVar2,0,param_2);
        puVar1[3] = *puVar4;
        puVar1[2] = puVar4[1];
        puVar1[1] = puVar4[2];
        *puVar1 = puVar4[3];
        return DAT_0058aea0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0xa8));
  }
  *DAT_0058aea0 = 0x80;
  puVar1[1] = 0x80;
  puVar1[2] = 0x80;
  puVar1[3] = 0x80;
  return DAT_0058aea0;
}

