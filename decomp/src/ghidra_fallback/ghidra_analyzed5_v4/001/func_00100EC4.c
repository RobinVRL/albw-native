#include "ghidra_types.h"

extern int func_00101F74(int param_1);
extern int func_00101F80(int param_1);
extern int *DAT_00100f5c;
extern int *DAT_00100f60;
extern int *DAT_00100f64;

// USA 00100EC4 <- EU 00100EC4 (Ghidra, non-matching)
// GLOBAL DAT_00100f5c int *
// GLOBAL DAT_00100f60 int *
// GLOBAL DAT_00100f64 int *

undefined4 func_00100EC4(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  piVar2 = DAT_00100f5c;
  if ((DAT_00100f5c[2] == 0) || (iVar3 = func_00101F80(DAT_00100f5c[2]), iVar3 != 0)) {
    return 2;
  }
  iVar3 = *DAT_00100f60;
  cVar1 = '\0';
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + 0x673);
  }
  if (iVar3 == 0 || cVar1 == '\0') {
    bVar5 = *piVar2 == 0;
    uVar4 = 0;
    if (!bVar5) {
      uVar4 = *(uint *)(*piVar2 + 0x1c);
    }
    bVar6 = uVar4 == 0;
    if (!bVar5 && !bVar6) {
      uVar4 = (uint)*(byte *)(uVar4 + 400);
    }
    if ((bVar5 || bVar6) || uVar4 == 0) {
      return 0;
    }
    iVar3 = *DAT_00100f64;
  }
  else {
    iVar3 = *DAT_00100f64;
  }
  if (iVar3 != 0) {
    func_00101F74(iVar3);
  }
  return 1;
}

