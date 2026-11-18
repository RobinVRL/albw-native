#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_00104868(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4);
extern int DAT_001014e4;
extern int *DAT_001014e8;

// USA 0010149C <- EU 0010149C (Ghidra, non-matching)
// GLOBAL DAT_001014e4 int
// GLOBAL DAT_001014e8 int *

int func_0010149C(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(DAT_001014e4 + 4);
  if (*DAT_001014e8 == 0) {
    iVar1 = func_00103CBC(pcVar2);
    iVar1 = func_00104868(DAT_001014e8,(undefined4 *)pcVar2,iVar1,0);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  return 0;
}

