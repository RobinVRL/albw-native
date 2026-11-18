#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115224(undefined4 *param_1,undefined4 *param_2);

// USA 0053AB8C <- EU 0053AB64 (Ghidra, non-matching)

void func_0053AB8C(int param_1,int param_2)

{
  func_001151EC((undefined4 *)(param_2 + 0x14),(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined1 *)(param_2 + 0x6c) = *(undefined1 *)(param_1 + 0x6c);
  *(undefined1 *)(param_2 + 0x6d) = *(undefined1 *)(param_1 + 0x6d);
  func_00115224((undefined4 *)(param_2 + 0x70),(undefined4 *)(param_1 + 0x70));
  func_00115224((undefined4 *)(param_2 + 0xb0),(undefined4 *)(param_1 + 0xb0));
  *(undefined1 *)(param_2 + 0xf0) = *(undefined1 *)(param_1 + 0xf0);
  *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_2 + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_2 + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(param_2 + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_2 + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  func_001151EC((undefined4 *)(param_2 + 0x120),(undefined4 *)(param_1 + 0x120));
  func_001151EC((undefined4 *)(param_2 + 0x194),(undefined4 *)(param_1 + 0x194));
  func_001151EC((undefined4 *)(param_2 + 0x1c4),(undefined4 *)(param_1 + 0x1c4));
  *(undefined1 *)(param_2 + 0x1f8) = *(undefined1 *)(param_1 + 0x1f8);
  *(undefined1 *)(param_2 + 0x1f9) = *(undefined1 *)(param_1 + 0x1f9);
  func_00115224((undefined4 *)(param_2 + 0x1fc),(undefined4 *)(param_1 + 0x1fc));
  func_00115224((undefined4 *)(param_2 + 0x23c),(undefined4 *)(param_1 + 0x23c));
  *(undefined1 *)(param_2 + 0x27c) = *(undefined1 *)(param_1 + 0x27c);
  *(undefined4 *)(param_2 + 0x280) = *(undefined4 *)(param_1 + 0x280);
  *(undefined4 *)(param_2 + 0x284) = *(undefined4 *)(param_1 + 0x284);
  func_00115224((undefined4 *)(param_2 + 0x288),(undefined4 *)(param_1 + 0x288));
  *(undefined4 *)(param_2 + 0x2c8) = *(undefined4 *)(param_1 + 0x2c8);
  return;
}

