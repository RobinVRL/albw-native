#include "ghidra_types.h"

extern int func_0014DDEC(int *param_1,undefined4 param_2,int param_3);
extern int func_0037C06C(undefined4 *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern float DAT_001e47e0;
extern float DAT_001e47e4;
extern float DAT_001e47e8;
extern float DAT_001e47ec;
extern int *DAT_001e47f0;

// USA 001E46CC <- EU 001E46CC (Ghidra, non-matching)
// GLOBAL DAT_001e47e0 float
// GLOBAL DAT_001e47e4 float
// GLOBAL DAT_001e47e8 float
// GLOBAL DAT_001e47ec float
// GLOBAL DAT_001e47f0 int *

int func_001E46CC(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = func_0014DDEC(param_1,param_2,param_3);
  if (iVar1 != 0) {
    fVar3 = DAT_001e47e0;
    if (*(char *)((int)param_1 + 0x4f1) == '\0') {
      fVar3 = DAT_001e47e4;
    }
    fVar4 = ALBW_AS_F32(param_1[0x138]);
    if (DAT_001e47e8 < fVar3 - fVar4) {
      fVar3 = fVar4 + DAT_001e47e8;
    }
    else if (fVar3 - fVar4 < DAT_001e47ec) {
      fVar3 = fVar4 - DAT_001e47e8;
    }
    param_1[0x138] = (int)ALBW_AS_U32(fVar3);
    if (param_1[0x137] == 0) {
      if ((char)param_1[0x132] == '\x01') {
        func_0037C06C(param_1 + 0x120);
        param_1[0x134] = param_1[0x129];
        param_1[0x135] = param_1[0x12a];
        param_1[0x136] = param_1[299];
      }
      else {
        if ((char)param_1[0x132] == '\x02') {
          func_0037C06C(param_1 + 0x120);
        }
        param_1[0x134] = param_1[0xf4];
        param_1[0x135] = param_1[0xf5];
        param_1[0x136] = param_1[0xf6];
      }
    }
    else {
      iVar2 = func_0052FBA0(*DAT_001e47f0 + 0x3dbbc,param_1[0x137]);
      if (iVar2 != 0) {
        fVar3 = *(float *)(iVar2 + 0x3d8);
        param_1[0x134] =
             (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf4]) +
                  (*(float *)(iVar2 + 0x3d0) - ALBW_AS_F32(param_1[0xf4])) * ALBW_AS_F32(param_1[0x138])));
        param_1[0x135] = param_1[0xf5];
        param_1[0x136] =
             (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf6]) + (fVar3 - ALBW_AS_F32(param_1[0xf6])) * ALBW_AS_F32(param_1[0x138])));
      }
    }
  }
  return iVar1;
}

