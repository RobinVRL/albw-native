#include "ghidra_types.h"

extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0058A1F4(int param_1);
extern int func_0058E2B8(int *param_1);
extern int *DAT_0038425c;
extern uint DAT_00384260;
extern float DAT_00384264;

// USA 003841F4 <- EU 003841D0 (Ghidra, non-matching)
// GLOBAL DAT_0038425c int *
// GLOBAL DAT_00384260 uint
// GLOBAL DAT_00384264 float

void func_003841F4(int param_1)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  uVar1 = func_0058A1F4(*(int *)(param_1 + 0x10));
  if (uVar1 == 0) {
    local_10 = func_004D80EC((float *)(*(int *)(param_1 + 0x10) + 0x3d0),
                             *(float **)(*DAT_0038425c + 0x1c),
                             *(int *)(*(int *)(param_1 + 0x10) + 1000));
    local_10 = local_10 - *(int *)(*(int *)(param_1 + 0x10) + 1000);
    if (*(char *)(param_1 + 0x58) == '\0') {
      local_10 = 0;
    }
    if (*(char *)(*(int *)(param_1 + 0x10) + 0x936) == '\x02') {
      local_10 = 0;
    }
    uVar1 = func_0058E2B8(&local_10);
    if (uVar1 < DAT_00384260) {
      func_0051D2CC((int *)(param_1 + 0x68),local_10,DAT_00384264);
    }
  }
  return;
}

