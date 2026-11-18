#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_0038b1dc;

// USA 0038B15C <- EU 0038B138 (Ghidra, non-matching)
// GLOBAL DAT_0038b1dc float

void func_0038B15C(int param_1,int param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define afStack_38 ((float *)(albw_frame + 0x18))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_1c (*(undefined4 *)(albw_frame + 0x34))
  #define local_c (*(undefined4 *)(albw_frame + 0x44))
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x24) + 0x14) +
          *(int *)(param_1 + 0x20) * 0x30;
  local_48 = *(float *)(iVar1 + 0xc);
  local_40 = *(undefined4 *)(iVar1 + 0x2c);
  local_44 = *(float *)(param_2 + 0x3d4) + DAT_0038b1dc;
  func_004D8AEC(afStack_38,*(uint *)(param_2 + 1000),&local_48);
  iVar1 = *(int *)(param_1 + 4);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar1 + 0x80),afStack_38);
  func_004CEAF0(*(int *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0x24) = local_2c;
  *(undefined4 *)(param_1 + 0x28) = local_1c;
  *(undefined4 *)(param_1 + 0x2c) = local_c;
  return;
}

