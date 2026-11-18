#include "ghidra_types.h"

extern int func_004A20B4(int param_1,undefined4 *param_2);

// USA 00352908 <- EU 003528E4 (Ghidra, non-matching)

undefined4 func_00352908(int param_1,undefined4 *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  #define local_8 (*(undefined4 *)(albw_frame + 0x8))
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  if (param_2[3] != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xa4) = 0;
    }
    iVar1 = param_2[3];
    *(int *)(param_1 + 0x2c) = iVar1;
    *(short *)(param_1 + 0x34) = (short)*(undefined4 *)(iVar1 + 4);
    *(int *)(iVar1 + 0xa4) = param_1;
  }
  if (param_2[4] != 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x10) = 0;
    }
    iVar1 = param_2[4];
    *(int *)(param_1 + 0x30) = iVar1;
    *(ushort *)(param_1 + 0x36) = (ushort)*(byte *)(param_2[4] + 6);
    *(int *)(iVar1 + 0x10) = param_1;
  }
  local_10 = *param_2;
  uStack_c = param_2[1];
  local_8 = param_2[2];
  return func_004A20B4(*(int *)(param_1 + 0x20),&local_10);
}

