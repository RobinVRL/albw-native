#include "ghidra_types.h"

extern int func_003D135C(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4, undefined4 *param_5,undefined4 param_6,int param_7);
extern int func_003D1810(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4, undefined4 *param_5,undefined4 param_6,int param_7);
extern int *DAT_003d10fc;
extern int *DAT_003d1100;
extern int DAT_003d1104;

// USA 003D10C4 <- EU 003D10A0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_003d10fc int *
// GLOBAL DAT_003d1100 int *
// GLOBAL DAT_003d1104 int

int func_003D10C4(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,
                 undefined4 *param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  
  if (*DAT_003d10fc == 0) {
    iVar1 = DAT_003d1104;
    if (*DAT_003d1100 != 0) {
      iVar1 = func_003D135C(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return iVar1;
    }
  }
  else {
    iVar1 = func_003D1810(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return iVar1;
}

