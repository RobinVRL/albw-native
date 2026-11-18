#include "ghidra_types.h"

extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_005FF850(int param_1,int param_2);
extern int func_00600148(int param_1,int param_2);

// USA 00496204 <- EU 004961DC (Ghidra, non-matching)

uint func_00496204(int param_1,int param_2)

{
  undefined4 extraout_r1;
  uint in_r2;
  uint in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  local_10 = in_r3;
  func_00600148(1,(int)&local_10);
  func_005FF418(local_10,extraout_r1,in_r2);
  func_005FF850(param_1,param_2);
  return local_10;
}

