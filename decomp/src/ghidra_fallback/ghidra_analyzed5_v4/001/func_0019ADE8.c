#include "ghidra_types.h"

extern int func_00166488(int param_1,uint param_2,uint param_3);
extern int func_0049816C(int param_1);
extern ulonglong func_004981A4(int param_1,int param_2,int param_3);
extern int func_00520B48(int param_1);
extern int func_0053FF30(int param_1);
extern int *DAT_0019af30;
extern int *DAT_0019af34;
extern int *DAT_0019af38;
extern int *DAT_0019af3c;
extern int *DAT_0019af40;
extern undefined4 DAT_0019af44;
extern int *DAT_0019af48;

// USA 0019ADE8 <- EU 0019ADE8 (Ghidra, non-matching)
// GLOBAL DAT_0019af30 int *
// GLOBAL DAT_0019af34 int *
// GLOBAL DAT_0019af38 int *
// GLOBAL DAT_0019af3c int *
// GLOBAL DAT_0019af40 int *
// GLOBAL DAT_0019af44 undefined4
// GLOBAL DAT_0019af48 int *

void func_0019ADE8(int param_1,uint param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint in_r2;
  int iVar6;
  
  iVar6 = param_1 + param_2 * 4;
  if (param_2 == 3) {
LAB_0019ae54:
    if (*(int *)(iVar6 + 0x650) < 2) {
      if (*(int *)(*DAT_0019af3c + 0xd0) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int **)(*DAT_0019af3c + 0xd8);
      }
      func_004981A4(param_1 + 0x10 + param_2 * 400,iVar3,1);
    }
  }
  else {
    iVar3 = func_00520B48(*DAT_0019af30);
    if (iVar3 == 0) {
      if (param_2 != 1) {
        iVar4 = *DAT_0019af34;
        iVar3 = 0;
        if (iVar4 != 0) {
          iVar3 = *(int *)(iVar4 + 0x44);
        }
        if (iVar4 != 0 && iVar3 != 0) goto LAB_0019aea0;
      }
      if ((*(char *)(*DAT_0019af38 + 0x22) == '\0') || (1 < param_2)) goto LAB_0019ae54;
    }
LAB_0019aea0:
    piVar5 = (int *)(param_1 + 0x10 + param_2 * 400);
    func_0049816C((int)piVar5);
    if ((*DAT_0019af40 == 0) || (bVar2 = func_0053FF30(*DAT_0019af40), uVar1 = DAT_0019af44, !bVar2)
       ) {
      (**(code **)(*piVar5 + 0x14))(piVar5);
    }
    else {
      iVar3 = param_1 + param_2 * 400;
      *(undefined4 *)(iVar3 + 0x138) = DAT_0019af44;
      *(undefined4 *)(iVar3 + 0x13c) = uVar1;
    }
    func_00166488(*DAT_0019af48,param_2,in_r2);
  }
  if (0 < *(int *)(iVar6 + 0x650)) {
    piVar5 = (int *)(param_1 + 0x650 + param_2 * 4);
    *piVar5 = *piVar5 + -1;
  }
  return;
}

