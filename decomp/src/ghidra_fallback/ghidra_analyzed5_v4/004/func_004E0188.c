#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int *piRam004e01e4;
extern undefined4 DAT_004e01e0;

// USA 004E0188 <- EU 004E0160 (Ghidra, non-matching)
// GLOBAL DAT_004e01e0 undefined4
// GLOBAL UNK_004e01e4 int *

undefined4 func_004E0188(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  
  *(undefined2 *)(param_1 + 0x42c) = 2;
  uVar2 = DAT_004e01e0;
  *(undefined1 *)(param_1 + 0x425) = 1;
  *(undefined1 *)(param_1 + 0x426) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = uVar2;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  func_00151148(*(int *)(param_1 + 0x410),0);
  if (((*piRam004e01e4 != 0) &&
      (cVar1 = *(char *)(*piRam004e01e4 + 0x18), cVar1 == '\a' || cVar1 == '%')) &&
     (piVar3 = *(int **)(param_1 + 0x40c), piVar3 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004e01d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar3 + 0x10))(piVar3,0x24);
  }
  return 0;
}

