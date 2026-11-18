#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern float func_0068010C(byte *param_1,byte *param_2,uint param_3,float fparam_0);

// USA 006800B0 <- EU 00680088 (Ghidra, non-matching)

undefined1 * func_006800B0(byte *param_1,byte *param_2,uint param_3)

{
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define abStack_60 ((byte *)(albw_frame + 0x0))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  func_00110D44((undefined4 *)abStack_60,param_1,0x48);
  func_0068010C(abStack_60,param_2,param_3,in_s0);
  *(undefined4 *)(param_1 + 0x10) = local_50;
  *(undefined4 *)(param_1 + 0x14) = uStack_4c;
  return abStack_60;
}

