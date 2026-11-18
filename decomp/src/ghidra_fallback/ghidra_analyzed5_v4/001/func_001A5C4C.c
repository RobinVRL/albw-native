#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern undefined8 func_0058AB74(int param_1);
extern float fRam001a5d1c;
extern undefined4 uRam001a5d18;
extern undefined4 uRam001a5d20;

// USA 001A5C4C <- EU 001A5C4C (Ghidra, non-matching)
// GLOBAL UNK_001a5d18 undefined4
// GLOBAL UNK_001a5d1c float
// GLOBAL UNK_001a5d20 undefined4

void func_001A5C4C(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  uVar7 = func_0058AB74(param_1);
  if ((int)uVar7 == 5) {
    func_004FABDC(param_1,0xb,10,0);
  }
  else {
    func_004FABDC(param_1,0xb,0xffffffff,0);
  }
  uVar1 = uRam001a5d18;
  *(undefined4 *)(param_1 + 0x8e4) = 0x50;
  *(undefined4 *)(param_1 + 0x8e8) = uVar1;
  fVar6 = fRam001a5d1c;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  uVar1 = uRam001a5d20;
  iVar4 = (int)((ulonglong)uVar3 * 0x1e >> 0x20) + 0x3c;
  *(int *)(param_1 + 0x8f0) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x8f4) = uVar1;
  }
  else {
    fVar5 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8f4) = fVar6 / fVar5;
  }
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  *(undefined4 *)(param_1 + 0x8f8) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  return;
}

