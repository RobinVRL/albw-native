#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float DAT_0037dcd4;

// USA 0037DC1C <- EU 0037DBF8 (Ghidra, non-matching)
// GLOBAL DAT_0037dcd4 float

void func_0037DC1C(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 ((float *)(albw_frame + 0xc))
  #define local_1c (*(float *)(albw_frame + 0x14))
  local_30 = DAT_0037dcd4;
  local_2c = DAT_0037dcd4;
  local_28 = DAT_0037dcd4;
  fVar2 = DAT_0037dcd4;
  func_00115C70(local_24,param_3,(float *)(*(int *)(param_1 + 0xc) + 0x3c4));
  fVar1 = *(float *)(param_1 + 0x1c);
  if ((fVar1 < local_24[0]) || (fVar1 = *(float *)(param_1 + 0x10), local_24[0] < fVar1)) {
    local_30 = fVar1 - local_24[0];
  }
  fVar1 = *(float *)(param_1 + 0x24);
  if ((fVar1 < local_1c) || (fVar1 = *(float *)(param_1 + 0x18), local_1c < fVar1)) {
    local_28 = fVar1 - local_1c;
  }
  if ((local_30 != fVar2 || local_2c != fVar2) || local_28 != fVar2) {
    func_00115C54(param_2,param_2,&local_30);
  }
  return;
}

