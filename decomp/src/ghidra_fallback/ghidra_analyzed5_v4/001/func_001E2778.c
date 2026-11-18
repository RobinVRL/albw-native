// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_0014E138(int param_1,int param_2);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_0051E92C(int param_1);
extern int func_00556E64(int param_1);
extern int *DAT_001e27f0;
extern float DAT_001e27f4;
extern undefined4 DAT_001e27f8;
extern int *DAT_001e27fc;

// USA 001E2778 <- EU 001E2778 (Ghidra, non-matching)
// GLOBAL DAT_001e27f0 int *
// GLOBAL DAT_001e27f4 float
// GLOBAL DAT_001e27f8 undefined4
// GLOBAL DAT_001e27fc int *

undefined4 func_001E2778(int param_1,int param_2)

{
  bool bVar1;
  float *pfVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  func_0014E138(param_1,param_2);
  if ((*DAT_001e27f0 == 0) || (bVar1 = func_00556E64(*DAT_001e27f0), !bVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  func_003521F0(param_1 + 0x324,uVar3);
  local_18 = DAT_001e27f4;
  local_14 = DAT_001e27f4;
  uStack_10 = DAT_001e27f8;
  pfVar2 = (float *)func_0051E92C(*DAT_001e27fc);
  return func_00115CA8((float *)(param_1 + 0x3d0),pfVar2,&local_18);
}

