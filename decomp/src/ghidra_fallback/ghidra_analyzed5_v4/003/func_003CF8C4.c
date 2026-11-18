#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003CF1FC(int *param_1,int param_2,undefined4 param_3);
extern int func_003D0040(int *param_1);
extern int func_00563C54(int param_1,int param_2,uint param_3);
extern int func_00563D24(int param_1,int param_2,uint *param_3);
extern int *DAT_003cfb94;
extern int DAT_003cfb98;

// USA 003CF8C4 <- EU 003CF8A0 (Ghidra, non-matching)
// GLOBAL DAT_003cfb94 int *
// GLOBAL DAT_003cfb98 int

/* WARNING: Removing unreachable block (ram,0x003cfb44) */
/* WARNING: Removing unreachable block (ram,0x003cfb50) */
/* WARNING: Removing unreachable block (ram,0x003cfb64) */
/* WARNING: Removing unreachable block (ram,0x003cfa0c) */
/* WARNING: Removing unreachable block (ram,0x003cfa18) */
/* WARNING: Removing unreachable block (ram,0x003cfa2c) */
/* WARNING: Removing unreachable block (ram,0x003cfadc) */
/* WARNING: Removing unreachable block (ram,0x003cfae8) */
/* WARNING: Removing unreachable block (ram,0x003cfafc) */
/* WARNING: Removing unreachable block (ram,0x003cfa60) */
/* WARNING: Removing unreachable block (ram,0x003cfa6c) */
/* WARNING: Removing unreachable block (ram,0x003cfa80) */

int func_003CF8C4(int *param_1,int param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar1 = DAT_003cfb94;
  func_0010C0C0(DAT_003cfb94);
  iVar3 = DAT_003cfb98;
  if (param_1[1] == 0) {
    func_0010C160(piVar1);
    return iVar3;
  }
  if (param_2 == 1) {
    uVar2 = func_00563D24((int)param_1,1,param_3);
    if (uVar2 != 0xffffffff) {
      func_00563C54((int)param_1,1,uVar2);
    }
    iVar3 = (**(code **)(*param_1 + 0x24))(param_1,param_1[1],7,1,param_3,8);
    if (-1 < iVar3) {
      iVar3 = func_003CF1FC(param_1,1,param_1 + 0xeb);
      if (iVar3 < 0) goto LAB_003cfb2c;
      uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],param_3,8,3);
      if ((uVar2 & 0x80000000) == 0) {
        func_003D0040(param_1);
      }
      goto LAB_003cfb80;
    }
    piVar5 = param_1 + 0xeb;
    iVar4 = 1;
  }
  else {
    uVar2 = func_00563D24((int)param_1,param_2,param_3);
    if (uVar2 != 0xffffffff) {
      func_00563C54((int)param_1,param_2,uVar2);
    }
    iVar3 = (**(code **)(*param_1 + 0x24))(param_1,param_1[1],6,param_2,param_3,8);
    if (-1 < iVar3) {
      iVar3 = func_003CF1FC(param_1,0,param_1 + 0x7f);
      if (iVar3 < 0) {
LAB_003cfb2c:
        func_0010C160(piVar1);
        return iVar3;
      }
      goto LAB_003cfb80;
    }
    piVar5 = param_1 + 0x7f;
    iVar4 = 0;
  }
  func_003CF1FC(param_1,iVar4,piVar5);
LAB_003cfb80:
  func_0010C160(piVar1);
  return iVar3;
}

