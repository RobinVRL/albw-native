#include "ghidra_types.h"

extern int func_003CDED0(void);
extern int func_003CE6EC(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern char *DAT_003cdea8;

// USA 003CDEA4 <- EU 003CDE80 (Ghidra, non-matching)
// GLOBAL DAT_003cdea8 char *

void func_003CDEA4(void)

{
  char *pcVar1;
  undefined4 in_r2;
  undefined8 uVar2;
  
  pcVar1 = DAT_003cdea8;
  if (*DAT_003cdea8 == '\0') {
    uVar2 = func_003CDED0();
    func_003CE6EC((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),in_r2);
    *pcVar1 = '\x01';
  }
  return;
}

