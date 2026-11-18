#include "ghidra_types.h"

extern int func_00533400(int param_1,int *param_2);
extern int func_005532D8(undefined4 param_1,int param_2,int param_3);
extern int DAT_00553288;

// USA 00553288 <- EU 00553260 (Ghidra, non-matching)
// GLOBAL DAT_00553288 int

int func_00553288(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  iVar1 = func_005532D8(param_1,param_2,param_3);
  iStack_10 = DAT_00553288;
  uStack_c = param_4;
  iVar1 = func_00533400(iVar1,&iStack_10);
  return iVar1;
}

