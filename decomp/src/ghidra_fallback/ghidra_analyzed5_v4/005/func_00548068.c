#include "ghidra_types.h"

extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float DAT_00548118;
extern float DAT_0054811c;

// USA 00548068 <- EU 00548040 (Ghidra, non-matching)
// GLOBAL DAT_00548118 float
// GLOBAL DAT_0054811c float

undefined4 func_00548068(int param_1,float *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_10 (*(undefined4 *)(albw_frame + 0x20))
  if (*(char *)(param_1 + 0x444) == '\0') {
    local_24 = *(float *)(param_1 + 0x3d0);
    uStack_20 = *(undefined4 *)(param_1 + 0x3d4);
    local_1c = *(float *)(param_1 + 0x3d8);
    local_30 = *(float *)(param_1 + 0x3d0);
    uStack_2c = *(undefined4 *)(param_1 + 0x3d4);
    local_28 = *(float *)(param_1 + 0x3d8);
    iVar1 = *(int *)(param_1 + 0x430);
    if (iVar1 != 0) {
      local_10 = *(undefined4 *)(iVar1 + 0x60);
      local_18 = *(float *)(iVar1 + 0x58);
      uStack_14 = *(undefined4 *)(iVar1 + 0x5c);
      func_00115DAC(&local_24,&local_18,&local_24,DAT_00548118);
      func_00115DAC(&local_30,&local_18,&local_30,DAT_0054811c);
      if ((((local_24 <= *param_2) && (*param_2 <= local_30)) && (local_1c <= param_2[2])) &&
         (param_2[2] <= local_28)) {
        return 1;
      }
    }
  }
  return 0;
}

