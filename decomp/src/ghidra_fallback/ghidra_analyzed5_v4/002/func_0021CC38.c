#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern undefined4 DAT_0021ccc0;
extern float DAT_0021ccc4;

// USA 0021CC38 <- EU 0021CC38 (Ghidra, non-matching)
// GLOBAL DAT_0021ccc0 undefined4
// GLOBAL DAT_0021ccc4 float

undefined4 func_0021CC38(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  
  uVar5 = DAT_0021ccc0;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0021ccc0;
  *(undefined4 *)(param_1 + 0x3e0) = uVar5;
  *(undefined4 *)(param_1 + 0x3e4) = uVar5;
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  iVar3 = (int)((ulonglong)uVar2 * 0x28 >> 0x20) + 0x3c;
  *(int *)(param_1 + 0x900) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x904) = uVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x904) = DAT_0021ccc4 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x8fc) = 0;
  return func_004FABDC(param_1,0,0xffffffff,0);
}

