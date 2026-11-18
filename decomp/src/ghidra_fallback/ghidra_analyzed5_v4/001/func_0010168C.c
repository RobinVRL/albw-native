#include "ghidra_types.h"

extern int func_00102588(int param_1,int param_2,int param_3,uint param_4);
extern int func_0010DEB0(undefined4 *param_1);
extern undefined4 DAT_0010172c;
extern undefined4 *DAT_00101730;
extern undefined4 *DAT_00101734;
extern undefined4 DAT_00101738;

// USA 0010168C <- EU 0010168C (Ghidra, non-matching)
// GLOBAL DAT_0010172c undefined4
// GLOBAL DAT_00101730 undefined4 *
// GLOBAL DAT_00101734 undefined4 *
// GLOBAL DAT_00101738 undefined4

void func_0010168C(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  uVar1 = param_1 - 1U & 0xfffffffc;
  puVar5 = (undefined4 *)(uVar1 + 4);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *(undefined4 *)(uVar1 + 8) = 0;
    *(undefined4 *)(uVar1 + 0xc) = 0;
    *(undefined4 *)(uVar1 + 0x10) = 0;
    *(undefined4 *)(uVar1 + 0x14) = 0;
    *(undefined4 *)(uVar1 + 0x18) = 0;
    *(undefined4 *)(uVar1 + 0x1c) = 0;
    *(undefined4 *)(uVar1 + 0x58) = 0;
    *(undefined4 *)(uVar1 + 0x5c) = 0;
    *(undefined4 *)(uVar1 + 0x60) = 0;
    *(undefined4 *)(uVar1 + 100) = 0xffffffff;
    *puVar5 = DAT_0010172c;
    func_00102588((int)puVar5,uVar1 + 0x68,(param_1 + param_2) - (uVar1 + 0x68),0);
    func_0010DEB0((undefined4 *)(uVar1 + 0x5c));
  }
  uVar4 = DAT_00101738;
  puVar3 = DAT_00101734;
  puVar2 = DAT_00101730;
  *DAT_00101730 = puVar5;
  *puVar3 = uVar4;
  puVar3[1] = puVar5;
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined1 *)((int)puVar3 + 9) = 0;
  *(undefined1 *)((int)puVar3 + 10) = 0;
  puVar2[1] = puVar3;
  return;
}

