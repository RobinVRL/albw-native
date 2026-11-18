// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00521184();
extern int func_0066AF2C(undefined4 *param_1,undefined1 param_2);
extern float DAT_004ff54c;
extern float DAT_004ff550;

// USA 004FF4DC <- EU 004FF4B4 (Ghidra, non-matching)
// GLOBAL DAT_004ff54c float
// GLOBAL DAT_004ff550 float

undefined4 func_004FF4DC(int param_1)

{
  float fVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(float *)(albw_frame + 0x0))
  #define local_c (*(float *)(albw_frame + 0x4))
  if ((*(char *)(param_1 + 0x910) == '\0') &&
     (*(uint *)(param_1 + 0x8e8) < *(uint *)(param_1 + 0x8ec))) {
    *(uint *)(param_1 + 0x8e8) = *(uint *)(param_1 + 0x8e8) + 1;
    uVar2 = func_00521184(param_1);
    local_10 = DAT_004ff54c;
    *(uint *)(param_1 + 0x8e0) = uVar2;
    local_c = local_10;
    func_00115154(&local_c,&local_10,uVar2);
    fVar1 = DAT_004ff550;
    *(float *)(param_1 + 0x3dc) = local_c * DAT_004ff550;
    *(float *)(param_1 + 0x3e4) = local_10 * fVar1;
    return 0;
  }
  return func_0066AF2C((undefined4 *)(param_1 + 0x8bc),3);
}

