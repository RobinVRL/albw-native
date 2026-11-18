#include "ghidra_types.h"

extern int func_001164F4(undefined4 *param_1,uint param_2);
extern undefined4 DAT_0051cd44;
extern undefined4 DAT_0051cd48;
extern undefined4 DAT_0051cd4c;
extern int DAT_0051cd50;
extern int DAT_0051cd54;

// USA 0051CC00 <- EU 0051CBD8 (Ghidra, non-matching)
// GLOBAL DAT_0051cd44 undefined4
// GLOBAL DAT_0051cd48 undefined4
// GLOBAL DAT_0051cd4c undefined4
// GLOBAL DAT_0051cd50 int
// GLOBAL DAT_0051cd54 int

undefined4 * func_0051CC00(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = DAT_0051cd44;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = DAT_0051cd4c;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  param_1[0xc] = 0;
  param_1[5] = uVar1;
  param_1[0xd] = 0;
  param_1[0xf] = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  iVar2 = DAT_0051cd50;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0x11;
  param_1[0x11] = iVar2;
  uVar1 = DAT_0051cd48;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  param_1[0x12] = uVar1;
  param_1[0x17] = 6;
  param_1[0x18] = iVar2 + 0x88;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0xffff;
  param_1[0x19] = uVar1;
  param_1[0x1e] = 4;
  param_1[0x1f] = iVar2 + 0xb8;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0xff;
  func_001164F4((undefined4 *)((int)param_1 + 0x136),0x200);
  iVar2 = DAT_0051cd54;
  param_1[0xce] = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *(undefined1 *)((int)param_1 + 0x33d) = 0;
  *(undefined2 *)(iVar2 + (int)param_1) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  func_001164F4((undefined4 *)((int)param_1 + 0x136),0x200);
  return param_1;
}

