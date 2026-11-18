#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002E0510(int param_1);
extern int func_002E0820(int param_1);
extern int func_002E0994(int param_1,uint param_2);
extern int func_004CBB0C(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4);
extern int *DAT_0036d838;

// USA 0036D790 <- EU 0036D76C (Ghidra, non-matching)
// GLOBAL DAT_0036d838 int *

undefined4 func_0036D790(int param_1)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  uVar1 = func_00111A64((uint *)(*DAT_0036d838 + 0x660));
  switch((int)((ulonglong)uVar1 * 6 >> 0x20)) {
  case 0:
    return func_002E0994(param_1,0);
  case 1:
    return func_002E0994(param_1,1);
  case 2:
    return func_002E0994(param_1,2);
  case 3:
    return func_002E0820(param_1);
  case 4:
    return func_002E0510(param_1);
  case 5:
    local_18 = *(undefined4 *)(param_1 + 0x3d0);
    uStack_14 = *(undefined4 *)(param_1 + 0x3d4);
    uStack_10 = *(undefined4 *)(param_1 + 0x3d8);
    func_004CBB0C(&local_18,1,0,0);
  }
  return 0;
}

