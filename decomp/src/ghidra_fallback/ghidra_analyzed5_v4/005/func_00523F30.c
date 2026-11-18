// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_00556984();
extern int *DAT_00523fbc;
extern int DAT_00523fc0;

// USA 00523F30 <- EU 00523F08 (Ghidra, non-matching)
// GLOBAL DAT_00523fbc int *
// GLOBAL DAT_00523fc0 int

undefined4 func_00523F30(int param_1)

{
  int iVar1;
  char cVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x494) == '\0') {
    cVar2 = func_00556984(*DAT_00523fbc);
    iVar1 = DAT_00523fc0;
    if (cVar2 == '\0') {
      pfVar3 = (float *)func_00520FC0();
      fVar4 = *(float *)(param_1 + 0x3d0) - *pfVar3;
      fVar6 = *(float *)(param_1 + 0x3d4) - pfVar3[1];
      fVar5 = *(float *)(param_1 + 0x3d8) - pfVar3[2];
      if ((int)ALBW_AS_U32((fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5)) < iVar1) {
        return 3;
      }
    }
    else {
      pfVar3 = (float *)func_00520FC0();
      fVar4 = *(float *)(param_1 + 0x3d0) - *pfVar3;
      fVar5 = *(float *)(param_1 + 0x3d4) - pfVar3[1];
      fVar6 = *(float *)(param_1 + 0x3d8) - pfVar3[2];
      if ((int)ALBW_AS_U32((fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6)) < iVar1) {
        return 2;
      }
    }
  }
  return 0;
}

