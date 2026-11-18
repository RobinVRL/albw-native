#include "ghidra_types.h"

extern int func_003DCEAC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5 ,uint param_6,int param_7);
extern int func_003DD098(int param_1);
extern int func_003DD318(int param_1,int param_2,int param_3,uint param_4);

// USA 003DCFD0 <- EU 003DCFB0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 undefined4
// PARAM param_8 Stack[0xc]:4 int

uint func_003DCFD0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  uint uVar1;
  
  uVar1 = func_003DCEAC(param_1,param_6,param_7,*param_2,param_2[1],param_2[2],param_8);
  if (-1 < (int)uVar1) {
    param_1[8] = param_3;
    param_1[9] = param_4;
    if ((param_5 == (int *)0x0) ||
       (uVar1 = func_003DD318((int)param_1,*param_5,param_5[1],param_5[2]), -1 < (int)uVar1)) {
      return 0;
    }
    func_003DD098((int)param_1);
  }
  return uVar1;
}

