#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern float fRam001a5848;
extern undefined4 uRam001a5844;

// USA 001A57D8 <- EU 001A57D8 (Ghidra, non-matching)
// GLOBAL UNK_001a5844 undefined4
// GLOBAL UNK_001a5848 float

void func_001A57D8(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar4;
  
  func_004FABDC(param_1,0,0xffffffff,0);
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  iVar3 = (int)((ulonglong)uVar2 * 0x78 >> 0x20) + 0x78;
  if (iVar3 == 0) {
    in_s0 = uRam001a5844;
  }
  *(int *)(param_1 + 0x8e4) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x8e8) = in_s0;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8e8) = fRam001a5848 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined1 *)(param_1 + 0x94f) = 0;
  return;
}

