#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_00104800(void);
extern int func_00104868(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern uint DAT_0010aa94;
extern uint DAT_0010aa98;

// USA 0010AA40 <- EU 0010AA40 (Ghidra, non-matching)
// GLOBAL DAT_0010aa94 uint
// GLOBAL DAT_0010aa98 uint

uint func_0010AA40(int *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 in_r2;
  
  uVar1 = func_00104800();
                    /* WARNING: Subroutine does not return */
  if (-((int)uVar1 >> 0x1f) != 0) {
    func_0010C1B8(-((int)uVar1 >> 0x1f),extraout_r1,in_r2);
  }
  uVar1 = DAT_0010aa94;
  if (*param_1 == 0) {
    iVar2 = func_00103CBC(param_2);
    uVar1 = func_00104868(param_1,(undefined4 *)param_2,iVar2,0);
    if ((uVar1 & 0x80000000) != 0) {
      uVar1 = DAT_0010aa98;
    }
  }
  return uVar1;
}

