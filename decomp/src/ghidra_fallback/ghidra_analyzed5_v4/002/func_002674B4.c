#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0035B084(undefined4 param_1);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_0036C42C(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_004FD238(int param_1,undefined1 param_2);
extern int func_0053A554(int param_1,float *param_2,float *param_3);
extern int func_00588F08(int param_1);
extern float DAT_002675dc;
extern undefined4 *DAT_002675e0;
extern undefined4 *DAT_002675e4;
extern int *DAT_002675e8;
extern float *DAT_002675ec;

// USA 002674B4 <- EU 002674DC (Ghidra, non-matching)
// GLOBAL DAT_002675dc float
// GLOBAL DAT_002675e0 undefined4 *
// GLOBAL DAT_002675e4 undefined4 *
// GLOBAL DAT_002675e8 int *
// GLOBAL DAT_002675ec float *

undefined4 func_002674B4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  
  func_004FC07C(param_1,7,0xffffffff,0);
  func_004FB4C4(param_1,DAT_002675dc);
  *(undefined4 *)(param_1 + 0xbe8) = 0;
  *(undefined4 *)(param_1 + 0xbec) = 0;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7b;
  func_004FD038(param_1 + 0x5a8,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffff7;
  func_004FD238(param_1 + 0x5a8,0);
  iVar1 = param_1 + 0x9ac;
  func_0036C42C(iVar1);
  func_0036C2B8(iVar1,*DAT_002675e0);
  func_0036C2B8(iVar1,*DAT_002675e4);
  puVar2 = (undefined4 *)func_00588F08(*DAT_002675e8);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  *(undefined4 *)(param_1 + 0xabc) = puVar2[2];
  *(undefined4 *)(param_1 + 0xab4) = uVar3;
  *(undefined4 *)(param_1 + 0xab8) = uVar4;
  *(undefined1 *)(param_1 + 0xaa0) = 2;
  *(undefined4 **)(param_1 + 0x9d4) = (undefined4 *)(param_1 + 0xab4);
  pfVar5 = (float *)(param_1 + 0x984);
  func_0053A554(param_1,pfVar5,DAT_002675ec);
  func_00115C54(pfVar5,pfVar5,(float *)(param_1 + 0x3d0));
  return func_0035B084(2);
}

