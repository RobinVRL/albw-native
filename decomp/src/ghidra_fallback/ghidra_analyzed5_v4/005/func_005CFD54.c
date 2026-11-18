#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int DAT_005cfd80;
extern undefined4 *DAT_005cfd84;

// USA 005CFD54 <- EU 005CFD2C (Ghidra, non-matching)
// GLOBAL DAT_005cfd80 int
// GLOBAL DAT_005cfd84 undefined4 *

void func_005CFD54(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  iVar1 = DAT_005cfd80;
  *(undefined4 *)(DAT_005cfd80 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005cfd84;
  *DAT_005cfd84 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + -4) = 0xff;
  *(undefined1 *)((int)puVar2 + -0xf) = 0x48;
  *(undefined1 *)((int)puVar2 + -0xe) = 0xff;
  *(undefined1 *)((int)puVar2 + -0xd) = 0xff;
  uVar3 = func_00114608(0,0x48);
  puVar2[-3] = (int)uVar3;
  return;
}

