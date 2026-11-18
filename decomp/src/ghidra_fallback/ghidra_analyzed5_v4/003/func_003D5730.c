#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int *DAT_003d579c;
extern int *DAT_003d57a0;
extern int DAT_003d57a4;
extern int *DAT_003d57a8;

// USA 003D5730 <- EU 003D5710 (Ghidra, non-matching)
// GLOBAL DAT_003d579c int *
// GLOBAL DAT_003d57a0 int *
// GLOBAL DAT_003d57a4 int
// GLOBAL DAT_003d57a8 int *

int func_003D5730(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = DAT_003d579c;
  func_0010C0C0(DAT_003d579c);
  iVar3 = DAT_003d57a4;
  piVar2 = DAT_003d57a0;
  if (*DAT_003d57a0 == 0) {
    func_0010C160(piVar1);
    return iVar3;
  }
  if (*DAT_003d57a0 == 1) {
    iVar3 = *DAT_003d57a8;
    software_interrupt(0x23);
    if (iVar3 < 0) {
      func_0010C160(piVar1);
      return iVar3;
    }
    *DAT_003d57a8 = 0;
  }
  *piVar2 = *piVar2 + -1;
  func_0010C160(piVar1);
  return 0;
}

