#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float *DAT_0017d460;
extern float *DAT_0017d464;
extern undefined4 DAT_0017d468;

// USA 0017D3D8 <- EU 0017D3D8 (Ghidra, non-matching)
// GLOBAL DAT_0017d460 float *
// GLOBAL DAT_0017d464 float *
// GLOBAL DAT_0017d468 undefined4

void func_0017D3D8(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  local_18 = *(float *)(param_1 + 8);
  uStack_14 = *(undefined4 *)(param_1 + 0xc);
  uStack_10 = *(undefined4 *)(param_1 + 0x10);
  func_00115C54(&local_18,&local_18,DAT_0017d460);
  *(float *)(param_1 + 0x368) = local_18;
  *(undefined4 *)(param_1 + 0x36c) = uStack_14;
  *(undefined4 *)(param_1 + 0x370) = uStack_10;
  *(float *)(param_1 + 0x3d0) = local_18;
  *(undefined4 *)(param_1 + 0x3d4) = uStack_14;
  *(undefined4 *)(param_1 + 0x3d8) = uStack_10;
  pfVar2 = (float *)(param_1 + 0x838);
  *pfVar2 = *(float *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_1 + 0x10);
  func_00115C54(pfVar2,pfVar2,DAT_0017d464);
  uVar1 = DAT_0017d468;
  *(undefined4 *)(param_1 + 0x854) = 0x78;
  *(undefined4 *)(param_1 + 0x858) = uVar1;
  *(undefined4 *)(param_1 + 0x850) = 0;
  *(undefined1 *)(param_1 + 0x880) = 0;
  return;
}

