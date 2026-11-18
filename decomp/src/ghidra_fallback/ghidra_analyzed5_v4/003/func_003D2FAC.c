#include "ghidra_types.h"

extern int func_003E4550(int *param_1);
extern int DAT_003d2fc8;
extern int *DAT_003d2fcc;
extern int DAT_003d2fd0;

// USA 003D2FAC <- EU 003D2F88 (Ghidra, non-matching)
// GLOBAL DAT_003d2fc8 int
// GLOBAL DAT_003d2fcc int *
// GLOBAL DAT_003d2fd0 int

void func_003D2FAC(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_003d2fc8;
  if (*(int *)(DAT_003d2fc8 + 8) != 0) {
    func_003E4550(DAT_003d2fcc);
    software_interrupt(0x23);
    uVar2 = *(undefined4 *)(DAT_003d2fd0 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
  }
  return;
}

