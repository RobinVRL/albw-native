#include "ghidra_types.h"

extern int *DAT_0030309c;
extern undefined4 *DAT_003030a0;

// USA 00303038 <- EU 00303014 (Ghidra, non-matching)
// GLOBAL DAT_0030309c int *
// GLOBAL DAT_003030a0 undefined4 *

void func_00303038(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x34))
  if (*(char *)(param_1 + 0x4e9) != '\0') {
    local_40 = *DAT_003030a0;
    uStack_3c = DAT_003030a0[1];
    uStack_34 = DAT_003030a0[3];
    uStack_30 = DAT_003030a0[4];
    uStack_2c = DAT_003030a0[5];
    uStack_28 = DAT_003030a0[6];
    uStack_24 = DAT_003030a0[7];
    local_20 = DAT_003030a0[8];
    uStack_1c = DAT_003030a0[9];
    local_18 = DAT_003030a0[10];
    local_38 = *(undefined4 *)(*(int *)(*DAT_0030309c + 0x18) + 0x1a8);
    local_14 = *(undefined4 *)(param_1 + 0x3d0);
    uStack_10 = *(undefined4 *)(param_1 + 0x3d4);
    uStack_c = *(undefined4 *)(param_1 + 0x3d8);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x4cc) + 0x34))
                      (*(int **)(param_1 + 0x4cc),&local_14,&local_40,0);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x4e9) = 0;
    }
  }
  return;
}

