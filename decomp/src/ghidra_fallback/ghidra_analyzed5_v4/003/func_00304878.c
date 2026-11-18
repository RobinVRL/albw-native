#include "ghidra_types.h"

extern int func_00581D48(int param_1,float *param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_00304974;
extern int *DAT_00304978;
extern undefined4 *DAT_0030497c;
extern int DAT_00304980;

// USA 00304878 <- EU 00304854 (Ghidra, non-matching)
// GLOBAL DAT_00304974 int *
// GLOBAL DAT_00304978 int *
// GLOBAL DAT_0030497c undefined4 *
// GLOBAL DAT_00304980 int

void func_00304878(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar4 = func_00581D48(*DAT_00304974,(float *)(param_1 + 8));
  piVar2 = DAT_00304978;
  sVar1 = *(short *)(param_1 + 0x36);
  iVar8 = 0;
  piVar5 = (int *)func_005841A8(*DAT_00304978,*DAT_0030497c,*(int **)(DAT_00304980 + *DAT_00304978))
  ;
  puVar3 = DAT_0030497c;
  if (*(int **)(*piVar2 + 0x3dbc8) != piVar5) {
    do {
      if ((((*(short *)(*piVar5 + 0x36) == sVar1) &&
           (*(int *)(param_1 + 0x2cc) != *(int *)(*piVar5 + 0x2cc))) &&
          (iVar6 = func_00581D48(*DAT_00304974,(float *)(*piVar5 + 8)), iVar6 == iVar4)) &&
         (iVar8 != 4)) {
        uVar7 = *(undefined4 *)(*piVar5 + 0x2cc);
        *(undefined4 *)(param_1 + 0x4f4 + iVar8 * 4) = uVar7;
        iVar8 = iVar8 + 1;
        if (*(short *)(*piVar5 + 0x2e) == 1) {
          *(undefined4 *)(param_1 + 0x4f0) = uVar7;
        }
      }
      piVar5 = (int *)func_005841A8(*piVar2,*puVar3,piVar5 + 1);
    } while (*(int **)(*piVar2 + 0x3dbc8) != piVar5);
  }
  if (*(short *)(param_1 + 0x2e) == 1) {
    *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x2cc);
  }
  return;
}

