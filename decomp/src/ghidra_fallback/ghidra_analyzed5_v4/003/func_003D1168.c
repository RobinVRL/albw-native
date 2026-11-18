#include "ghidra_types.h"

extern int func_003D1418(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
extern int func_003D18CC(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
extern int *DAT_003d11a0;
extern int *DAT_003d11a4;
extern int DAT_003d11a8;

// USA 003D1168 <- EU 003D1144 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4
// GLOBAL DAT_003d11a0 int *
// GLOBAL DAT_003d11a4 int *
// GLOBAL DAT_003d11a8 int

int func_003D1168(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  if (*DAT_003d11a0 == 0) {
    iVar1 = DAT_003d11a8;
    if (*DAT_003d11a4 != 0) {
      iVar1 = func_003D1418(param_1,param_2,param_3,param_4,param_5,param_6);
      return iVar1;
    }
  }
  else {
    iVar1 = func_003D18CC(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return iVar1;
}

