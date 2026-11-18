#include "ghidra_types.h"

extern int func_004C10C4(int param_1,float *param_2,uint param_3,int param_4,float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern float DAT_004c13dc;
extern float DAT_004c13e0;
extern float DAT_004c13e4;
extern float DAT_004c13e8;
extern float DAT_004c13ec;

// USA 004C1388 <- EU 004C1360 (Ghidra, non-matching)
// GLOBAL DAT_004c13dc float
// GLOBAL DAT_004c13e0 float
// GLOBAL DAT_004c13e4 float
// GLOBAL DAT_004c13e8 float
// GLOBAL DAT_004c13ec float

undefined4 func_004C1388(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if ((*(uint *)(param_1 + 0x8ac) & 0x800) != 0) {
    return 0;
  }
  fVar3 = *(float *)(param_1 + 0x834) * DAT_004c13dc;
  fVar4 = DAT_004c13e0;
  if ((0x3f7fffff < (int)ALBW_AS_U32(fVar3)) && (fVar4 = fVar3, 0x40000000 < (int)ALBW_AS_U32(fVar3))) {
    fVar4 = DAT_004c13e4;
  }
  fVar4 = fVar4 * DAT_004c13e8;
  pfVar1 = (float *)func_00520FC0();
  uVar2 = func_004C10C4(param_1,pfVar1,0x20000000,*(int *)(param_1 + 1000),fVar4,DAT_004c13ec);
  return uVar2;
}

