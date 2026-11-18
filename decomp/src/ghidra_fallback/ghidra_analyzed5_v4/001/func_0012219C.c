#include "ghidra_types.h"

extern int func_00121634(int param_1,undefined4 param_2);
extern int func_0012F60C(int param_1,float fparam_0);
extern int func_0012F75C(int param_1,float fparam_0);
extern int func_0012FD38(int param_1,int param_2);
extern int func_0013080C(int param_1,int param_2);
extern int func_004ED868(void);
extern int *DAT_00122290;
extern float DAT_00122294;
extern int *DAT_00122298;
extern float DAT_0012229c;

// USA 0012219C <- EU 0012219C (Ghidra, non-matching)
// GLOBAL DAT_00122290 int *
// GLOBAL DAT_00122294 float
// GLOBAL DAT_00122298 int *
// GLOBAL DAT_0012229c float

undefined4 func_0012219C(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  
  uVar2 = *(uint *)(param_1 + 500);
  if (uVar2 == 0) goto LAB_001221f8;
  if ((uVar2 & 2) == 0) {
    if ((uVar2 & 1) != 0) {
      iVar4 = *(int *)(param_1 + 0x1d8);
      goto LAB_001221e0;
    }
  }
  else {
    iVar4 = *DAT_00122290;
    iVar3 = func_004ED868();
    if (iVar3 == 0) {
      iVar4 = iVar4 + 0x560;
    }
    else {
      iVar4 = iVar4 + 0x588;
    }
LAB_001221e0:
    *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(iVar4 + 0x14);
    *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(iVar4 + 0x1c);
  }
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 1;
LAB_001221f8:
  iVar3 = *(int *)(param_1 + 0x1e0);
  iVar4 = iVar3 + -1;
  *(int *)(param_1 + 0x1e0) = iVar4;
  if (iVar3 < 1) {
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  else {
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x1cc) =
         *(float *)(param_1 + 0x1cc) +
         (*(float *)(param_1 + 0x1dc) - *(float *)(param_1 + 0x1cc)) * (DAT_00122294 / fVar5);
  }
  func_00121634(param_1,param_2);
  piVar1 = DAT_00122298;
  func_0012F75C(*DAT_00122298,*(float *)(param_1 + 0xa4));
  func_0012F60C(*piVar1,DAT_0012229c);
  func_0013080C(*piVar1,param_1 + 0x10);
  return func_0012FD38(*piVar1,param_1 + 0x114);
}

