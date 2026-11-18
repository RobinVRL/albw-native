#include "ghidra_types.h"

extern int func_00539418(undefined4 param_1,int param_2,undefined4 *param_3);
extern int func_0057EAC0(int param_1);
extern float DAT_0034b55c;
extern float DAT_0034b560;
extern undefined4 DAT_0034b564;

// USA 0034B520 <- EU 0034B4FC (Ghidra, non-matching)
// GLOBAL DAT_0034b55c float
// GLOBAL DAT_0034b560 float
// GLOBAL DAT_0034b564 undefined4

undefined4 func_0034B520(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  iVar1 = *(int *)(param_2 + 4);
  func_0057EAC0(param_1 + 0x1ec);
  fVar2 = *(float *)(param_1 + 0x1e4) * DAT_0034b55c;
  local_14 = DAT_0034b560;
  if (fVar2 < DAT_0034b560) {
    local_14 = fVar2;
  }
  local_20 = DAT_0034b564;
  local_1c = DAT_0034b564;
  local_18 = DAT_0034b564;
  return func_00539418(param_1,iVar1,&local_20);
}

