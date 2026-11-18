#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);
extern int func_001DF9E4(int param_1,float fparam_0);
extern int func_001E007C(int param_1);
extern int func_00489A8C(int param_1,float fparam_0,float fparam_1);
extern int func_00489AD8(int param_1);
extern float func_004906A8(float fparam_0);
extern float DAT_003219f4;
extern float DAT_003219f8;
extern float DAT_003219fc;

// USA 00321900 <- EU 003218DC (Ghidra, non-matching)
// GLOBAL DAT_003219f4 float
// GLOBAL DAT_003219f8 float
// GLOBAL DAT_003219fc float

void func_00321900(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fparam_0;
  
  if ((*(uint *)(param_1 + 0x18) & 4) != 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 0xc) - iVar4;
    iVar3 = (param_1 + 8) - iVar4;
    fparam_0 = DAT_003219f4;
    fVar5 = DAT_003219f8;
    if (iVar2 != iVar3) {
      do {
        if (((*(char *)(iVar2 + 0x108) == '\0') || (*(int *)(iVar2 + 0xfc) != 0)) &&
           (pfVar1 = (float *)func_001E007C(iVar2), pfVar1 != (float *)0x0)) {
          fVar5 = *pfVar1 + fVar5;
        }
        iVar2 = *(int *)(iVar2 + iVar4 + 4) - iVar4;
      } while (iVar2 != iVar3);
      if (0x3f800000 < (int)ALBW_AS_U32(fVar5)) {
        fVar5 = func_004906A8(fVar5);
        fparam_0 = fparam_0 / (fVar5 + fparam_0);
      }
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      func_0010C7F8(param_1 + 0x30,0,fparam_0);
    }
    else {
      func_00489A8C(param_1 + 0x30,fparam_0,DAT_003219fc);
    }
    func_00489AD8(param_1 + 0x30);
    iVar4 = *(int *)(param_1 + 0x14);
    for (iVar2 = *(int *)(param_1 + 0xc) - iVar4; iVar2 != iVar3;
        iVar2 = *(int *)(iVar2 + iVar4 + 4) - iVar4) {
      func_001DF9E4(iVar2,*(float *)(param_1 + 0x34));
    }
  }
  return;
}

