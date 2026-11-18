#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_004918CC(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_004c07ac;

// USA 004C06FC <- EU 004C06D4 (Ghidra, non-matching)
// GLOBAL DAT_004c07ac float

undefined4 func_004C06FC(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_40 ((float *)(albw_frame + 0x0))
  if (param_2 == 0) {
    return 0;
  }
  pfVar1 = afStack_40;
  if (param_3 == 0xffff) {
    *(uint *)(param_2 + 0x164) = *(uint *)(param_2 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(param_2 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  }
  else {
    if (*(int *)(param_1 + 0x830) == 0x3f800000) {
      *(uint *)(param_2 + 0x164) = *(uint *)(param_2 + 0x164) | 0x40000000;
      pfVar1 = (float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x7a0) + 0x24) + 0x14) +
                        param_3 * 0x30);
    }
    else {
      func_001119F4(afStack_40,
                    (undefined4 *)
                    (*(int *)(*(int *)(*(int *)(param_1 + 0x7a0) + 0x24) + 0x14) + param_3 * 0x30));
      fparam_0 = DAT_004c07ac / *(float *)(param_1 + 0x830);
      func_004918CC(afStack_40,fparam_0,fparam_0,fparam_0);
      *(uint *)(param_2 + 0x164) = *(uint *)(param_2 + 0x164) | 0x40000000;
    }
    func_001151EC((float *)(param_2 + 0x80),pfVar1);
  }
  return func_004CEAF0(param_2);
}

