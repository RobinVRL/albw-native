#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_003C2630(int param_1);
extern int func_003C26B8(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern float fRam00159a3c;
extern undefined4 DAT_00159a38;

// USA 00159988 <- EU 0015998C (Ghidra, non-matching)
// GLOBAL DAT_00159a38 undefined4
// GLOBAL UNK_00159a3c float

void func_00159988(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  
  uVar5 = DAT_00159a38;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7b;
  *(undefined4 *)(param_1 + 0x978) = uVar5;
  func_004FABDC(param_1,1,0xffffffff,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffc;
  func_003C26B8(param_1 + 0x8e0);
  func_003C2630(param_1 + 0x8e0);
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  iVar3 = (int)((ulonglong)uVar2 * 0x3c >> 0x20) + 0x3c;
  *(int *)(param_1 + 0x960) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x964) = uVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x964) = fRam00159a3c / fVar4;
  }
  *(undefined4 *)(param_1 + 0x95c) = 0;
  return;
}

