#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003CF1FC(int *param_1,int param_2,undefined4 param_3);
extern int func_003D0040(int *param_1);
extern int func_00563C54(int param_1,int param_2,uint param_3);
extern int func_00563D24(int param_1,int param_2,uint *param_3);
extern int *DAT_003cfb94;
extern int DAT_003cfb98;

// USA 003CF8CC <- EU 003CF8A8 (Ghidra, non-matching)
// GLOBAL DAT_003cfb94 int *
// GLOBAL DAT_003cfb98 int

int func_003CF8CC(int *param_1,int param_2,uint *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar1 = DAT_003cfb94;
  func_0010C0C0(DAT_003cfb94);
  iVar5 = DAT_003cfb98;
  if (param_1[1] == 0) {
    func_0010C160(piVar1);
    return iVar5;
  }
  if (param_2 == 1) {
    uVar2 = func_00563D24((int)param_1,1,param_3);
    iVar5 = 0;
    if ((uVar2 != 0xffffffff) &&
       (iVar3 = func_00563C54((int)param_1,1,uVar2), iVar5 = 0, iVar3 != 0)) {
      iVar5 = *(int *)(iVar3 + 4);
    }
    iVar3 = (**(code **)(*param_1 + 0x24))(param_1,param_1[1],7,1,param_3,8);
    if (-1 < iVar3) {
      if (param_4 == 0) {
        if (*(char *)((int)param_1 + 0xb) == '\0') {
          param_1[0x227] = param_1[0xeb];
          param_1[0x228] = param_1[0xec];
          param_1[0x229] = param_1[0xed];
          param_1[0x22a] = param_1[0xee];
          param_1[0x22b] = param_1[0xef];
          param_1[0x22c] = param_1[0xf0];
          param_1[0x22d] = param_1[0xf1];
          param_1[0x22e] = param_1[0xf2];
        }
        *(undefined1 *)((int)param_1 + 0xb) = 1;
        param_1[0x22a] = param_1[0x22a] - iVar5;
        param_1[0x22c] = param_1[0x22c] + -1;
      }
      else {
        iVar3 = func_003CF1FC(param_1,1,param_1 + 0xeb);
        if (iVar3 < 0) goto LAB_003cfb2c;
      }
      uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],param_3,8,3);
      if ((uVar2 & 0x80000000) == 0) {
        func_003D0040(param_1);
      }
      goto LAB_003cfb80;
    }
    if (param_4 == 0) {
      if (*(char *)((int)param_1 + 0xb) == '\0') {
        param_1[0x227] = param_1[0xeb];
        param_1[0x228] = param_1[0xec];
        param_1[0x229] = param_1[0xed];
        param_1[0x22a] = param_1[0xee];
        param_1[0x22b] = param_1[0xef];
        param_1[0x22c] = param_1[0xf0];
        param_1[0x22d] = param_1[0xf1];
        param_1[0x22e] = param_1[0xf2];
      }
      *(undefined1 *)((int)param_1 + 0xb) = 1;
      goto LAB_003cfb80;
    }
    piVar4 = param_1 + 0xeb;
    iVar5 = 1;
  }
  else {
    uVar2 = func_00563D24((int)param_1,param_2,param_3);
    iVar5 = 0;
    if ((uVar2 != 0xffffffff) &&
       (iVar3 = func_00563C54((int)param_1,param_2,uVar2), iVar5 = 0, iVar3 != 0)) {
      iVar5 = *(int *)(iVar3 + 4);
    }
    iVar3 = (**(code **)(*param_1 + 0x24))(param_1,param_1[1],6,param_2,param_3,8);
    if (-1 < iVar3) {
      if (param_4 == 0) {
        if (*(char *)((int)param_1 + 10) == '\0') {
          param_1[0x21f] = param_1[0x7f];
          param_1[0x220] = param_1[0x80];
          param_1[0x221] = param_1[0x81];
          param_1[0x222] = param_1[0x82];
          param_1[0x223] = param_1[0x83];
          param_1[0x224] = param_1[0x84];
          param_1[0x225] = param_1[0x85];
          param_1[0x226] = param_1[0x86];
        }
        *(undefined1 *)((int)param_1 + 10) = 1;
        param_1[0x222] = param_1[0x222] - iVar5;
        param_1[0x224] = param_1[0x224] + -1;
      }
      else {
        iVar3 = func_003CF1FC(param_1,0,param_1 + 0x7f);
        if (iVar3 < 0) {
LAB_003cfb2c:
          func_0010C160(piVar1);
          return iVar3;
        }
      }
      goto LAB_003cfb80;
    }
    if (param_4 == 0) {
      if (*(char *)((int)param_1 + 10) == '\0') {
        param_1[0x21f] = param_1[0x7f];
        param_1[0x220] = param_1[0x80];
        param_1[0x221] = param_1[0x81];
        param_1[0x222] = param_1[0x82];
        param_1[0x223] = param_1[0x83];
        param_1[0x224] = param_1[0x84];
        param_1[0x225] = param_1[0x85];
        param_1[0x226] = param_1[0x86];
      }
      *(undefined1 *)((int)param_1 + 10) = 1;
      goto LAB_003cfb80;
    }
    piVar4 = param_1 + 0x7f;
    iVar5 = 0;
  }
  func_003CF1FC(param_1,iVar5,piVar4);
LAB_003cfb80:
  func_0010C160(piVar1);
  return iVar3;
}

