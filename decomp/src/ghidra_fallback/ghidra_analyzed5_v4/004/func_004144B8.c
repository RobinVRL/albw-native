#include "ghidra_types.h"

extern int func_003DD64C(byte *param_1,ushort *param_2,int param_3,ushort *param_4,int param_5);

// USA 004144B8 <- EU 00414498 (Ghidra, non-matching)

void func_004144B8(ushort *param_1,int param_2,uint param_3,byte *param_4)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_3c ((ushort *)(albw_frame + 0x4))
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      func_003DD64C(param_4,auStack_3c,param_2,param_1,0xe);
      uVar1 = uVar1 + 0xe;
      param_4 = param_4 + 8;
    } while (uVar1 < param_3);
  }
  return;
}

