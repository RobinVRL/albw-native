#include "ghidra_types.h"

extern int func_003D0FE8(undefined4 param_1,undefined4 param_2);
extern int func_003D121C(void);
extern int func_003D5730(void);
extern char *DAT_003cecac;

// USA 003CEC70 <- EU 003CEC4C (Ghidra, non-matching)
// GLOBAL DAT_003cecac char *

int func_003CEC70(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_003cecac;
  iVar2 = 0;
  if (*DAT_003cecac != '\0') {
    if (DAT_003cecac[1] != '\0') {
      iVar2 = func_003D5730();
      if (iVar2 < 0) {
        return iVar2;
      }
      pcVar1[2] = '\0';
      pcVar1[1] = '\0';
    }
    iVar2 = func_003D121C();
    if (-1 < iVar2) {
      func_003D0FE8(iVar2,0);
      *pcVar1 = '\0';
    }
  }
  return iVar2;
}

