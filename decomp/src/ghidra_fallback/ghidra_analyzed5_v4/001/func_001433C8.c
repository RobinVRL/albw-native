#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern float DAT_00143454;
extern float DAT_00143458;
extern float DAT_0014345c;

// USA 001433C8 <- EU 001433C8 (Ghidra, non-matching)
// GLOBAL DAT_00143454 float
// GLOBAL DAT_00143458 float
// GLOBAL DAT_0014345c float

undefined4 func_001433C8(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x470);
  if (param_2 == 0) {
    iVar1 = *(int *)(iVar1 + 0x14);
    fVar2 = DAT_00143454;
    if (*(float *)(iVar1 + 8) == DAT_00143454) goto LAB_0014340c;
  }
  else if (param_2 == 1) {
    iVar1 = *(int *)(iVar1 + 0x14);
    fVar2 = DAT_00143458;
    if (*(float *)(iVar1 + 8) == DAT_00143458) goto LAB_0014340c;
  }
  else if ((param_2 != 2) ||
          (iVar1 = *(int *)(iVar1 + 0x14), fVar2 = DAT_0014345c,
          *(float *)(iVar1 + 8) == DAT_0014345c)) goto LAB_0014340c;
  *(float *)(iVar1 + 8) = fVar2;
  *(undefined1 *)(iVar1 + 0x26) = 1;
LAB_0014340c:
  return func_00168E9C(*(int **)(param_1 + 0x470),*(int *)(param_1 + 0x46c),(int *)0x0);
}

