#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010DEB0(undefined4 *param_1);
extern int func_0010FC88(int param_1,int param_2,int param_3,int param_4,uint param_5,undefined4 param_6);
extern int func_005902C0(void *param_1);
extern undefined *DAT_005eb6c0;
extern int DAT_005eb6c4;
extern undefined4 *DAT_005eb6c8;
extern undefined4 *DAT_005eb6cc;
extern undefined4 DAT_005eb6d0;
extern undefined4 DAT_005eb6d4;
extern int DAT_005eb6d8;
extern undefined4 DAT_005eb6dc;
extern undefined4 DAT_005eb6e0;
extern int DAT_005eb6e4;
extern undefined4 *DAT_005eb6e8;
extern int DAT_005eb6ec;

// USA 005EB560 <- EU 005EB538 (Ghidra, non-matching)
// GLOBAL DAT_005eb6c0 undefined *
// GLOBAL DAT_005eb6c4 int
// GLOBAL DAT_005eb6c8 undefined4 *
// GLOBAL DAT_005eb6cc undefined4 *
// GLOBAL DAT_005eb6d0 undefined4
// GLOBAL DAT_005eb6d4 undefined4
// GLOBAL DAT_005eb6d8 int
// GLOBAL DAT_005eb6dc undefined4
// GLOBAL DAT_005eb6e0 undefined4
// GLOBAL DAT_005eb6e4 int
// GLOBAL DAT_005eb6e8 undefined4 *
// GLOBAL DAT_005eb6ec int

undefined4 func_005EB560(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  func_00100118(DAT_005eb6c4,DAT_005eb6c0,0x10,0x20);
  puVar1 = DAT_005eb6cc;
  *DAT_005eb6c8 = 0;
  *puVar1 = 0;
  func_0010DEB0(puVar1);
  iVar2 = DAT_005eb6d8;
  puVar1[-0x2c] = 0;
  puVar1[-0x2b] = 0;
  puVar1[-0x2a] = 0;
  puVar1[-0x29] = 0;
  puVar1[-0x28] = 0;
  puVar1[-0x24] = 0;
  puVar1[-0x21] = 0;
  uVar3 = DAT_005eb6dc;
  puVar1[-0x20] = 0;
  puVar1[-0x1f] = 0xffffffff;
  puVar1[-0x2d] = uVar3;
  func_0010FC88((int)(puVar1 + -0x2d),0x10,iVar2,0x100,4,0);
  func_0010DEB0(puVar1 + -0x21);
  iVar2 = DAT_005eb6e4;
  puVar1[-0x1d] = 0;
  puVar1[-0x1c] = 0;
  puVar1[-0x1b] = 0;
  puVar1[-0x1a] = 0;
  puVar1[-0x19] = 0;
  puVar1[-0x15] = 0;
  puVar1[-0x12] = 0;
  puVar1[-0x11] = 0;
  puVar1[-0x10] = 0xffffffff;
  puVar1[-0x1e] = uVar3;
  func_0010FC88((int)(puVar1 + -0x1e),8,iVar2,0x100,4,0);
  func_0010DEB0(puVar1 + -0x12);
  iVar2 = DAT_005eb6ec;
  puVar1 = DAT_005eb6e8;
  DAT_005eb6e8[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0xffffffff;
  *puVar1 = uVar3;
  func_0010FC88((int)puVar1,8,iVar2,0x80,4,0);
  func_0010DEB0(puVar1 + 0xc);
  return func_005902C0(puVar1);
}

