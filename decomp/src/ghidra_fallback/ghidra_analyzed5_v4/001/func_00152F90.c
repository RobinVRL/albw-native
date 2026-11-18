#include "ghidra_types.h"

extern float func_001534C0(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern float func_00153528(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern int func_00657BD4(undefined4 *param_1,undefined1 param_2);
extern int DAT_00153074;
extern float DAT_00153078;
extern float DAT_0015307c;
extern int DAT_00153080;
extern float DAT_00153084;
extern float DAT_00153088;
extern float DAT_0015308c;
extern int DAT_00153090;
extern float DAT_00153094;

// USA 00152F90 <- EU 00152F94 (Ghidra, non-matching)
// GLOBAL DAT_00153074 int
// GLOBAL DAT_00153078 float
// GLOBAL DAT_0015307c float
// GLOBAL DAT_00153080 int
// GLOBAL DAT_00153084 float
// GLOBAL DAT_00153088 float
// GLOBAL DAT_0015308c float
// GLOBAL DAT_00153090 int
// GLOBAL DAT_00153094 float

undefined4 func_00152F90(int param_1)

{
  int iVar1;
  float fparam_2;
  float fVar2;
  
  func_0051D2F4((int *)(param_1 + 0x8f4),0,DAT_00153074,0x7fffffff,DAT_00153078);
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x931) != '\0') {
      *(undefined1 *)(param_1 + 0x829) = 1;
    }
    fparam_2 = func_0058AA40(param_1);
    fVar2 = DAT_0015307c;
    if (DAT_00153080 < (int)ALBW_AS_U32(fparam_2)) {
      if (DAT_00153080 + 0x140000 < (int)ALBW_AS_U32(fparam_2)) {
        if ((int)ALBW_AS_U32(fparam_2) <= DAT_00153090) {
          fVar2 = func_001534C0(DAT_00153084,DAT_0015307c,fparam_2,DAT_00153088,DAT_00153094);
        }
      }
      else {
        fVar2 = func_00153528(DAT_00153084,DAT_0015307c,fparam_2,DAT_0015308c,DAT_00153088);
      }
    }
    *(float *)(param_1 + 0x574) = fVar2;
    return 0;
  }
  return func_00657BD4((undefined4 *)(param_1 + 0x90c),0);
}

