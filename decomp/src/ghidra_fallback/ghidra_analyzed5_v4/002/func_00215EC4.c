#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00216020(int param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 00215EC4 <- EU 00215EC4 (Ghidra, non-matching)

void func_00215EC4(int param_1)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x968);
  iVar5 = 0;
  func_00216020(param_1);
  if (iVar6 != 0) {
    do {
      iVar1 = *(int *)(param_1 + 0x964) + iVar5;
      if (*(int *)(param_1 + 0x960) <= iVar1) {
        iVar1 = iVar1 - *(int *)(param_1 + 0x960);
      }
      pfVar3 = (float *)(*(int *)(param_1 + 0x95c) + iVar1 * 0x28);
      func_00115C54(pfVar3,pfVar3,pfVar3 + 3);
      fVar2 = pfVar3[6];
      puVar4 = (uint *)((int)ALBW_AS_U32(fVar2) + 0x164);
      *puVar4 = *puVar4 | 0x40000000;
      func_004D8AEC((float *)((int)ALBW_AS_U32(fVar2) + 0x80),(uint)ALBW_AS_U32(pfVar3[9]),pfVar3);
      func_004CEAF0((int)ALBW_AS_U32(pfVar3[6]));
      func_001512B4((int)ALBW_AS_U32(pfVar3[8]),pfVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar6);
  }
  return;
}

