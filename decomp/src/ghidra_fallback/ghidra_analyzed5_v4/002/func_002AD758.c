#include "ghidra_types.h"

extern int func_002ADFE4(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5);
extern int func_002AE780(int param_1);
extern float func_004FB2F0(int param_1,float fparam_0);
extern int func_004FD268(int param_1);
extern float DAT_002ad864;
extern float DAT_002ad868;
extern undefined4 DAT_002ad86c;
extern undefined4 DAT_002ad870;
extern undefined4 DAT_002ad874;
extern float DAT_002ad878;

// USA 002AD758 <- EU 002AD734 (Ghidra, non-matching)
// GLOBAL DAT_002ad864 float
// GLOBAL DAT_002ad868 float
// GLOBAL DAT_002ad86c undefined4
// GLOBAL DAT_002ad870 undefined4
// GLOBAL DAT_002ad874 undefined4
// GLOBAL DAT_002ad878 float

void func_002AD758(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_fpscr;
  float in_s0;
  float fVar4;
  float fVar5;
  
  func_002AE780(param_1);
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) & 0xfff7 | 1;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0xfffffffe;
  fVar4 = func_004FB2F0(*(int *)(param_1 + 0x34),in_s0);
  fVar1 = DAT_002ad864;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 0x80000000;
  fVar5 = DAT_002ad878;
  if (*(char *)(*(int *)(param_1 + 0x34) + 0x7fc) == '\x05') {
    *(undefined4 *)(param_1 + 0x2c) = 0x3c;
  }
  else {
    uVar3 = (uint)*(ushort *)(param_1 + 0x2a4);
    fVar5 = fVar4;
    if (uVar3 == 0) {
      fVar5 = DAT_002ad868;
    }
    *(uint *)(param_1 + 0x2c) = uVar3;
    if (uVar3 != 0) {
      fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x30) = fVar1 / fVar5;
      goto LAB_002ad7b8;
    }
  }
  *(float *)(param_1 + 0x30) = fVar5;
LAB_002ad7b8:
  *(undefined4 *)(param_1 + 0x28) = 0;
  func_004FD268(*(int *)(param_1 + 0x34));
  uVar2 = DAT_002ad86c;
  *(undefined4 *)(param_1 + 0x284) = 0x1e;
  *(undefined4 *)(param_1 + 0x288) = uVar2;
  *(undefined4 *)(param_1 + 0x280) = 0;
  uVar2 = DAT_002ad870;
  *(undefined4 *)(param_1 + 0x290) = 0xf;
  *(undefined4 *)(param_1 + 0x294) = uVar2;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  uVar2 = DAT_002ad874;
  *(undefined4 *)(param_1 + 0x29c) = 3;
  *(undefined4 *)(param_1 + 0x2a0) = uVar2;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 0x800;
  func_002ADFE4(param_1,0x13,*(undefined1 *)(param_1 + 0x110),(int)*(char *)(param_1 + 0x111),0);
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0xfffff7ff;
  return;
}

