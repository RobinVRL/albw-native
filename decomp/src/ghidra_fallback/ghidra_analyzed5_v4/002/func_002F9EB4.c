// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_00556E64(int param_1);
extern int DAT_002f9f8c;
extern int *DAT_002f9f90;
extern int DAT_002f9f94;
extern int DAT_002f9f98;
extern int DAT_002f9f9c;
extern int DAT_002f9fa0;

// USA 002F9EB4 <- EU 002F9E90 (Ghidra, non-matching)
// GLOBAL DAT_002f9f8c int
// GLOBAL DAT_002f9f90 int *
// GLOBAL DAT_002f9f94 int
// GLOBAL DAT_002f9f98 int
// GLOBAL DAT_002f9f9c int
// GLOBAL DAT_002f9fa0 int

undefined4 func_002F9EB4(int param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x3d0);
  fVar4 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x3d8);
  fVar4 = fVar5 * fVar5 + fVar4 * fVar4;
  if (DAT_002f9f8c < (int)ALBW_AS_U32(fVar4)) {
    return 2;
  }
  pfVar2 = (float *)func_00520FC0();
  fVar6 = *pfVar2 - *(float *)(param_1 + 0x3d0);
  fVar5 = pfVar2[2] - *(float *)(param_1 + 0x3d8);
  fVar5 = fVar6 * fVar6 + fVar5 * fVar5;
  bVar1 = func_00556E64(*DAT_002f9f90);
  if ((bVar1) || (DAT_002f9f94 < (int)ALBW_AS_U32(fVar5))) {
    if (DAT_002f9fa0 <= (int)ALBW_AS_U32(fVar4)) {
      return 2;
    }
    return 4;
  }
  iVar3 = func_00520FC0();
  if ((int)ALBW_AS_U32((*(float *)(param_1 + 0x3d4) - *(float *)(iVar3 + 4))) < 0x3f800001) {
    if ((int)ALBW_AS_U32(fVar5) < DAT_002f9f98) {
      return 1;
    }
    if ((int)ALBW_AS_U32(fVar5) <= DAT_002f9f9c) {
      return 3;
    }
  }
  return 0;
}

