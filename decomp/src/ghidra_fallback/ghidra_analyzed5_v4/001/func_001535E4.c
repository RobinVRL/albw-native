#include "ghidra_types.h"

extern float func_001534C0(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern float func_00153528(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern float DAT_00153724;
extern int DAT_00153728;
extern float DAT_0015372c;
extern float DAT_00153730;
extern float DAT_00153734;
extern float DAT_00153738;
extern int DAT_0015373c;
extern float DAT_00153740;
extern int DAT_00153744;
extern float DAT_00153748;
extern float DAT_0015374c;
extern int DAT_00153750;
extern float DAT_00153754;
extern int DAT_00153758;
extern float DAT_0015375c;

// USA 001535E4 <- EU 001535E8 (Ghidra, non-matching)
// GLOBAL DAT_00153724 float
// GLOBAL DAT_00153728 int
// GLOBAL DAT_0015372c float
// GLOBAL DAT_00153730 float
// GLOBAL DAT_00153734 float
// GLOBAL DAT_00153738 float
// GLOBAL DAT_0015373c int
// GLOBAL DAT_00153740 float
// GLOBAL DAT_00153744 int
// GLOBAL DAT_00153748 float
// GLOBAL DAT_0015374c float
// GLOBAL DAT_00153750 int
// GLOBAL DAT_00153754 float
// GLOBAL DAT_00153758 int
// GLOBAL DAT_0015375c float

bool func_001535E4(int param_1)

{
  bool bVar1;
  float fVar2;
  float fparam_2;
  float fparam_4;
  float fparam_3;
  
  fVar2 = DAT_00153724;
  fparam_2 = *(float *)(param_1 + 0x8ec);
  bVar1 = false;
  if (DAT_00153728 < (int)ALBW_AS_U32(fparam_2)) {
    if (DAT_0015373c < (int)ALBW_AS_U32(fparam_2)) {
      fparam_4 = DAT_00153748;
      fparam_3 = DAT_00153740;
      if (DAT_00153744 < (int)ALBW_AS_U32(fparam_2)) {
        if ((int)ALBW_AS_U32(fparam_2) <= DAT_00153744 + 0x280000) {
          fVar2 = func_001534C0(DAT_0015372c,DAT_00153724,fparam_2,DAT_00153748,DAT_0015374c);
          goto LAB_00153714;
        }
        fparam_4 = DAT_00153754;
        fparam_3 = DAT_0015374c;
        if (DAT_00153750 < (int)ALBW_AS_U32(fparam_2)) {
          bVar1 = DAT_00153758 < (int)ALBW_AS_U32(fparam_2);
          if (DAT_00153758 < (int)ALBW_AS_U32(fparam_2)) {
            *(float *)(param_1 + 0x8ec) = DAT_00153734;
          }
          else {
            fVar2 = func_001534C0(DAT_0015372c,DAT_00153724,fparam_2,DAT_00153754,DAT_0015375c);
          }
          goto LAB_00153714;
        }
      }
      fVar2 = func_00153528(DAT_0015372c,DAT_00153724,fparam_2,fparam_3,fparam_4);
    }
    else {
      fVar2 = func_001534C0(DAT_00153738,DAT_00153724,fparam_2,DAT_00153730,DAT_00153740);
    }
  }
  else {
    fVar2 = func_00153528(DAT_00153738,DAT_00153724,fparam_2,DAT_00153734,DAT_00153730);
  }
LAB_00153714:
  *(float *)(param_1 + 0x574) = fVar2;
  return bVar1;
}

