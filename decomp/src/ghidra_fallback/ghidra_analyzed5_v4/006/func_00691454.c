#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0067FFC8(byte *param_1,float *param_2,uint param_3,int param_4);

// USA 00691454 <- EU 0069142C (Ghidra, non-matching)

undefined1 * func_00691454(byte *param_1,float *param_2,uint param_3,int param_4)

{
  _Alignas(8) unsigned char albw_frame[0x60];
  #define abStack_58 ((byte *)(albw_frame + 0x8))
  func_00110D44((undefined4 *)abStack_58,param_1,0x48);
  func_0067FFC8(abStack_58,param_2,param_3,param_4);
  return abStack_58;
}

