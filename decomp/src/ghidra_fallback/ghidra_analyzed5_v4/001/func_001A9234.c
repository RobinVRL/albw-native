#include "ghidra_types.h"

extern void func_001A9468(int param_1);
extern float func_004F898C(void);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined4 DAT_001a92c0;
extern undefined4 DAT_001a92c4;
extern undefined4 DAT_001a92c8;

// USA 001A9234 <- EU 001A9234 (Ghidra, non-matching)
// GLOBAL DAT_001a92c0 undefined4
// GLOBAL DAT_001a92c4 undefined4
// GLOBAL DAT_001a92c8 undefined4

void func_001A9234(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  
  *(undefined4 *)(param_1 + 0x8f0) = DAT_001a92c0;
  uVar1 = DAT_001a92c4;
  *(undefined4 *)(param_1 + 0x8f8) = 200;
  *(undefined4 *)(param_1 + 0x8fc) = uVar1;
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  uVar1 = DAT_001a92c8;
  *(undefined4 *)(param_1 + 0x904) = 0xf;
  *(undefined4 *)(param_1 + 0x908) = uVar1;
  *(undefined4 *)(param_1 + 0x900) = 0;
  fVar2 = func_004F898C();
  *(float *)(param_1 + 0x3e0) = fVar2;
  func_001A9468(param_1);
  *(float *)(param_1 + 0x90c) = fVar2;
  *(undefined4 *)(param_1 + 0x910) = in_s1;
  *(undefined4 *)(param_1 + 0x914) = in_s2;
  func_004FABDC(param_1,1,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x920) = 0;
  return;
}

