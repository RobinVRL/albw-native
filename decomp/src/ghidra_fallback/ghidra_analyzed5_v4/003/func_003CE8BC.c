#include "ghidra_types.h"

extern int func_0010140C(void);
extern int func_001023F8(void);
extern int func_001024E0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_00102794(void);
extern int func_003D1240(void);
extern int func_003D127C(void);
extern char *DAT_003ce8f4;

// USA 003CE8BC <- EU 003CE898 (Ghidra, non-matching)
// GLOBAL DAT_003ce8f4 char *

uint func_003CE8BC(void)

{
  char *pcVar1;
  byte bVar2;
  undefined4 extraout_r1;
  undefined4 in_r2;
  uint uVar3;
  
  pcVar1 = DAT_003ce8f4;
  uVar3 = 0;
  if ((*DAT_003ce8f4 == '\0') && (uVar3 = func_003D127C(), -1 < (int)uVar3)) {
    func_003D1240();
    uVar3 = func_00102794();
    if (-1 < (int)uVar3) {
      pcVar1[1] = '\x01';
      func_0010140C();
      bVar2 = func_001023F8();
      pcVar1[4] = bVar2;
      func_001024E0((uint)bVar2,extraout_r1,in_r2);
      *pcVar1 = '\x01';
    }
  }
  return uVar3;
}

