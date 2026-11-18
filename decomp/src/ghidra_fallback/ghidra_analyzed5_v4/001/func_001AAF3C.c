#include "ghidra_types.h"

extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_0065AAC8(undefined4 *param_1,undefined1 param_2);
extern float DAT_001ab02c;
extern int *DAT_001ab030;
extern undefined4 DAT_001ab034;

// USA 001AAF3C <- EU 001AAF3C (Ghidra, non-matching)
// GLOBAL DAT_001ab02c float
// GLOBAL DAT_001ab030 int *
// GLOBAL DAT_001ab034 undefined4

undefined4 func_001AAF3C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = func_0051E6D0(*DAT_001ab030,(float *)(param_1 + 0x3d0),DAT_001ab02c);
  puVar3 = (undefined4 *)(param_1 + 0x904);
  if (iVar2 == 0) {
    return func_0065AAC8(puVar3,0);
  }
  if (*(uint *)(param_1 + 0x948) < *(uint *)(param_1 + 0x94c)) {
    *(uint *)(param_1 + 0x948) = *(uint *)(param_1 + 0x948) + 1;
  }
  if (*(uint *)(param_1 + 0x930) <= *(uint *)(param_1 + 0x92c)) {
    if (*(short *)(param_1 + 0x2e) == 0) {
      uVar4 = 3;
    }
    else {
      uVar4 = 4;
    }
    return func_0065AAC8(puVar3,uVar4);
  }
  *(uint *)(param_1 + 0x92c) = *(uint *)(param_1 + 0x92c) + 1;
  if (*(uint *)(param_1 + 0x94c) <= *(uint *)(param_1 + 0x948)) {
    fVar5 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x3d0);
    fVar6 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x3d8);
    if (*(float *)(param_1 + 0x944) < fVar5 * fVar5 + fVar6 * fVar6) {
      *(undefined1 *)(param_1 + 0x966) = 1;
      func_0065AAC8(puVar3,1);
      uVar1 = DAT_001ab034;
      *(undefined4 *)(param_1 + 0x94c) = 0x78;
      *(undefined4 *)(param_1 + 0x950) = uVar1;
      *(undefined4 *)(param_1 + 0x948) = 0;
    }
  }
  return 0;
}

