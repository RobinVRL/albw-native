#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_00111A64(uint *param_1);
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_004A143C(byte *param_1,uint param_2);
extern undefined4 *DAT_001df5bc;
extern uint DAT_001df5c0;

// USA 001DF478 <- EU 001DF478 (Ghidra, non-matching)
// GLOBAL DAT_001df5bc undefined4 *
// GLOBAL DAT_001df5c0 uint

void func_001DF478(byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  param_1[0xde0] = 0;
  param_1[0xde1] = 0;
  param_1[0xde2] = 0;
  param_1[0xde3] = 0;
  param_1[0xde4] = 0;
  param_1[0xde5] = 0;
  param_1[0xde6] = 0;
  param_1[0xde7] = 0;
  param_1[0xde8] = 0;
  param_1[0xde9] = 0;
  param_1[0xdea] = 0;
  param_1[0xdeb] = 0;
  param_1[0xdec] = 0;
  param_1[0xded] = 0;
  param_1[0xdee] = 0;
  param_1[0xdef] = 0;
  param_1[0xdf0] = 0;
  param_1[0xdf1] = 0;
  param_1[0xdf2] = 0;
  param_1[0xdf3] = 0;
  param_1[0xdf4] = 0;
  param_1[0xdf5] = 0;
  param_1[0xdf6] = 0;
  param_1[0xdf7] = 0;
  param_1[0xdf8] = 0;
  param_1[0xdf9] = 0;
  param_1[0xdfa] = 0;
  param_1[0xdfb] = 0;
  func_001164F4((undefined4 *)(param_1 + 0xc0),0x1a0);
  param_1[0xc0] = 0xc;
  param_1[0xc1] = 0xc;
  param_1[0xe7] = 2;
  param_1[0x188] = 0xff;
  param_1[0x189] = 0xff;
  param_1[0x18a] = 0xff;
  func_001164F4((undefined4 *)param_1,0x40);
  param_1[0] = 8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  pbVar4 = param_1 + 0x260;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  func_001164F4((undefined4 *)pbVar4,0x100);
  if (param_2 == 0xdead) {
    uVar1 = func_00111A64((uint *)*DAT_001df5bc);
    *(short *)pbVar4 = (short)uVar1;
  }
  else {
    *(short *)pbVar4 = (short)param_2;
  }
  pbVar4 = param_1 + 0x360;
  func_001164F4((undefined4 *)pbVar4,0x200);
  iVar2 = 0;
  iVar3 = 0;
  do {
    pbVar4[iVar2 + 0xf0] = (byte)iVar2;
    iVar3 = iVar3 + 2;
    pbVar4[iVar2 + 0xf1] = (byte)iVar2 + 1;
    iVar2 = iVar2 + 2;
  } while (iVar3 < 0x14);
  func_00110490((undefined4 *)(param_1 + 0x40),0x80);
  iVar2 = 0;
  do {
    func_001164F4((undefined4 *)(param_1 + iVar2 * 0x40 + 0x560),0x40);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  func_001164F4((undefined4 *)(param_1 + 0xd60),0x20);
  func_001164F4((undefined4 *)(param_1 + 0xd80),0x60);
  uVar1 = func_004A143C(param_1,DAT_001df5c0);
  *(uint *)(param_1 + 0xdfc) = uVar1;
  return;
}

