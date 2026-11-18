#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_00104868(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4);
extern int func_0010873C(uint param_1,undefined4 param_2);
extern int *DAT_0010318c;
extern undefined4 *DAT_00103190;
extern uint DAT_00103194;

// USA 00103128 <- EU 00103128 (Ghidra, non-matching)
// GLOBAL DAT_0010318c int *
// GLOBAL DAT_00103190 undefined4 *
// GLOBAL DAT_00103194 uint

uint func_00103128(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = DAT_00103190;
  piVar1 = DAT_0010318c;
  if (DAT_00103190[1] == 0) {
    DAT_00103190[1] = *DAT_00103190;
  }
  uVar5 = DAT_00103194;
  if (*piVar1 == 0) {
    pcVar3 = (char *)puVar2[1];
    iVar4 = func_00103CBC(pcVar3);
    uVar5 = func_00104868(piVar1,(undefined4 *)pcVar3,iVar4,0);
  }
  if ((int)uVar5 < 0) {
    func_0010873C(uVar5,0x103180);
  }
  return uVar5;
}

