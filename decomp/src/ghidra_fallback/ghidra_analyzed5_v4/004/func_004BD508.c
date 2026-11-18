#include "ghidra_types.h"

extern int func_00547B20(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004bd59c;
extern int DAT_004bd5a0;

// USA 004BD508 <- EU 004BD4E0 (Ghidra, non-matching)
// GLOBAL DAT_004bd59c int *
// GLOBAL DAT_004bd5a0 int

bool func_004BD508(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = DAT_004bd5a0;
  iVar7 = *DAT_004bd59c;
  if (iVar7 != 0) {
    uVar5 = 0;
    uVar3 = 0;
    while( true ) {
      uVar6 = *(undefined4 *)(iVar1 + uVar3 * 4);
      piVar4 = (int *)func_005841A8(iVar7,uVar6,*(int **)(iVar7 + 0x3dbc0));
      if (*(int **)(iVar7 + 0x3dbc8) != piVar4) {
        do {
          if ((*piVar4 != 0) && (bVar2 = func_00547B20(*piVar4 + 4), !bVar2)) {
            return bVar2;
          }
          piVar4 = (int *)func_005841A8(iVar7,uVar6,piVar4 + 1);
        } while (*(int **)(iVar7 + 0x3dbc8) != piVar4);
      }
      uVar5 = uVar5 + 1;
      if (6 < (int)uVar5) break;
      uVar3 = uVar5;
      if (6 < uVar5) {
        uVar3 = 0;
      }
    }
  }
  return true;
}

