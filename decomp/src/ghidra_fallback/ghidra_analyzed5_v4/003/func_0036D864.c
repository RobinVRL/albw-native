#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002E0510(int param_1);
extern int func_002E0820(int param_1);
extern int func_002E0994(int param_1,uint param_2);
extern int func_004CBB0C(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4);
extern int func_004E74E8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4);
extern int *DAT_0036d964;
extern int *DAT_0036d968;

// USA 0036D864 <- EU 0036D840 (Ghidra, non-matching)
// GLOBAL DAT_0036d964 int *
// GLOBAL DAT_0036d968 int *

undefined4 func_0036D864(int param_1)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 ((undefined4 *)(albw_frame + 0xc))
  uVar1 = func_00111A64((uint *)(*DAT_0036d964 + 0x660));
  switch((int)((ulonglong)uVar1 * 0xd >> 0x20)) {
  case 0:
  case 7:
    return func_002E0994(param_1,0);
  case 1:
  case 8:
    return func_002E0994(param_1,1);
  case 2:
  case 9:
    return func_002E0994(param_1,2);
  case 3:
  case 10:
    return func_002E0820(param_1);
  case 4:
  case 0xb:
    return func_002E0510(param_1);
  case 5:
    local_14[0] = **(undefined4 **)(*DAT_0036d968 + 0x24);
    local_20 = *(undefined4 *)(param_1 + 0x3d0);
    uStack_1c = *(undefined4 *)(param_1 + 0x3d4);
    uStack_18 = *(undefined4 *)(param_1 + 0x3d8);
    func_004E74E8(&local_20,local_14,4,-1);
    break;
  case 6:
  case 0xc:
    local_20 = *(undefined4 *)(param_1 + 0x3d0);
    uStack_1c = *(undefined4 *)(param_1 + 0x3d4);
    uStack_18 = *(undefined4 *)(param_1 + 0x3d8);
    return func_004CBB0C(&local_20,1,0,0);
  }
  return 0;
}

