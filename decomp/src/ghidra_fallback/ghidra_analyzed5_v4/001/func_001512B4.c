#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);

// USA 001512B4 <- EU 001512B4 (Ghidra, non-matching)

void func_001512B4(int param_1,float *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  iVar1 = *(int *)(param_1 + 0x1c);
  func_00115C54(&local_18,param_2,(float *)(param_1 + 4));
  *(float *)(iVar1 + 0x88) = local_18;
  *(undefined4 *)(iVar1 + 0x8c) = uStack_14;
  *(undefined4 *)(iVar1 + 0x90) = uStack_10;
  *(undefined1 *)(iVar1 + 0xa0) = 1;
  return;
}

