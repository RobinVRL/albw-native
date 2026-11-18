#include "ghidra_types.h"

extern int func_001E8618(int param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int *DAT_003777f0;
extern float DAT_003777f4;
extern float DAT_003777f8;

// USA 003776F8 <- EU 003776D4 (Ghidra, non-matching)
// GLOBAL DAT_003777f0 int *
// GLOBAL DAT_003777f4 float
// GLOBAL DAT_003777f8 float

undefined4 func_003776F8(int param_1,float *param_2,int param_3,int param_4)

{
  short sVar1;
  int *piVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = DAT_003777f4;
  piVar2 = DAT_003777f0;
  sVar1 = *(short *)(*(int *)(param_1 + 0x2c) + 0x42);
  if (sVar1 == 0x52) {
    return 0;
  }
  if (sVar1 == 0x50) {
    *(undefined1 *)(param_1 + 0x7e) = 1;
    return 0;
  }
  if (*(char *)(*(int *)(param_1 + 0x2c) + 0xc2) == '\0') {
    fVar6 = *param_2 - **(float **)(param_1 + 0x30);
    fVar5 = param_2[2] - (*(float **)(param_1 + 0x30))[2];
    if ((fVar6 * fVar6 + fVar5 * fVar5 < DAT_003777f8) && (param_3 == 3 && param_4 == 3)) {
      pfVar3 = *(float **)(param_1 + 0x34);
      *pfVar3 = DAT_003777f4;
      pfVar3[1] = fVar7;
      pfVar3[2] = fVar7;
      return func_002D55D0(param_1,0x51);
    }
    func_001E8618(*(int *)(*DAT_003777f0 + 0x18));
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar7) goto LAB_0037774c;
  }
  else {
    *(undefined1 *)(param_1 + 0x7e) = 1;
    func_001E8618(*(int *)(*piVar2 + 0x18));
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar7) {
LAB_0037774c:
      uVar4 = 0;
      goto LAB_00377750;
    }
  }
  uVar4 = 1;
LAB_00377750:
  return func_002D55D0(param_1,uVar4);
}

