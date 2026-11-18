#include "ghidra_types.h"

extern int func_00547B20(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_004bfce4;
extern int DAT_004bfce8;

// USA 004BFC24 <- EU 004BFBFC (Ghidra, non-matching)
// GLOBAL DAT_004bfce4 int *
// GLOBAL DAT_004bfce8 int

undefined4 func_004BFC24(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = *DAT_004bfce4;
  if (iVar7 != 0) {
    uVar5 = 0;
    uVar2 = 0;
    while( true ) {
      uVar6 = *(undefined4 *)(DAT_004bfce8 + uVar2 * 4);
      piVar3 = (int *)func_005841A8(iVar7,uVar6,*(int **)(iVar7 + 0x3dbc0));
      if (*(int **)(iVar7 + 0x3dbc8) != piVar3) {
        do {
          iVar4 = *piVar3;
          if (((iVar4 != 0) && (bVar1 = func_00547B20(iVar4 + 4), bVar1)) &&
             (bVar1 = func_00588BF0(iVar4,0), !bVar1)) {
            *param_1 = *(undefined4 *)(iVar4 + 0x2cc);
            return 1;
          }
          piVar3 = (int *)func_005841A8(iVar7,uVar6,piVar3 + 1);
        } while (*(int **)(iVar7 + 0x3dbc8) != piVar3);
      }
      uVar5 = uVar5 + 1;
      if (6 < (int)uVar5) break;
      uVar2 = uVar5;
      if (6 < uVar5) {
        uVar2 = 0;
      }
    }
  }
  return 0;
}

