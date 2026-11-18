#include "ghidra_types.h"

extern int func_0068B074(float *param_1,float *param_2,float *param_3);
extern float DAT_0049ee58;

// USA 0049EE1C <- EU 0049EDF4 (Ghidra, non-matching)
// GLOBAL DAT_0049ee58 float

int func_0049EE1C(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define fStack_1c (*(float *)(albw_frame + 0x14))
  #define fStack_18 (*(float *)(albw_frame + 0x18))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  #define fStack_10 (*(float *)(albw_frame + 0x20))
  #define local_c (*(float *)(albw_frame + 0x24))
  local_20 = *param_1;
  fStack_1c = param_1[1];
  fStack_18 = param_1[2];
  local_14 = param_1[3];
  fStack_10 = param_1[4];
  local_c = param_1[5];
  iVar1 = func_0068B074(&local_20,param_2,&local_24);
  if (iVar1 == 1) {
    if (local_24 < DAT_0049ee58) {
      iVar1 = 0;
    }
    else if (param_3 != (float *)0x0) {
      *param_3 = local_24;
    }
  }
  return iVar1;
}

