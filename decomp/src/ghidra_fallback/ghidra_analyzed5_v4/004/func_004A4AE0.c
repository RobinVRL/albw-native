#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);

// USA 004A4AE0 <- EU 004A4AB8 (Ghidra, non-matching)

undefined4 func_004A4AE0(int *param_1)

{
  *(byte *)((int)param_1 + 0x9d) = *(byte *)((int)param_1 + 0x9d) & 0xfb;
  func_00231448((int)(param_1 + 0x1d));
  param_1[0x1f] = param_1[7];
  *(ushort *)((int)param_1 + 0x76) = (ushort)*(byte *)(param_1 + 0x27) << 1;
  *(undefined2 *)(param_1 + 0x1d) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x1d),ALBW_AS_F32(param_1[0x26]));
                    /* WARNING: Could not recover jumptable at 0x004a4b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x3c))(param_1);
}

