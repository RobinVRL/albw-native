#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0036BFD0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FCDF4(int param_1,int param_2);
extern float fRam0032a8b8;
extern undefined4 uRam0032a8bc;
extern undefined4 *puRam0032a8c0;
extern float *DAT_0032a8b0;
extern undefined4 DAT_0032a8b4;

// USA 0032A7E8 <- EU 0032A7C4 (Ghidra, non-matching)
// GLOBAL DAT_0032a8b0 float *
// GLOBAL DAT_0032a8b4 undefined4
// GLOBAL UNK_0032a8b8 float
// GLOBAL UNK_0032a8bc undefined4
// GLOBAL UNK_0032a8c0 undefined4 *

void func_0032A7E8(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0xc93) = 1;
  func_00115C54((float *)(param_1 + 0xc24),(float *)(param_1 + 8),DAT_0032a8b0);
  *(undefined4 *)(param_1 + 0xab4) = 0xb;
  *(undefined1 *)(param_1 + 0xb94) = 2;
  *(float **)(param_1 + 0xac8) = (float *)(param_1 + 0xc24);
  func_0036BFD0(param_1 + 0xaa0,0x1e,0x1e);
  *(undefined4 *)(param_1 + 0xc50) = DAT_0032a8b4;
  func_004CF478(*(int *)(param_1 + 0xa88),0);
  if (*(int *)(param_1 + 0xa80) != 0) {
    func_004CF478(*(int *)(param_1 + 0xa80),0);
  }
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffd;
  func_004FCDF4(param_1 + 0x5a8,0);
  *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0xc) + fRam0032a8b8;
  uVar1 = uRam0032a8bc;
  *(undefined4 *)(param_1 + 0x3dc) = uRam0032a8bc;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffffce;
  func_004FCD5C(param_1 + 0x5a8,0);
  *(undefined4 *)(param_1 + 0x950) = *puRam0032a8c0;
  return;
}

