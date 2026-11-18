#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_00408A10(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5, char *param_6,undefined4 param_7);

// USA 0041252C <- EU 0041250C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int

int func_0041252C(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  func_0010C0C0((int *)(*(int *)(param_1 + 4) + 0x110));
  piVar1 = (int *)func_00408A10(*(int **)(param_1 + 4),param_2,param_1 + 8,0x200,0,(char *)0x0,1);
  if (piVar1 == (int *)0x0) {
    func_0010C160((int *)(*(int *)(param_1 + 4) + 0x110));
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1);
    if ((iVar2 == 0) || (iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1), iVar2 == 0)) {
      func_0010C160((int *)(*(int *)(param_1 + 4) + 0x110));
    }
    else {
      (**(code **)(*piVar1 + 0x40))(piVar1,param_5,0);
      iVar2 = param_4;
      if (param_6 != 0) {
        for (; 0 < iVar2; iVar2 = iVar2 - iVar3) {
          if (*(char *)(param_1 + 0x20a) != '\0') {
            func_0010C160((int *)(*(int *)(param_1 + 4) + 0x110));
            goto joined_r0x004125e0;
          }
          iVar3 = iVar2;
          if (param_6 <= iVar2) {
            iVar3 = param_6;
          }
          iVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,param_3,iVar3 + 0x1fU & 0xffffffe0);
          if (iVar3 < 0) {
            func_0010C160((int *)(*(int *)(param_1 + 4) + 0x110));
            goto joined_r0x004125e0;
          }
          if (iVar2 <= iVar3) break;
          param_3 = param_3 + iVar3;
        }
LAB_004126d8:
        func_0010C160((int *)(*(int *)(param_1 + 4) + 0x110));
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x38))(piVar1);
        }
        return param_4;
      }
      iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,param_3,param_4 + 0x1fU & 0xffffffe0);
      if (-1 < iVar2) goto LAB_004126d8;
      func_0010C160((int *)(*(int *)(param_1 + 4) + 0x110));
    }
joined_r0x004125e0:
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x38))(piVar1);
    }
  }
  return -1;
}

