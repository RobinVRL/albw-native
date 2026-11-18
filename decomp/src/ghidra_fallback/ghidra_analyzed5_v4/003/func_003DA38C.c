#include "ghidra_types.h"

extern int func_003D9974(int *param_1,uint param_2,uint param_3);
extern int DAT_003da3cc;
extern int DAT_003da3d0;

// USA 003DA38C <- EU 003DA36C (Ghidra, non-matching)
// GLOBAL DAT_003da3cc int
// GLOBAL DAT_003da3d0 int

undefined4 func_003DA38C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = DAT_003da3d0;
  piVar5 = (int *)(DAT_003da3cc + param_2 * 8);
  iVar4 = piVar5[1] + *piVar5 + -1;
  if (*piVar5 <= iVar4) {
    do {
      puVar3 = (ushort *)(iVar1 + iVar4 * 4);
      iVar2 = func_003D9974(param_1,(uint)*puVar3,(uint)puVar3[1]);
      if (iVar2 == 0) {
        return 0;
      }
      iVar4 = iVar4 + -1;
    } while (*piVar5 <= iVar4);
  }
  return 1;
}

