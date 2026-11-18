#include "ghidra_types.h"

extern int func_003D308C(int param_1);
extern char *DAT_003d101c;
extern int DAT_003d1020;

// USA 003D0FE8 <- EU 003D0FC4 (Ghidra, non-matching)
// GLOBAL DAT_003d101c char *
// GLOBAL DAT_003d1020 int

void func_003D0FE8(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = DAT_003d1020;
  pcVar1 = DAT_003d101c;
  if (*DAT_003d101c != '\0') {
    *(undefined4 *)(DAT_003d1020 + 4) = 0;
    *(char *)(iVar2 + 8) = (char)param_2;
    *(char *)(iVar2 + 9) = (char)((uint)param_2 >> 8);
    *(char *)(iVar2 + 10) = (char)((uint)param_2 >> 0x10);
    *(undefined4 *)(iVar2 + -4) = 0xffffffff;
    func_003D308C(iVar2 + -100);
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    *pcVar1 = '\0';
  }
  return;
}

