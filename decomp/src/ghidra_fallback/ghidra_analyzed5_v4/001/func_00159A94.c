#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern undefined4 DAT_00159b6c;
extern float DAT_00159b70;

// USA 00159A94 <- EU 00159A98 (Ghidra, non-matching)
// GLOBAL DAT_00159b6c undefined4
// GLOBAL DAT_00159b70 float

undefined4 func_00159A94(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x87;
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  fVar6 = DAT_00159b70;
  uVar5 = DAT_00159b6c;
  iVar3 = (int)((ulonglong)uVar2 * 0x78 >> 0x20) + 0x78;
  *(int *)(param_1 + 0x960) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x964) = uVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x964) = fVar6 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x95c) = 0;
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  iVar3 = (int)((ulonglong)uVar2 * 0x28 >> 0x20) + 0x14;
  *(int *)(param_1 + 0x96c) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x970) = uVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x970) = fVar6 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x968) = 0;
  return func_004FABDC(param_1,1,0xffffffff,0);
}

