#include "ghidra_types.h"

extern int func_005228A4(int param_1,int param_2);
extern int func_0066C748(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004411a4;
extern int *DAT_004411a8;

// USA 00440FD0 <- EU 00440FB0 (Ghidra, non-matching)
// GLOBAL DAT_004411a4 int *
// GLOBAL DAT_004411a8 int *

undefined4 func_00440FD0(int *param_1)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = (**(code **)(*param_1 + 0x7c))(param_1);
  if (iVar4 == 0) {
    return 0;
  }
  if ((-1 < *(char *)((int)param_1 + 0x8a)) &&
     (iVar4 = (**(code **)(*param_1 + 0x90))(param_1), iVar4 != 0)) {
    return func_0066C748(param_1 + 0x23,4);
  }
  iVar4 = (**(code **)(*param_1 + 0x8c))(param_1);
  if (iVar4 != 0) {
    return 0;
  }
  iVar4 = func_005228A4(*DAT_004411a4,(int)param_1);
  piVar2 = DAT_004411a8;
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = (int)*(char *)((int)param_1 + 0x8a);
  if (iVar4 < 0) {
    iVar6 = (**(code **)(*param_1 + 0x80))(param_1);
    if (((iVar6 == 0) && (iVar6 = (**(code **)(*param_1 + 0x84))(param_1), iVar6 == 0)) &&
       ((*(uint *)(*piVar2 + (uint)*(byte *)(param_1 + 0x1c) * 400 + 0x20) & 3) == 0))
    goto LAB_00441180;
LAB_0044117c:
    *(undefined1 *)((int)param_1 + 0x8a) = 0;
  }
  else {
    uVar5 = *(uint *)(*DAT_004411a8 + (uint)*(byte *)(param_1 + 0x1c) * 400 + 0x20);
    if ((uVar5 & 1) != 0) goto LAB_00441180;
    if ((uVar5 & 2) == 0) {
      iVar6 = (**(code **)(*param_1 + 0x84))(param_1);
      if (iVar6 == 0) {
        iVar6 = (**(code **)(*param_1 + 0x80))(param_1);
        if ((iVar6 == 0) ||
           (cVar3 = *(char *)((int)param_1 + 0x8a) + '\x01', *(char *)((int)param_1 + 0x8a) = cVar3,
           (int)cVar3 < (int)(uint)*(byte *)((int)param_1 + 0x89))) goto LAB_00441180;
        goto LAB_0044117c;
      }
      cVar1 = *(char *)((int)param_1 + 0x8a);
      cVar3 = cVar1;
      if (cVar1 < '\x01') {
        cVar3 = *(char *)((int)param_1 + 0x89);
      }
      cVar3 = cVar3 + -1;
      if ('\0' < cVar1) {
        *(char *)((int)param_1 + 0x8a) = cVar3;
        goto LAB_00441180;
      }
    }
    else {
      uVar5 = *(byte *)((int)param_1 + 0x89) - 1;
      if (uVar5 < *(uint *)(param_1[0x1d] + 0x44)) {
        iVar6 = *(int *)(*(int *)(param_1[0x1d] + 0x4c) + uVar5 * 4);
      }
      else {
        iVar6 = 0;
      }
      if ((*(char *)(iVar6 + 0x2e) == '\0') || (*(char *)(iVar6 + 0x40) != '\0')) goto LAB_00441180;
      cVar3 = *(byte *)((int)param_1 + 0x89) - 1;
    }
    *(char *)((int)param_1 + 0x8a) = cVar3;
  }
LAB_00441180:
  if (*(char *)((int)param_1 + 0x8a) == iVar4) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004411a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x88))(param_1,iVar4);
}

