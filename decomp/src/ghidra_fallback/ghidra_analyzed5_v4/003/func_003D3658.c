#include "ghidra_types.h"

extern int func_003D3588(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int param_7,int param_8);

// USA 003D3658 <- EU 003D3634 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 int
// PARAM param_8 Stack[0xc]:4 int

undefined4 *
func_003D3658(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
             int param_7,int param_8)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  func_003D3588((longlong *)&local_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *param_1 = local_18;
  param_1[1] = uStack_14;
  return param_1;
}

