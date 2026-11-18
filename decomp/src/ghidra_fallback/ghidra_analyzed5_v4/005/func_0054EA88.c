#include "ghidra_types.h"

extern int func_0054DF14(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 *param_5, undefined4 param_6,int param_7,float fparam_0);
extern undefined4 DAT_0054eb44;
extern float DAT_0054eb48;
extern int DAT_0054eb4c;

// USA 0054EA88 <- EU 0054EA60 (Ghidra, non-matching)
// GLOBAL DAT_0054eb44 undefined4
// GLOBAL DAT_0054eb48 float
// GLOBAL DAT_0054eb4c int

undefined4 func_0054EA88(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  local_1c = DAT_0054eb48;
  local_18 = DAT_0054eb48;
  local_14 = DAT_0054eb48;
  fVar2 = DAT_0054eb48;
  iVar1 = func_0054DF14(param_1,(uint)&local_1c,param_2,param_3,(undefined4 *)(param_1 + 0x49c),
                        param_4,0,*(float *)(param_1 + 0x4ac));
  if (iVar1 == 0) {
    return 0;
  }
  if (local_1c <= fVar2) {
    local_1c = -local_1c;
  }
  if ((int)ALBW_AS_U32(local_1c) <= DAT_0054eb4c) {
    if (local_18 <= fVar2) {
      local_18 = -local_18;
    }
    if (local_18 <= *(float *)(param_1 + 0x4c4)) {
      if (local_14 <= fVar2) {
        local_14 = -local_14;
      }
      if ((int)ALBW_AS_U32(local_14) <= DAT_0054eb4c) {
        return 0;
      }
    }
  }
  return 1;
}

