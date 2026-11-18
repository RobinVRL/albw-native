#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int *DAT_0016121c;
extern uint *DAT_00161220;
extern undefined4 *DAT_00161224;
extern undefined4 DAT_00161228;

// USA 00161178 <- EU 0016117C (Ghidra, non-matching)
// GLOBAL DAT_0016121c int *
// GLOBAL DAT_00161220 uint *
// GLOBAL DAT_00161224 undefined4 *
// GLOBAL DAT_00161228 undefined4

undefined4 * func_00161178(undefined4 *param_1)

{
  int iVar1;
  
  if ((*(ushort *)((int)param_1 + 0x2e) & 0xff) != 0) {
    if ((int)param_1[0x37f] < 0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = (undefined4 *)func_0052FBDC(*DAT_0016121c + 0x3dbbc,param_1[0x37f],0);
      if (((*DAT_00161220 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00161220), iVar1 != 0)) {
        *DAT_00161224 = DAT_00161228;
      }
      if ((param_1 == (undefined4 *)0x0) ||
         (iVar1 = (**(code **)*param_1)(param_1,DAT_00161224), iVar1 == 0)) {
        param_1 = (undefined4 *)0x0;
      }
    }
  }
  return param_1;
}

