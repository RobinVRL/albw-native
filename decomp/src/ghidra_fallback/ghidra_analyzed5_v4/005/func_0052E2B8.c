#include "ghidra_types.h"

extern int func_00584B94(int param_1,int param_2);
extern int *DAT_0052e2f8;
extern int *DAT_0052e2fc;
extern int DAT_0052e300;

// USA 0052E2B8 <- EU 0052E290 (Ghidra, non-matching)
// GLOBAL DAT_0052e2f8 int *
// GLOBAL DAT_0052e2fc int *
// GLOBAL DAT_0052e300 int

bool func_0052E2B8(int param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  
  piVar1 = DAT_0052e2fc;
  if (*(char *)(param_1 + 0x6c4) == '\0') {
    if ((int)*(char *)(*DAT_0052e2f8 + 0x18) - 9U < 0xd) {
      bVar2 = func_00584B94(*DAT_0052e2fc,0xfa);
      bVar2 = !bVar2;
      bVar3 = func_00584B94(*piVar1,DAT_0052e300);
      if (bVar3) {
        bVar2 = true;
      }
    }
    else {
      bVar2 = false;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

