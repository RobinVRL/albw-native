#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_0058A7D4(void);
extern float fRam004c9fc0;
extern float fRam004c9fc4;
extern float fRam004c9fcc;
extern float fRam004c9fd0;
extern float fRam004c9fd4;
extern undefined4 uRam004c9fc8;

// USA 004C9F08 <- EU 004C9EE0 (Ghidra, non-matching)
// GLOBAL UNK_004c9fc0 float
// GLOBAL UNK_004c9fc4 float
// GLOBAL UNK_004c9fc8 uint
// GLOBAL UNK_004c9fcc float
// GLOBAL UNK_004c9fd0 float
// GLOBAL UNK_004c9fd4 float

void func_004C9F08(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  func_004FABDC(param_1,0,0xffffffff,0);
  fVar6 = fRam004c9fc0;
  func_004FB4E0(param_1,fRam004c9fc0);
  fVar7 = fRam004c9fc4;
  pfVar4 = (float *)(param_1 + 0x96c);
  *pfVar4 = fRam004c9fc4;
  *(float *)(param_1 + 0x970) = fVar7;
  *(float *)(param_1 + 0x974) = fVar7;
  puVar1 = (uint *)func_0058A7D4();
  uVar3 = uRam004c9fc8;
  uVar2 = func_00111A64(puVar1);
  func_004D80A4(pfVar4,(uint)((ulonglong)uVar3 * (ulonglong)uVar2 >> 0x20),fRam004c9fcc);
  func_00115C54(pfVar4,pfVar4,(float *)(param_1 + 0x3d0));
  puVar1 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar1);
  fVar8 = fRam004c9fd4;
  fVar7 = fRam004c9fd0;
  fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x96c) =
       fVar5 * fRam004c9fd0 * fVar6 + fRam004c9fd4 + *(float *)(param_1 + 0x96c);
  puVar1 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar1);
  fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x974) = fVar5 * fVar7 * fVar6 + fVar8 + *(float *)(param_1 + 0x974);
  return;
}

