#include "ghidra_types.h"

extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int *DAT_0020bd60;
extern float DAT_0020bd64;
extern float DAT_0020bd68;
extern float DAT_0020bd6c;
extern int *DAT_0020bd70;
extern float DAT_0020bd74;
extern float DAT_0020bd78;

// USA 0020BC84 <- EU 0020BC84 (Ghidra, non-matching)
// GLOBAL DAT_0020bd60 int *
// GLOBAL DAT_0020bd64 float
// GLOBAL DAT_0020bd68 float
// GLOBAL DAT_0020bd6c float
// GLOBAL DAT_0020bd70 int *
// GLOBAL DAT_0020bd74 float
// GLOBAL DAT_0020bd78 float

undefined4 func_0020BC84(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  iVar3 = *(int *)(param_1 + 0x9e4);
  if (*(int *)(param_1 + 0xc9c) != 0 || iVar3 != 0) {
    iVar3 = 1;
  }
  *(char *)(param_1 + 0x9f0) = (char)iVar3;
  iVar3 = func_0051D2F4((int *)(param_1 + 0x9e4),*(int *)(param_1 + 0xc9c),DAT_0020bd60[-1],
                        *DAT_0020bd60,DAT_0020bd64);
  piVar2 = DAT_0020bd70;
  if (iVar3 != 0) {
    fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xc9c),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar4 = fVar4 * DAT_0020bd68;
    iVar3 = (int)fVar4;
    fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar1 = fVar5;
    if (fVar5 != fVar4) {
      fVar1 = DAT_0020bd6c;
    }
    if (fVar4 <= fVar1 && (fVar5 != fVar4 && DAT_0020bd6c != fVar4)) {
      iVar3 = iVar3 + -1;
    }
    *(int *)(param_1 + 0xc9c) = iVar3;
    if (iVar3 < *piVar2) {
      *(undefined4 *)(param_1 + 0xc9c) = 0;
    }
  }
  if (*(char *)(param_1 + 0x9f1) != '\0') {
    return 0;
  }
  func_0051D2CC((int *)(param_1 + 0x9e8),*(int *)(param_1 + 0xca0),DAT_0020bd74);
  return func_0051D2CC((int *)(param_1 + 0x9ec),*(int *)(param_1 + 0xca4),DAT_0020bd78);
}

