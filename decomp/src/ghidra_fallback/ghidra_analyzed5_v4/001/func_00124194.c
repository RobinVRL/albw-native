#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014EB3C(int param_1);
extern int func_0058A7D4(void);
extern float DAT_001241e8;

// USA 00124194 <- EU 00124194 (Ghidra, non-matching)
// GLOBAL DAT_001241e8 float

void func_00124194(int param_1)

{
  float fparam_0;
  float *pfVar1;
  uint *puVar2;
  uint uVar3;
  uint in_fpscr;
  undefined4 uVar4;
  
  func_0014EB3C(param_1);
  fparam_0 = DAT_001241e8;
  pfVar1 = (float *)(param_1 + 0x3dc);
  *pfVar1 = *(float *)(param_1 + 0x374);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0x378);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0x37c);
  func_00115D70(pfVar1,pfVar1,fparam_0);
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  uVar4 = ALBW_AS_U32(VectorSignedToFloat((int)((ulonglong)uVar3 * 0x28 >> 0x20) + 0x19,
                              (byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x8f8) = uVar4;
  return;
}

