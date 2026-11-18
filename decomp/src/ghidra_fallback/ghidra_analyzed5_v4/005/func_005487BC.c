#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_00521058(void);
extern float DAT_0054883c;
extern float DAT_00548840;
extern int DAT_00548844;

// USA 005487BC <- EU 00548794 (Ghidra, non-matching)
// GLOBAL DAT_0054883c float
// GLOBAL DAT_00548840 float
// GLOBAL DAT_00548844 int

undefined4 func_005487BC(int param_1,float fparam_0)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = func_00521058();
  fVar3 = *(float *)(iVar1 + 4) - (*(float *)(param_1 + 0xc) + fparam_0);
  fVar4 = DAT_0054883c;
  if (*(char *)(param_1 + 0x8d0) != '\0') {
    fVar4 = DAT_00548840;
  }
  if ((fVar4 < fVar3) && ((int)ALBW_AS_U32(fVar3) < DAT_00548844)) {
    fVar5 = *(float *)(param_1 + 0x910);
    pfVar2 = (float *)func_00520FC0();
    fVar4 = *(float *)(param_1 + 8) - *pfVar2;
    fVar3 = *(float *)(param_1 + 0x10) - pfVar2[2];
    if (fVar4 * fVar4 + fVar3 * fVar3 < fVar5 * fVar5) {
      return 0;
    }
  }
  return 1;
}

