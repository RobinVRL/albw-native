#include "ghidra_types.h"

extern int func_00588BF0(int param_1,int param_2);
extern int func_00589030(int param_1,int param_2);
extern int *DAT_00298dd0;

// GLOBAL DAT_00298dd0 int *
// USA 00298CD8 <- EU 00298D7C (Ghidra, function missing from the decomp table)

void func_00298CD8(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x34b) == '\0') {
    iVar2 = func_00589030(*DAT_00298dd0,*(int *)(param_1 + 0x2cc));
    *(char *)(param_1 + 0x34b) = (char)iVar2;
    if ((iVar2 == 0) && (bVar1 = func_00588BF0(param_1,0), !bVar1)) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x34a) = 1;
  *(undefined1 *)(param_1 + 0x354) = 1;
  return;
}

