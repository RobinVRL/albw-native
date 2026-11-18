#include "ghidra_types.h"

extern int func_0027A604(uint *param_1,int *param_2,float *param_3);
extern int func_003C7A20(int *param_1,short *param_2);

// USA 00279BDC <- EU 00279C04 (Ghidra, non-matching)

bool func_00279BDC(uint *param_1,short *param_2,float *param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  func_003C7A20(aiStack_18,param_2);
  iVar1 = func_0027A604(param_1,aiStack_18,param_3);
  return iVar1 != 0;
}

