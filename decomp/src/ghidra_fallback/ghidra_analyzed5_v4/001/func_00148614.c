#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_00148714;
extern uint DAT_00148718;
extern undefined4 DAT_0014871c;
extern int *DAT_00148720;

// USA 00148614 <- EU 00148614 (Ghidra, non-matching)
// GLOBAL DAT_00148714 float
// GLOBAL DAT_00148718 uint
// GLOBAL DAT_0014871c undefined4
// GLOBAL DAT_00148720 int *

bool func_00148614(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(int *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 * *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined1 *)(albw_frame + 0x28))
  #define local_27 (*(undefined1 *)(albw_frame + 0x29))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define local_1c (*(undefined4 *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(float *)(albw_frame + 0x3c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x40))
  local_24 = *param_2;
  local_1c = param_2[2];
  if (param_4 == 0) {
LAB_00148650:
    local_24 = *param_3;
  }
  else {
    if (param_4 != 1) {
      if (param_4 == 2) goto LAB_00148650;
      if (param_4 != 3) goto LAB_00148664;
    }
    local_1c = param_3[2];
  }
LAB_00148664:
  local_20 = ALBW_AS_F32(param_3[1]) + DAT_00148714;
  local_18 = *param_3;
  uStack_10 = param_3[2];
  local_14 = ALBW_AS_F32(param_3[1]) + DAT_00148714;
  uStack_40 = DAT_00148718 | in_r12 & 0xffff0000;
  *(undefined1 *)(param_1 + 0x474) = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_38 = 0;
  local_2c = DAT_0014871c;
  local_28 = 0;
  local_4c = param_1 + 0x42c;
  local_30 = &local_24;
  local_34 = &local_18;
  local_27 = 1;
  local_3c = 0x7f;
  func_004A8030(*DAT_00148720,&local_50,3);
  return *(char *)(param_1 + 0x474) == '\0';
}

