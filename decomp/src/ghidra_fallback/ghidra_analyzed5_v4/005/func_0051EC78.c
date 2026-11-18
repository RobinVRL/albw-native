// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_005569F8();
extern int *DAT_0051ed04;
extern int DAT_0051ed08;

// USA 0051EC78 <- EU 0051EC50 (Ghidra, non-matching)
// GLOBAL DAT_0051ed04 int *
// GLOBAL DAT_0051ed08 int

undefined4 func_0051EC78(int param_1)

{
  int iVar1;
  char cVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x494) == '\0') {
    cVar2 = func_005569F8(*DAT_0051ed04);
    iVar1 = DAT_0051ed08;
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

