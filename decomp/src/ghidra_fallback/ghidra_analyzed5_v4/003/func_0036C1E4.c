#include "ghidra_types.h"

extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int DAT_0036c28c;
extern int *DAT_0036c290;

// USA 0036C1E4 <- EU 0036C1C0 (Ghidra, non-matching)
// GLOBAL DAT_0036c28c int
// GLOBAL DAT_0036c290 int *

undefined4 func_0036C1E4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
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
  #define local_c (*(undefined4 *)(albw_frame + 0x34))
  puVar1 = (undefined4 *)(DAT_0036c28c + (*(uint *)(param_1 + 0x1c) & 0xff) * 0x2c);
  local_40 = *puVar1;
  uStack_3c = puVar1[1];
  uStack_38 = puVar1[2];
  uStack_34 = puVar1[3];
  uStack_30 = puVar1[4];
  uStack_2c = puVar1[5];
  uStack_28 = puVar1[6];
  uStack_24 = puVar1[7];
  local_18 = puVar1[10];
  local_20 = puVar1[8];
  uStack_1c = puVar1[9];
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = *(int *)(param_1 + 4);
    local_c = *(undefined4 *)(iVar2 + 0x3d8);
    local_14 = *(undefined4 *)(iVar2 + 0x3d0);
    uStack_10 = *(undefined4 *)(iVar2 + 0x3d4);
  }
  else {
    local_14 = *puVar1;
    uStack_10 = puVar1[1];
    local_c = puVar1[2];
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&local_40,&local_14);
  }
  return func_001E8268(*(int *)(*DAT_0036c290 + 0x18),(int *)(*(int *)(param_1 + 0xc) + 0xac),&local_14,
                &local_40);
}

