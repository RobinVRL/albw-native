#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004bdfc8;
extern int DAT_004bdfcc;

// USA 004BDF3C <- EU 004BDF14 (Ghidra, non-matching)
// GLOBAL DAT_004bdfc8 int *
// GLOBAL DAT_004bdfcc int

void func_004BDF3C(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = DAT_004bdfcc;
  iVar7 = *DAT_004bdfc8;
  if (iVar7 != 0) {
    uVar5 = 0;
    uVar2 = 0;
    while( true ) {
      uVar6 = *(undefined4 *)(iVar1 + uVar2 * 4);
      piVar3 = (int *)func_005841A8(iVar7,uVar6,*(int **)(iVar7 + 0x3dbc0));
      if (*(int **)(iVar7 + 0x3dbc8) != piVar3) {
        do {
          piVar4 = (int *)*piVar3;
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0x9c))(piVar4,param_1);
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
  return;
}

