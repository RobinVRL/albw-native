#include "ghidra_types.h"

extern int func_0067FB90(byte *param_1,float *param_2,uint *param_3,int param_4);
extern float DAT_00680084;

// USA 0067FFC8 <- EU 0067FFA0 (Ghidra, non-matching)
// GLOBAL DAT_00680084 float

void func_0067FFC8(byte *param_1,float *param_2,uint param_3,int param_4)

{
  int iVar1;
  float fVar2;
  ulonglong uVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((uint *)(albw_frame + 0x0))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  fVar2 = DAT_00680084;
  uVar3 = (ulonglong)(uint)ALBW_AS_U32(DAT_00680084);
  *param_2 = DAT_00680084;
  param_2[2] = fVar2;
  param_2[1] = fVar2;
  param_2[3] = fVar2;
  *(float *)(param_1 + 0x10) = fVar2;
  iVar1 = param_4 * 2;
  *(float *)(param_1 + 0x14) = fVar2;
  local_30[0] = param_3;
  do {
    local_28 = ALBW_AS_F32(uVar3);
    local_24 = local_28;
    local_20 = local_28;
    local_1c = local_28;
    func_0067FB90(param_1,&local_28,local_30,param_4);
    param_4 = (int)((param_3 + iVar1) - local_30[0]) >> 1;
    fVar2 = *param_2;
    if (local_28 < *param_2) {
      fVar2 = local_28;
    }
    *param_2 = fVar2;
    if (param_2[1] <= local_24) {
      local_24 = param_2[1];
    }
    param_2[1] = local_24;
    if (local_20 <= param_2[2]) {
      local_20 = param_2[2];
    }
    param_2[2] = local_20;
    if (local_1c <= param_2[3]) {
      local_1c = param_2[3];
    }
    param_2[3] = local_1c;
  } while (0 < param_4);
  return;
}

