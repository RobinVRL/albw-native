#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_00104868(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4);
extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_0010A98C(uint param_1);
extern uint *DAT_00108e80;
extern int *DAT_00108e84;
extern undefined4 *DAT_00108e88;
extern uint DAT_00108e8c;

// USA 00108DF8 <- EU 00108DF8 (Ghidra, non-matching)
// GLOBAL DAT_00108e80 uint *
// GLOBAL DAT_00108e84 int *
// GLOBAL DAT_00108e88 undefined4 *
// GLOBAL DAT_00108e8c uint

undefined4 func_00108DF8(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  uVar3 = *DAT_00108e80;
  if ((uVar3 != 0) && (software_interrupt(0x24), (int)uVar3 < 0)) {
    func_0010A98C(uVar3);
  }
  puVar2 = DAT_00108e88;
  piVar1 = DAT_00108e84;
  if (DAT_00108e88[1] == 0) {
    DAT_00108e88[1] = *DAT_00108e88;
  }
  uVar3 = DAT_00108e8c;
  if (*piVar1 == 0) {
    pcVar4 = (char *)puVar2[1];
    iVar5 = func_00103CBC(pcVar4);
    uVar3 = func_00104868(piVar1,(undefined4 *)pcVar4,iVar5,0);
  }
  if ((int)uVar3 < 0) {
    return func_0010873C(uVar3,0x108e70);
  }
  return 0;
}

