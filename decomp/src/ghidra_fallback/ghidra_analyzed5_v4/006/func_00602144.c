#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_0060226C(void);
extern int DAT_006021e8;

// GLOBAL DAT_006021e8 int
// USA 00602144 <- EU 0060211C (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void func_00602144(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_r7;
  int iVar4;
  
  iVar1 = DAT_006021e8;
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  iVar3 = *(int *)(DAT_006021e8 + 0xa0);
  iVar4 = *(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x28) * 0x1c;
  func_003E3F00(*(int *)(iVar3 + 0x28) * 7);
  iVar2 = *(int *)(iVar3 + 0x28) + 1;
  *(int *)(iVar3 + 0x28) = iVar2;
  if ((*(code **)(iVar3 + 0x38) != (code *)0x0) &&
     ((*(char *)(iVar4 + 1) != '\0' ||
      ((iVar2 == *(int *)(iVar3 + 0x20) && (*(char *)(iVar3 + 0x3c) != '\0')))))) {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x38);
    unaff_r7 = iVar2;
  }
  if (*(char *)(iVar4 + 2) == '\0') {
    if (iVar2 < *(int *)(iVar3 + 0x20)) {
      iVar2 = func_0060226C();
    }
    else {
      *(undefined1 *)(iVar1 + 0x11) = 0;
    }
  }
  else {
    *(undefined1 *)(iVar1 + 0x12) = 0;
    *(undefined1 *)(iVar1 + 0x18) = 0;
    *(undefined1 *)(iVar1 + 0x11) = 0;
  }
  func_003E3F10(iVar2);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006021c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(unaff_r7);
    return;
  }
  return;
}

