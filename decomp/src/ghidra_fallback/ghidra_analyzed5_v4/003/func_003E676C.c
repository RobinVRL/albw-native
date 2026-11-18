#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_001164C4(undefined4 *param_1,uint param_2,uint param_3);
extern int func_003E68D8(int param_1,uint param_2);
extern uint *DAT_003e67b0;
extern int *DAT_003e67b4;

// USA 003E676C <- EU 003E674C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_003e67b0 uint *
// GLOBAL DAT_003e67b4 int *

undefined4 func_003E676C(uint param_1,undefined4 param_2,undefined4 *param_3,int param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  
  *(uint *)(param_1 + 0x24) = param_5 & 0xff;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 **)(param_1 + 0xc) = param_3;
  *(int *)(param_1 + 0x10) = param_4;
  if ((param_5 & 2) != 0) {
    func_001164C4(param_3,param_4 - (int)param_3,*DAT_003e67b0);
  }
  piVar2 = DAT_003e67b4;
  piVar1 = func_003E68D8((int)DAT_003e67b4,param_1);
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 6;
  }
  return func_00112364(piVar2,(int)(piVar2 + 1),(int *)(param_1 + 4));
}

