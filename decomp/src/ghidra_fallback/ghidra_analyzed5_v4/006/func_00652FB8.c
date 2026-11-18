#include "ghidra_types.h"

extern int func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00520FC0(void);
extern int DAT_004c1354;
extern float DAT_004c1358;
extern int *DAT_004c135c;

// USA 00652FB8 <- EU 00652F90 (Ghidra, non-matching)
// GLOBAL DAT_004c1354 int
// GLOBAL DAT_004c1358 float
// GLOBAL DAT_004c135c int *

void func_004C1300(int param_1)

{
  float *pfVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  pfVar1 = (float *)func_00520FC0();
  fStack_18 = *(float *)(param_1 + 0x3d0);
  fStack_10 = *(float *)(param_1 + 0x3d8);
  if ((int)ALBW_AS_U32(((*pfVar1 - fStack_18) * (*pfVar1 - fStack_18) +
           (pfVar1[2] - fStack_10) * (pfVar1[2] - fStack_10))) < DAT_004c1354) {
    fStack_14 = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x838);
    func_001DDDE8(*DAT_004c135c,&fStack_18,1,DAT_004c1358);
  }
  return;
}

