#include "ghidra_types.h"

extern int func_0012F914(int param_1);
extern int func_002769DC(int param_1,int param_2,int param_3);
extern int func_00276D80(int param_1,int param_2);
extern int func_002FD2CC(int param_1);
extern int func_004CDDEC(int param_1,int *param_2,int param_3);
extern int func_00581C5C(int param_1);
extern int func_00588FD4(int param_1,float *param_2);
extern int *DAT_002fd740;
extern int *DAT_002fd744;
extern int *DAT_002fd748;
extern int DAT_002fd74c;
extern int *DAT_002fd750;
extern int DAT_002fd754;
extern int DAT_002fd758;
extern int *DAT_002fd75c;

// USA 002FD5E4 <- EU 002FD5C0 (Ghidra, non-matching)
// GLOBAL DAT_002fd740 int *
// GLOBAL DAT_002fd744 int *
// GLOBAL DAT_002fd748 int *
// GLOBAL DAT_002fd74c int
// GLOBAL DAT_002fd750 int *
// GLOBAL DAT_002fd754 int
// GLOBAL DAT_002fd758 int
// GLOBAL DAT_002fd75c int *

undefined4 func_002FD5E4(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  piVar1 = DAT_002fd740;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  if ((*piVar1 == 0) || (cVar4 = func_004CDDEC(*piVar1,param_1,0), cVar4 == '\0')) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x1f) = 2;
  param_1[0x1d] = param_1[0x1c];
  param_1[0x1c] = (int)*(short *)(param_2 + 0x1e);
  func_00588FD4(*DAT_002fd744,(float *)(param_1 + 0x11));
  func_002FD2CC((int)param_1);
  piVar1 = DAT_002fd748;
  iVar11 = param_1[0x1c] * DAT_002fd74c;
  iVar8 = *(int *)(*DAT_002fd748 + 0x38);
  iVar5 = func_00581C5C(*DAT_002fd748);
  iVar3 = DAT_002fd758;
  iVar7 = DAT_002fd754;
  piVar2 = DAT_002fd750;
  uVar9 = *(uint *)(iVar5 + 0x304);
  uVar10 = uVar9;
  if (0 < (int)uVar9) {
    uVar10 = *(uint *)(iVar5 + 0x304);
  }
  uVar6 = 0;
  if (0 < (int)uVar9) {
    do {
      if (uVar6 < uVar10) {
        iVar12 = *(int *)(*(int *)(iVar5 + 0x30c) + uVar6 * 4);
      }
      else {
        iVar12 = 0;
      }
      if (*(short *)(iVar12 + 0x70) == *(short *)(iVar8 + iVar11 * 4 + 0x18ac)) {
        *DAT_002fd750 = DAT_002fd754;
        piVar2[1] = iVar7 + 10;
        iVar7 = iVar7 + 0xc;
        goto LAB_002fd6d4;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar10);
  }
  *DAT_002fd750 = DAT_002fd758;
  piVar2[1] = iVar3 + 0xd;
  iVar7 = iVar3 + 0xf;
LAB_002fd6d4:
  piVar2[2] = iVar7;
  *(undefined1 *)((int)param_1 + 0x7f) = 0;
  iVar7 = *piVar1;
  if ((iVar7 != 0) && (func_002769DC(*(int *)(iVar7 + 0x38),param_1[0x1c],1), param_3 != 0)) {
    *(undefined1 *)((int)param_1 + 0x7f) = 0;
    cVar4 = func_00276D80(*(int *)(*piVar1 + 0x38),param_1[0x1c]);
    if ((cVar4 != '\0') && (cVar4 = func_0012F914(*DAT_002fd75c), cVar4 != '\0')) {
      *(undefined1 *)((int)param_1 + 0x7f) = 1;
    }
  }
  return 1;
}

