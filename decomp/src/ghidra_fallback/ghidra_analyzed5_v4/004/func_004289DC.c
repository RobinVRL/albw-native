#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int *DAT_00428a88;
extern int DAT_00428a8c;
extern int DAT_00428a90;

// USA 004289DC <- EU 004289BC (Ghidra, non-matching)
// GLOBAL DAT_00428a88 int *
// GLOBAL DAT_00428a8c int
// GLOBAL DAT_00428a90 int

void func_004289DC(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 ((int *)(albw_frame + 0x10))
  local_20[3] = 0xffffffff;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  iVar1 = func_005826A4(*DAT_00428a88,local_20,param_2,param_3);
  if (iVar1 == 0) {
    local_24 = DAT_00428a8c;
    local_28 = DAT_00428a90;
    (**(code **)(DAT_00428a90 + 8))(&local_28);
    local_20[0] = local_24;
    (**(code **)(local_28 + 8))(&local_28);
    local_20[2] = 0;
    do {
      if (*(short *)(local_24 + local_20[2] * 2) == 0) {
        if (local_20[2] < 0x40001) goto LAB_00428a68;
        break;
      }
      local_20[2] = local_20[2] + 1;
    } while (local_20[2] < 0x40001);
    local_20[2] = 0;
LAB_00428a68:
    local_20[2] = local_20[2] << 1;
  }
  uVar2 = func_001788DC(*param_1,local_20);
  *(char *)(param_1 + 4) = (char)uVar2;
  return;
}

