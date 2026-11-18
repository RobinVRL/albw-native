#include "ghidra_types.h"

extern int func_0023248C(int param_1,int *param_2,undefined4 param_3);
extern float DAT_00462c18;
extern float DAT_00462c1c;

// USA 00462B00 <- EU 00462AD8 (Ghidra, non-matching)
// GLOBAL DAT_00462c18 float
// GLOBAL DAT_00462c1c float

void func_00462B00(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  
  bVar4 = *(char *)(param_1 + 0x80) != '\0';
  piVar1 = (int *)0x0;
  if (bVar4) {
    piVar1 = *(int **)(param_1 + 0x94);
  }
  if (bVar4 && piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,0);
    fVar5 = *(float *)(*(int *)(iVar2 + 0x7c) + ((uint)(*(int *)(iVar2 + 0x74) << 0x1e) >> 0x19) +
                      0xc);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x94) + 0x28))(*(int **)(param_1 + 0x94),0);
    *(float *)(*(int *)(iVar2 + 0x7c) + ((uint)(*(int *)(iVar2 + 0x74) << 0x1e) >> 0x19)) =
         *(float *)(param_1 + 0x74) * fVar5 * DAT_00462c18;
    *(byte *)(iVar2 + 0x9e) = *(byte *)(iVar2 + 0x9e) & 0xfb;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x94) + 0x28))(*(int **)(param_1 + 0x94),0);
    *(float *)(*(int *)(iVar2 + 0x7c) + ((uint)(*(int *)(iVar2 + 0x74) << 0x1e) >> 0x19) + 4) =
         *(float *)(param_1 + 0x78) * fVar5 * DAT_00462c1c;
    *(byte *)(iVar2 + 0x9e) = *(byte *)(iVar2 + 0x9e) & 0xfb;
  }
  func_0023248C(param_1,param_2,param_3);
  iVar3 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x4c);
  while (piVar1 = (int *)(iVar2 - iVar3),
        piVar1 != (int *)((param_1 + 0x48) - *(int *)(param_1 + 0x54))) {
    if ((piVar1[6] & 2U) != 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,param_2,param_3);
    }
    iVar2 = *(int *)((int)piVar1 + iVar3 + 4);
  }
  return;
}

