#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);

// USA 002E7274 <- EU 002E7250 (Ghidra, non-matching)

undefined4 func_002E7274(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define fStack_14 (*(float *)(albw_frame + 0x1c))
  if ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x60U) != 0) {
    return 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if ((puVar1 != (undefined4 *)0x0) && (iVar2 = (**(code **)*puVar1)(puVar1,param_2), iVar2 == 0)) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x3d) != '\0') && ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x1c0)) {
    return 0;
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    func_00115C70(&local_28,(float *)(param_2 + 0x10),(float *)(param_1 + 0x14));
    func_00115C70(&local_1c,(float *)(param_1 + 0x20),(float *)(param_1 + 0x14));
    if (local_1c * local_1c + local_18 * local_18 + fStack_14 * fStack_14 <=
        local_28 * local_28 + local_24 * local_24 + local_20 * local_20) {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return 1;
}

