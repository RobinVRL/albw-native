#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_001512B4(int param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern int func_00520ED8(int param_1);
extern float DAT_0037c7f8;
extern undefined4 DAT_0037c7fc;
extern float DAT_0037c800;
extern float DAT_0037c804;

// USA 0037C6F0 <- EU 0037C6CC (Ghidra, non-matching)
// GLOBAL DAT_0037c7f8 float
// GLOBAL DAT_0037c7fc undefined4
// GLOBAL DAT_0037c800 float
// GLOBAL DAT_0037c804 float

undefined4 func_0037C6F0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  if (param_2 == 0) {
    if ((*(short *)(param_1 + 0x42c) == 0) || (*(char *)(param_1 + 0x429) != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    *(undefined1 *)(param_1 + 0x424) = 0;
    *(undefined1 *)(param_1 + 0x428) = 0;
    *(undefined1 *)(param_1 + 0x429) = 0;
    if ((*(short *)(param_1 + 0x42c) == 0) && (bVar1)) {
      local_20 = *(undefined4 *)(param_1 + 0x43c);
      local_24 = DAT_0037c7f8;
      local_1c = DAT_0037c7f8;
      fVar3 = DAT_0037c7f8;
      iVar2 = func_0014EEB8(param_1,&local_24,DAT_0037c7fc,*(float *)(param_1 + 0x43c));
      *(char *)(param_1 + 0x428) = (char)iVar2;
      if (iVar2 != 0) {
        iVar2 = func_00520ED8(param_1);
        if (iVar2 != 0) {
          fVar3 = DAT_0037c800;
        }
        local_2c = *(float *)(param_1 + 0x448);
        local_2c = local_2c + (fVar3 - local_2c) * DAT_0037c804;
        *(float *)(param_1 + 0x448) = local_2c;
        local_28 = *(undefined4 *)(param_1 + 0x3d8);
        local_30 = *(float *)(param_1 + 0x3d0);
        local_2c = *(float *)(param_1 + 0x3d4) + local_2c;
        iVar2 = *(int *)(param_1 + 0x40c);
        if (iVar2 != 0) {
          *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
          *(float *)(iVar2 + 0x8c) = local_30;
          *(float *)(iVar2 + 0x9c) = local_2c;
          *(undefined4 *)(iVar2 + 0xac) = local_28;
          func_004CEAF0(iVar2);
        }
        if (*(int *)(param_1 + 0x410) != 0) {
          func_001512B4(*(int *)(param_1 + 0x410),&local_30);
        }
      }
    }
  }
  return func_0014E138(param_1,param_2);
}

