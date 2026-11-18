#include "ghidra_types.h"

extern undefined4 DAT_00495d70;
extern undefined4 DAT_00495d74;
extern undefined4 DAT_00495d78;

// USA 00495CF4 <- EU 00495CCC (Ghidra, non-matching)
// GLOBAL DAT_00495d70 undefined4
// GLOBAL DAT_00495d74 undefined4
// GLOBAL DAT_00495d78 undefined4

undefined4 func_00495CF4(int *param_1,undefined4 *param_2,undefined4 *param_3,float fparam_0,
                  float fparam_1)

{
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,DAT_00495d70,DAT_00495d70,0);
  local_24 = ALBW_AS_F32(param_3[1]) * (fparam_1 - fparam_0);
  local_28 = *param_3;
  local_38 = *param_2;
  local_34 = ALBW_AS_F32(param_2[1]) - ALBW_AS_F32(param_3[1]) * fparam_0;
  uStack_30 = DAT_00495d74;
  return (**(code **)(*param_1 + 0x28))(param_1,&local_38,&local_28,DAT_00495d78,DAT_00495d78,0);
}

