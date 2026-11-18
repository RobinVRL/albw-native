#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern uint DAT_00391278;
extern int *DAT_0039127c;
extern float DAT_00391280;
extern float DAT_00391284;
extern int *DAT_00391288;
extern int *DAT_0039128c;

// USA 003911F8 <- EU 003911D4 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00391278 uint
// GLOBAL DAT_0039127c int *
// GLOBAL DAT_00391280 float
// GLOBAL DAT_00391284 float
// GLOBAL DAT_00391288 int *
// GLOBAL DAT_0039128c int *

undefined4 func_003911F8(int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) & 0xfffffffd;
  uVar6 = func_00114608(DAT_00391278,param_2);
  iVar4 = (int)uVar6;
  if (*DAT_0039127c < 0) {
    fVar3 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar3 * DAT_00391280;
    iVar4 = (int)fVar3;
    fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar1 = fVar5;
    if (fVar5 != fVar3) {
      fVar1 = DAT_00391284;
    }
    if (fVar3 <= fVar1 && (fVar5 != fVar3 && DAT_00391284 != fVar3)) {
      iVar4 = iVar4 + -1;
    }
  }
  iVar2 = *DAT_0039128c;
  *(int *)(iVar2 + 0x9c) = iVar4 + *DAT_00391288;
  *(undefined1 *)(iVar2 + 0x99) = 1;
  return func_001212EC(*(int *)(iVar2 + 0x18),(int *)(param_1 + 0x40c),*(uint *)(param_1 + 0x4cc) & 0xffff,
                0);
}

