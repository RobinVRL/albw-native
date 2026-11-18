#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0048B7E4(int param_1);
extern int func_0049D0D8(int param_1,int *param_2,int param_3);
extern int *DAT_0049dbb0;

// USA 0049DA04 <- EU 0049D9DC (Ghidra, non-matching)
// GLOBAL DAT_0049dbb0 int *

undefined4 func_0049DA04(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  
  iVar4 = param_1 + 4;
  func_0010C0B8(iVar4);
  uVar1 = (uint)*(byte *)(param_2 + 0x18);
  if (uVar1 == param_3) goto switchD_0049da0c_caseD_0;
  switch(param_3) {
  case 1:
    if (uVar1 == 0) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      func_0049D0D8(param_1,(int *)(param_1 + 0x2c),(int)param_2);
      piVar2 = *(int **)(param_1 + 0x24);
      if ((piVar2 == (int *)0x0) || (iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,1), iVar3 != 0))
      goto LAB_0049dba0;
    }
    break;
  case 2:
    *(undefined1 *)(param_2 + 0x18) = 2;
    iVar3 = param_2[0x10];
    goto joined_r0x0049db9c;
  case 4:
    *(undefined1 *)(param_2 + 0x18) = 4;
    iVar3 = param_2[0x10];
    if (iVar3 != 0) {
      param_2[0x10] = 0;
      func_0010F1F8(param_2 + 0xd,in_s0);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
    }
    func_0049D0D8(param_1,(int *)(param_1 + 0x44),(int)param_2);
    if (*DAT_0049dbb0 != 0) {
      func_0048B7E4(*DAT_0049dbb0);
    }
    (**(code **)(*param_2 + 0x2c))(param_2);
    goto LAB_0049dba0;
  case 5:
    *(undefined1 *)(param_2 + 0x18) = 5;
    goto LAB_0049dba0;
  case 6:
    if (uVar1 == 4) {
      *(undefined1 *)(param_2 + 0x18) = 6;
      (**(code **)(*param_2 + 0x44))(param_2);
      (**(code **)(*param_2 + 0x48))(param_2);
      func_0049D0D8(param_1,(int *)(param_1 + 0x68),(int)param_2);
      goto LAB_0049dba0;
    }
    break;
  case 7:
    (**(code **)(*param_2 + 0x34))(param_2);
    *(undefined1 *)(param_2 + 0x18) = 7;
    iVar3 = param_2[0x10];
joined_r0x0049db9c:
    if (iVar3 != 0) {
      param_2[0x10] = 0;
      func_0010F1F8(param_2 + 0xd,in_s0);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
    }
LAB_0049dba0:
    func_0010EEE0(iVar4);
    return 1;
  }
switchD_0049da0c_caseD_0:
  func_0010EEE0(iVar4);
  return 0;
}

