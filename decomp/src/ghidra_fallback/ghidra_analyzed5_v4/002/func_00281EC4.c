#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_001DDCC4(int param_1,undefined1 param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_0051AA44(int param_1);
extern undefined4 DAT_00281fd0;
extern undefined4 DAT_00281fd4;
extern undefined4 DAT_00281fd8;
extern int *DAT_00281fdc;
extern int *DAT_00281fe0;

// USA 00281EC4 <- EU 00281EEC (Ghidra, non-matching)
// GLOBAL DAT_00281fd0 undefined4
// GLOBAL DAT_00281fd4 undefined4
// GLOBAL DAT_00281fd8 undefined4
// GLOBAL DAT_00281fdc int *
// GLOBAL DAT_00281fe0 int *

undefined4 func_00281EC4(int param_1)

{
  uint unaff_r5;
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define puStack_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  uVar1 = DAT_00281fd0;
  puStack_70 = &local_6c;
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 8;
  local_78[1] = 3;
  local_20 = 0;
  local_24 = 10;
  local_6c = 3;
  local_78[0] = 1;
  local_58 = unaff_r5 | 0xff;
  local_68 = DAT_00281fd4;
  uStack_64 = uVar1;
  uStack_60 = DAT_00281fd8;
  uStack_5c = uVar1;
  func_0016898C(*(int *)(param_1 + 0x7ac),local_78);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x7ac) + 0x14) + 0x1c) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7ac) + 0x14) + 0x10) = uVar1;
  *(undefined1 *)(param_1 + 0x919) = 1;
  if (*(int *)(param_1 + 0x7a4) != 0) {
    func_004CF478(*(int *)(param_1 + 0x7a4),0);
  }
  func_001DDCC4(*DAT_00281fdc,1);
  return func_0051AA44(*DAT_00281fe0);
}

