// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_00556D48(int param_1);
extern int func_00556D7C(int param_1);
extern int func_00556DC0(int param_1);
extern int *DAT_0027cdf8;

// USA 0027CCD4 <- EU 0027CCFC (Ghidra, non-matching)
// GLOBAL DAT_0027cdf8 int *

undefined4 func_0027CCD4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  piVar3 = DAT_0027cdf8;
  if (param_2 == 0) {
    iVar2 = func_00556D48(*DAT_0027cdf8);
    if ((((iVar2 != 0) || (iVar2 = func_00556D7C(*piVar3), iVar2 != 0)) ||
        (cVar1 = func_00556DC0(*piVar3), cVar1 != '\0')) &&
       ((1 < *(int *)(param_1 + 0x40c) && (*(char *)(param_1 + 0x5bd) == '\0')))) {
      *(undefined1 *)(param_1 + 0x5bd) = 1;
      uVar5 = 0;
      if (0 < *(int *)(param_1 + 0x58c)) {
        do {
          piVar3 = (int *)(param_1 + 0x510);
          if (uVar5 < 0xc) {
            piVar3 = piVar3 + uVar5 * 2;
          }
          iVar2 = *piVar3;
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == piVar3[1])) {
            iVar4 = *(int *)(iVar2 + 0x20);
            if ((iVar4 != 0) &&
               ((*(int *)(iVar2 + 0x24) == *(int *)(iVar4 + 0xc) && (0 < *(int *)(iVar4 + 4))))) {
              *(undefined1 *)(iVar4 + 0x280) = 1;
            }
            *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < *(int *)(param_1 + 0x58c));
      }
    }
  }
  return func_0014E138(param_1,param_2);
}

