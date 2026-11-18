#include "ghidra_types.h"

extern int func_00332880(int param_1);
extern int func_00581D48(int param_1,float *param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_00332a88;
extern int *DAT_00332a8c;
extern int DAT_00332a90;

// USA 00332970 <- EU 0033294C (Ghidra, non-matching)
// GLOBAL DAT_00332a88 int *
// GLOBAL DAT_00332a8c int *
// GLOBAL DAT_00332a90 int

undefined4 func_00332970(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar5 = func_00581D48(*DAT_00332a88,(float *)(param_1 + 8));
  piVar3 = DAT_00332a8c;
  bVar9 = *(short *)(param_1 + 0x30) != 1;
  cVar4 = '\x01';
  if (bVar9) {
    cVar4 = *(char *)(param_1 + 0x494);
  }
  iVar8 = 0;
  if (bVar9 && cVar4 != '\0') {
    sVar1 = *(short *)(param_1 + 0x36);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x38);
  }
  piVar6 = (int *)func_005841A8(*DAT_00332a8c,param_2,*(int **)(DAT_00332a90 + *DAT_00332a8c));
  if (*(int **)(*piVar3 + 0x3dbc8) != piVar6) {
    do {
      iVar7 = *piVar6;
      bVar9 = *(short *)(iVar7 + 0x30) != 1;
      cVar4 = '\x01';
      if (bVar9) {
        cVar4 = *(char *)(param_1 + 0x494);
      }
      if (bVar9 && cVar4 != '\0') {
        sVar2 = *(short *)(iVar7 + 0x36);
      }
      else {
        sVar2 = *(short *)(iVar7 + 0x38);
      }
      if ((((sVar2 == sVar1) && (*(int *)(param_1 + 0x2cc) != *(int *)(*piVar6 + 0x2cc))) &&
          (iVar7 = func_00581D48(*DAT_00332a88,(float *)(*piVar6 + 8)), iVar7 == iVar5)) &&
         (iVar8 != 4)) {
        iVar7 = iVar8 * 4;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(param_1 + 0x4fc + iVar7) = *(undefined4 *)(*piVar6 + 0x2cc);
      }
      piVar6 = (int *)func_005841A8(*piVar3,param_2,piVar6 + 1);
    } while (*(int **)(*piVar3 + 0x3dbc8) != piVar6);
  }
  return func_00332880(param_1);
}

