#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004c01b4;
extern int DAT_004c01b8;

// USA 004C012C <- EU 004C0104 (Ghidra, non-matching)
// GLOBAL DAT_004c01b4 int *
// GLOBAL DAT_004c01b8 int

void func_004C012C(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = DAT_004c01b8;
  iVar6 = *DAT_004c01b4;
  if (iVar6 != 0) {
    uVar4 = 0;
    uVar2 = 0;
    while( true ) {
      uVar5 = *(undefined4 *)(iVar1 + uVar2 * 4);
      piVar3 = (int *)func_005841A8(iVar6,uVar5,*(int **)(iVar6 + 0x3dbc0));
      if (*(int **)(iVar6 + 0x3dbc8) != piVar3) {
        do {
          if ((int *)*piVar3 != (int *)0x0) {
            (**(code **)(*(int *)*piVar3 + 0xa0))((int *)*piVar3);
          }
          piVar3 = (int *)func_005841A8(iVar6,uVar5,piVar3 + 1);
        } while (*(int **)(iVar6 + 0x3dbc8) != piVar3);
      }
      uVar4 = uVar4 + 1;
      if (6 < (int)uVar4) break;
      uVar2 = uVar4;
      if (6 < uVar4) {
        uVar2 = 0;
      }
    }
  }
  return;
}

