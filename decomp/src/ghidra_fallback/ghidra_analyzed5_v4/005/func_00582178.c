#include "ghidra_types.h"

extern int func_0052A378(int param_1,int *param_2,char *param_3,int param_4);
extern int *DAT_00582188;

// USA 00582178 <- EU 00582150 (Ghidra, non-matching)
// GLOBAL DAT_00582188 int *

int func_00582178(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(*DAT_00582188 + 0x61) == '\0') {
    iVar1 = func_0052A378(*(int *)(param_1 + 0x40),param_2,(char *)(*DAT_00582188 + 0x18),param_3);
    return iVar1;
  }
  return 0;
}

