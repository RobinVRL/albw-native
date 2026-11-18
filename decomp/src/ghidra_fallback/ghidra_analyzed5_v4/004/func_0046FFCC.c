#include "ghidra_types.h"

extern int func_0014D494(int param_1);
extern int *DAT_0046ffe0;

// USA 0046FFCC <- EU 0046FFA4 (Ghidra, non-matching)
// GLOBAL DAT_0046ffe0 int *

undefined4 func_0046FFCC(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  
  piVar2 = DAT_0046ffe0;
  cVar1 = *(char *)(param_1 + 0xd);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0xe);
  }
  if (bVar3 && cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xe4) = param_2;
    *(undefined1 *)(param_1 + 0xe) = 1;
    if (*piVar2 != 0) {
      return func_0014D494(*(int *)(*piVar2 + 300));
    }
  }
  return 0;
}

