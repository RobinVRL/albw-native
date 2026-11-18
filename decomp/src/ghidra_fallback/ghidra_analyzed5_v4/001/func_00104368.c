#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_00104800(void);
extern int func_00104868(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern undefined1 *DAT_00104404;
extern int *DAT_00104408;
extern int DAT_0010440c;
extern uint DAT_00104410;
extern uint DAT_00104414;

// USA 00104368 <- EU 00104368 (Ghidra, non-matching)
// GLOBAL DAT_00104404 undefined1 *
// GLOBAL DAT_00104408 int *
// GLOBAL DAT_0010440c int
// GLOBAL DAT_00104410 uint
// GLOBAL DAT_00104414 uint

uint func_00104368(void)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 in_r2;
  char *pcVar6;
  
  piVar2 = DAT_00104408;
  puVar1 = DAT_00104404;
  if (*(int *)(DAT_00104404 + 4) == 0) {
    pcVar6 = *(char **)(DAT_0010440c + 4);
    uVar4 = func_00104800();
    uVar3 = DAT_00104410;
                    /* WARNING: Subroutine does not return */
    if (-((int)uVar4 >> 0x1f) != 0) {
      func_0010C1B8(-((int)uVar4 >> 0x1f),extraout_r1,in_r2);
    }
    uVar4 = DAT_00104414;
    if (*piVar2 == 0) {
      iVar5 = func_00103CBC(pcVar6);
      uVar4 = func_00104868(piVar2,(undefined4 *)pcVar6,iVar5,0);
      if ((uVar4 & 0x80000000) != 0) {
        uVar4 = uVar3;
      }
    }
    if ((uVar4 & 0x80000000) == 0) {
      *puVar1 = 1;
    }
    else if (uVar4 == uVar3) {
      return uVar4;
    }
  }
  *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
  return 0;
}

