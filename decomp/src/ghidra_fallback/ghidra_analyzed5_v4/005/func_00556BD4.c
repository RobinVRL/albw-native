// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051E84C(int param_1,undefined4 param_2,float fparam_0,float fparam_1);
extern float func_00584D0C(int param_1);
extern float func_00584DF8(int param_1);
extern float DAT_00556c14;
extern undefined4 DAT_00556c18;
extern int *DAT_00556c1c;

// USA 00556BD4 <- EU 00556BAC (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00556c14 float
// GLOBAL DAT_00556c18 undefined4
// GLOBAL DAT_00556c1c int *

undefined4 func_00556BD4(int param_1)

{
  float fparam_1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  func_004D80A4(&fStack_20,**(uint **)(param_1 + 0x24),DAT_00556c14);
  local_1c = DAT_00556c18;
  fparam_1 = func_00584DF8(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x600));
  fparam_0 = func_00584D0C(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x600));
  return func_0051E84C(*DAT_00556c1c,&fStack_20,fparam_0,fparam_1);
}

