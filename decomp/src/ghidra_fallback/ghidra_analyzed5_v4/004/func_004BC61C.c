#include "ghidra_types.h"

extern int func_001E692C(int param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004BDBAC(int param_1,int param_2);
extern int func_004C06FC(int param_1,int param_2,int param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern int *DAT_004bc780;
extern float DAT_004bc784;
extern int DAT_004bc788;
extern float DAT_004bc78c;

// USA 004BC61C <- EU 004BC5F4 (Ghidra, non-matching)
// GLOBAL DAT_004bc780 int *
// GLOBAL DAT_004bc784 float
// GLOBAL DAT_004bc788 int
// GLOBAL DAT_004bc78c float

undefined4 func_004BC61C(int *param_1)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  float fVar5;
  
  if (*(char *)((int)param_1 + 0x2d7) != '\0') {
    return 0;
  }
  func_001E692C((int)param_1);
  if (*(char *)((int)param_1 + 0x85a) == '\0') {
    if (*(char *)((int)param_1 + 0x857) == '\0') {
      func_004A879C(*DAT_004bc780,param_1[0x21b],3);
      uVar4 = 3;
    }
    else {
      func_004A7F00(*DAT_004bc780,param_1[0x21b],3);
      uVar4 = 1;
    }
    *(undefined1 *)((int)param_1 + 0x85a) = uVar4;
  }
  if ((param_1[0x22b] & 0x40U) == 0) {
    iVar2 = func_0054D89C((int)param_1,0);
    param_1[0x1e3] = iVar2;
    func_004BDBAC((int)param_1,1);
  }
  (**(code **)(*param_1 + 0x94))(param_1);
  param_1[0x249] = param_1[0x210];
  puVar3 = (uint *)(*(int *)(*(int *)(param_1[0x1e8] + 0x24) + 0xc) + param_1[0x210] * 0x40);
  *puVar3 = *puVar3 | 0x10;
  *(int **)(param_1[0x1e8] + 0x16c) = param_1 + 0x247;
  if ((param_1[0x22b] & 0x400U) == 0) {
    param_1[0x24a] = param_1[0x211];
    puVar3 = (uint *)(*(int *)(*(int *)(param_1[0x1e8] + 0x24) + 0xc) + param_1[0x211] * 0x40);
    *puVar3 = *puVar3 | 0x10;
    *(int **)(param_1[0x1e8] + 0x16c) = param_1 + 0x247;
  }
  fVar1 = DAT_004bc784;
  fVar5 = *(float *)(*(int *)(*(int *)(param_1[0x1e8] + 0x24) + 0x14) + param_1[0x210] * 0x30 + 0x1c
                    ) - ALBW_AS_F32(param_1[0xf5]);
  param_1[0x20e] = (int)ALBW_AS_U32(fVar5);
  if (fVar5 < fVar1) {
    param_1[0x20e] = (int)ALBW_AS_U32(fVar1);
  }
  else {
    if (DAT_004bc788 < (int)ALBW_AS_U32(fVar5)) {
      fVar5 = DAT_004bc78c;
    }
    param_1[0x20e] = (int)ALBW_AS_U32(fVar5);
  }
  func_004C06FC((int)param_1,param_1[0x1e9],param_1[0x23f]);
  return func_004C06FC((int)param_1,param_1[0x1ea],param_1[0x240]);
}

