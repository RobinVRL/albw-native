#include "ghidra_types.h"

extern int func_0010140C(void);
extern int func_001023F8(void);
extern int func_001024E0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_00102794(void);
extern int func_003D0FC8(void *param_1);
extern int func_003D1240(void);
extern int func_003D127C(void);
extern char *DAT_003ce8f4;

// USA 003CE8AC <- EU 003CE888 (Ghidra, non-matching)
// GLOBAL DAT_003ce8f4 char *

int func_003CE8AC(undefined4 param_1)

{
  char *pcVar1;
  byte bVar2;
  undefined4 extraout_r1;
  undefined4 in_r2;
  int iVar3;
  
  func_003D0FC8(param_1);
  pcVar1 = DAT_003ce8f4;
  iVar3 = 0;
  if ((*DAT_003ce8f4 == '\0') && (iVar3 = func_003D127C(), -1 < iVar3)) {
    func_003D1240();
    iVar3 = func_00102794();
    if (-1 < iVar3) {
      pcVar1[1] = '\x01';
      func_0010140C();
      bVar2 = func_001023F8();
      pcVar1[4] = bVar2;
      func_001024E0((uint)bVar2,extraout_r1,in_r2);
      *pcVar1 = '\x01';
    }
  }
  return iVar3;
}

