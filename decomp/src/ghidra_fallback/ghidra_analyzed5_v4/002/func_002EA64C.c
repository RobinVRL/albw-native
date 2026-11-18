#include "ghidra_types.h"

extern int func_003A42B0(int param_1,int param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00548E78(int param_1,undefined4 param_2,undefined4 param_3);
extern float DAT_002ea738;
extern undefined4 DAT_002ea73c;
extern int *DAT_002ea740;
extern undefined4 DAT_002ea744;

// USA 002EA64C <- EU 002EA628 (Ghidra, non-matching)
// GLOBAL DAT_002ea738 float
// GLOBAL DAT_002ea73c undefined4
// GLOBAL DAT_002ea740 int *
// GLOBAL DAT_002ea744 undefined4

void func_002EA64C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  func_003A42B0(param_1 + 0x8ec,2);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x87;
  func_004FC07C(param_1,0x15,4,0);
  uVar4 = DAT_002ea73c;
  if (*(char *)(param_1 + 0x8cd) != '!') {
    fVar5 = DAT_002ea738;
    iVar2 = func_00548E78(param_1,0x3c,0x1e);
    *(int *)(param_1 + 0xb10) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xb14) = uVar4;
    }
    else {
      fVar3 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xb14) = fVar5 / fVar3;
    }
    *(undefined4 *)(param_1 + 0xb0c) = 0;
  }
  iVar2 = func_0052FBA0(*DAT_002ea740 + 0x3dbbc,*(uint *)(param_1 + 0xc90));
  uVar1 = DAT_002ea744;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x4dc) - *(int *)(iVar2 + 0x4d8) < 10)) {
    *(undefined4 *)(iVar2 + 0x4dc) = 10;
    *(undefined4 *)(iVar2 + 0x4e0) = uVar1;
    *(undefined4 *)(iVar2 + 0x4d8) = 0;
  }
  *(undefined4 *)(param_1 + 0x3dc) = uVar4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar4;
  *(undefined4 *)(param_1 + 0xb8c) = uVar4;
  return;
}

