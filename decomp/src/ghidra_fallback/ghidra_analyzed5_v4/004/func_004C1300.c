#include "ghidra_types.h"

extern int func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00520FC0(void);
extern int DAT_004c1354;
extern float DAT_004c1358;
extern int *DAT_004c135c;

// USA 004C1300 <- EU 004C12D8 (Ghidra, non-matching)
// GLOBAL DAT_004c1354 int
// GLOBAL DAT_004c1358 float
// GLOBAL DAT_004c135c int *

void func_004C1300(int param_1)

{
  float *pfVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  pfVar1 = (float *)func_00520FC0();
  local_18 = *(float *)(param_1 + 0x3d0);
  local_10 = *(float *)(param_1 + 0x3d8);
  if ((int)ALBW_AS_U32(((*pfVar1 - local_18) * (*pfVar1 - local_18) +
           (pfVar1[2] - local_10) * (pfVar1[2] - local_10))) < DAT_004c1354) {
    local_14 = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x838);
    func_001DDDE8(*DAT_004c135c,&local_18,1,DAT_004c1358);
  }
  return;
}

