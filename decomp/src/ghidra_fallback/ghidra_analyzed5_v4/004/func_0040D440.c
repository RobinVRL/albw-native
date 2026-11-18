#include "ghidra_types.h"

extern int func_0010A8D4(int *param_1);
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);
extern int *DAT_0040d5b8;
extern int DAT_0040d5bc;
extern int DAT_0040d5c0;

// USA 0040D440 <- EU 0040D420 (Ghidra, non-matching)
// GLOBAL DAT_0040d5b8 int *
// GLOBAL DAT_0040d5bc int
// GLOBAL DAT_0040d5c0 int

void func_0040D440(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = DAT_0040d5bc;
  piVar2 = DAT_0040d5b8;
  iVar4 = *DAT_0040d5b8;
  param_1[0x2c] = iVar4;
  *piVar2 = iVar4 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x2b] = -1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  *(undefined1 *)((int)param_1 + 0x9f) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x95) = 0;
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  *(undefined1 *)((int)param_1 + 0x97) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x19] = iVar1;
  param_1[0x1a] = iVar1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = iVar1;
  param_1[0x1e] = iVar1;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = iVar1;
  param_1[0x22] = iVar1;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  iVar4 = DAT_0040d5c0;
  param_1[0x31] = iVar1;
  param_1[0x33] = iVar1;
  param_1[0x32] = iVar4;
  param_1[0x2d] = iVar1;
  param_1[0x2e] = iVar1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = iVar4;
  *(undefined1 *)((int)param_1 + 0x9a) = 0xff;
  param_1[0x35] = iVar4;
  param_1[0x39] = iVar4;
  param_1[0x36] = iVar4;
  param_1[0x37] = iVar4;
  param_1[0x38] = iVar4;
  param_1[0xc] = iVar1;
  param_1[0xd] = iVar1;
  param_1[0xe] = iVar4;
  param_1[0xf] = iVar4;
  param_1[0x10] = iVar4;
  param_1[0x11] = iVar4;
  param_1[0x12] = iVar4;
  param_1[0x14] = 0;
  param_1[0x13] = -1;
  param_1[0x15] = 0;
  param_1[0x17] = iVar1;
  param_1[0x16] = iVar1;
  param_1[0x18] = iVar4;
  if (param_1[0x3b] != 0) {
    func_001164F4((undefined4 *)param_1[0x3a],param_1[0x3b]);
  }
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  piVar2 = (int *)func_00412BB4();
  puVar3 = (undefined4 *)func_00412A3C(piVar2,6);
  puVar3[3] = piVar2[0x61];
  *(undefined1 *)(puVar3 + 1) = 3;
  puVar3[5] = param_1 + 0x26;
  puVar3[4] = iVar1;
  func_00412C68((int)piVar2,puVar3);
  func_0010A8D4((int *)(iVar1 + 4));
  *(undefined1 *)((int)param_1 + 0x9b) = 1;
  return;
}

