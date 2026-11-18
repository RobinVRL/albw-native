#include "ghidra_types.h"

extern int func_00297298(int param_1,int param_2);
extern int func_002EEB98(int param_1);
extern int func_003615F0(int param_1);
extern int func_0036C058(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_003A42B0(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00687EA0(undefined4 *param_1);
extern undefined4 DAT_002f4a2c;
extern undefined4 DAT_002f4a30;
extern undefined4 DAT_002f4a34;
extern int *DAT_002f4a38;
extern int *DAT_002f4a3c;
extern int *DAT_002f4a40;

// USA 002F493C <- EU 002F4918 (Ghidra, non-matching)
// GLOBAL DAT_002f4a2c undefined4
// GLOBAL DAT_002f4a30 undefined4
// GLOBAL DAT_002f4a34 undefined4
// GLOBAL DAT_002f4a38 int *
// GLOBAL DAT_002f4a3c int *
// GLOBAL DAT_002f4a40 int *

undefined4 func_002F493C(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x978) = 0x2a;
  *(undefined4 *)(param_1 + 0xc28) = 0;
  *(undefined1 *)(param_1 + 0xa58) = 3;
  *(int *)(param_1 + 0x990) = param_1 + 0xd18;
  func_0036C058(param_1 + 0x964,0x1e,0,0);
  uVar2 = DAT_002f4a2c;
  *(undefined4 *)(param_1 + 0xb1c) = 0x1e;
  *(undefined4 *)(param_1 + 0xb20) = uVar2;
  uVar2 = DAT_002f4a30;
  *(undefined4 *)(param_1 + 0xb18) = 0;
  *(undefined4 *)(param_1 + 0xe1c) = uVar2;
  func_002EEB98(param_1);
  *(undefined1 *)(param_1 + 0xe0e) = 1;
  *(undefined4 *)(param_1 + 0x3dc) = uVar2;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  uVar2 = DAT_002f4a34;
  *(undefined4 *)(param_1 + 0xb10) = 0x4b0;
  *(undefined4 *)(param_1 + 0xb14) = uVar2;
  *(undefined4 *)(param_1 + 0xb0c) = 0;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  func_003A42B0(param_1 + 0x8ec,0);
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_002f4a38 + 0x3dbbc,*(uint *)(param_1 + 0xca8));
  puVar1 = func_00687EA0(puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0xb8] = puVar1[0xb8] & 0xfffffffd;
    func_003615F0(*DAT_002f4a3c);
  }
  return func_00297298(*DAT_002f4a40,10);
}

