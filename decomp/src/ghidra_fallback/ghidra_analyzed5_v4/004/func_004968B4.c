#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_001132E8(undefined4 param_1,undefined4 *param_2,int *param_3);
extern int func_00113388(int param_1,uint *param_2);
extern int func_005630C8(int param_1,int *param_2);

// USA 004968B4 <- EU 0049688C (Ghidra, non-matching)

void func_004968B4(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)(param_1 + 0x4878);
  piVar3 = (int *)(param_1 + 0x487c);
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      iVar2 = func_005630C8((int)piVar1,(int *)*piVar3);
      *piVar3 = iVar2;
    }
    puVar4 = (undefined4 *)*piVar3;
    if (*param_2 == 0) {
      iVar2 = func_00113388((int)param_2,(uint *)(param_2 + 1));
      *param_2 = (iVar2 - (int)param_2) + -4 >> 2;
    }
    func_00110D44(puVar4,(byte *)(param_2 + 1),*param_2 << 2);
    *piVar3 = (int)(puVar4 + *param_2);
  }
  puVar4 = func_001132E8(param_2,(undefined4 *)*piVar3,param_3);
  *piVar3 = (int)puVar4;
  *(int **)(param_1 + 0x4878) = param_2;
  return;
}

