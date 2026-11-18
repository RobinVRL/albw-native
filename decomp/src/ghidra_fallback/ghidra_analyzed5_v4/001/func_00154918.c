#include "ghidra_types.h"

extern int func_0058A8F0(int param_1);
extern int func_00657D18(undefined4 *param_1,undefined1 param_2);
extern float DAT_001549a8;
extern float DAT_001549ac;

// USA 00154918 <- EU 0015491C (Ghidra, non-matching)
// GLOBAL DAT_001549a8 float
// GLOBAL DAT_001549ac float

void func_00154918(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  
  if (*(int *)(param_1 + 0x40c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x920);
    fVar4 = DAT_001549a8;
    if (*(uint *)(param_1 + 0x91c) < uVar3) {
      uVar1 = *(uint *)(param_1 + 0x91c) + 1;
      fVar4 = DAT_001549ac;
      if (uVar3 != 0 && uVar1 != 0) {
        fVar4 = DAT_001549a8;
      }
      *(uint *)(param_1 + 0x91c) = uVar1;
      if ((uVar3 != 0 && uVar1 != 0) && uVar1 < uVar3) {
        fVar4 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
        fVar4 = fVar4 * *(float *)(param_1 + 0x924);
      }
    }
    *(float *)(*(int *)(param_1 + 0x40c) + 0x158) = fVar4;
  }
  iVar2 = func_0058A8F0(param_1);
  if (iVar2 != 0) {
    func_00657D18((undefined4 *)(param_1 + 0x8bc),2);
  }
  return;
}

