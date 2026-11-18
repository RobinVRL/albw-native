#include "ghidra_types.h"

extern int func_0042E7F4(int *param_1,int param_2,int param_3);

// USA 004ED9F4 <- EU 004ED9CC (Ghidra, non-matching)

int * func_004ED9F4(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  float fVar3;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    fVar3 = *(float *)(param_4 + 0x58) + *(float *)(param_2 + 0x24);
    if ((((ALBW_AS_F32(piVar2[0xd]) <= *(float *)(param_4 + 4) + fVar3) &&
         (ALBW_AS_F32(piVar2[0xf]) <= *(float *)(param_4 + 0xc) + fVar3)) &&
        (*(float *)(param_4 + 4) - fVar3 <= ALBW_AS_F32(piVar2[0x10]))) &&
       (((*(float *)(param_4 + 0xc) - fVar3 <= ALBW_AS_F32(piVar2[0x12]) &&
         (ALBW_AS_F32(piVar2[0xe]) <= *(float *)(param_4 + 8) + fVar3)) &&
        (*(float *)(param_4 + 8) - fVar3 <= ALBW_AS_F32(piVar2[0x11]))))) {
      bVar1 = func_0042E7F4(piVar2,param_2,param_3);
      return (int *)(uint)bVar1;
    }
  }
  return piVar2;
}

