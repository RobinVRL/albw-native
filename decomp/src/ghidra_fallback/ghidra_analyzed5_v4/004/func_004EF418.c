#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014A354(int param_1,int param_2);
extern int func_0014AFE8(int param_1,int param_2);
extern int func_0014B00C(int param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern int func_00292528(int param_1);
extern int func_0043BC3C(int param_1,int param_2);
extern int func_004EAD1C(int param_1,byte *param_2);
extern int func_004EB254(int param_1,byte *param_2);
extern int func_004EE86C(char *param_1);
extern int func_0053FD24(int param_1);
extern int *DAT_004ef5e0;
extern int *DAT_004ef5e4;
extern int *DAT_004ef5e8;
extern uint *DAT_004ef5ec;
extern undefined4 *DAT_004ef5f0;
extern undefined4 DAT_004ef5f4;
extern int *DAT_004ef5f8;
extern int *DAT_004ef5fc;

// USA 004EF418 <- EU 004EF3F0 (Ghidra, non-matching)
// GLOBAL DAT_004ef5e0 int *
// GLOBAL DAT_004ef5e4 int *
// GLOBAL DAT_004ef5e8 int *
// GLOBAL DAT_004ef5ec uint *
// GLOBAL DAT_004ef5f0 undefined4 *
// GLOBAL DAT_004ef5f4 undefined4
// GLOBAL DAT_004ef5f8 int *
// GLOBAL DAT_004ef5fc int *

undefined4 func_004EF418(int param_1,byte *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = DAT_004ef5e4;
  if (*(int *)(*DAT_004ef5e0 + 0x28) == 0) {
    return 1;
  }
  if ((*(char *)(param_1 + 0x48) == -1) &&
     (iVar4 = param_4, iVar2 = func_0053FD24(*DAT_004ef5e4), iVar2 != 0)) {
    if (param_3 == 0) {
      if ((*param_2 == *(byte *)(param_1 + 0x18)) && (*param_2 < 2)) {
        param_3 = 5;
      }
      else {
        piVar3 = (int *)func_0014A354(*DAT_004ef5e8,0);
        if (piVar3 != (int *)0x0) {
          if (((*DAT_004ef5ec & 1) == 0) && (iVar2 = func_00100174((int *)DAT_004ef5ec), iVar2 != 0)
             ) {
            *DAT_004ef5f0 = DAT_004ef5f4;
          }
          iVar2 = (**(code **)(*piVar3 + 8))(piVar3,DAT_004ef5f0);
          if (iVar2 == 0) {
            piVar3 = (int *)0x0;
          }
          if (piVar3 != (int *)0x0) {
            func_0043BC3C((int)piVar3,(int)(char)*param_2);
          }
        }
      }
    }
    piVar3 = DAT_004ef5f8;
    if ((param_4 == 0) && (*param_2 == *(byte *)(param_1 + 0x18))) {
      iVar4 = func_004EE86C((char *)param_2);
      iVar2 = func_004EE86C((char *)(param_1 + 0x18));
      if (iVar4 == iVar2) {
        iVar4 = func_0014AFE8(*(int *)(param_1 + 0x10),param_3);
        if (iVar4 == 0) {
          return 0;
        }
        uVar5 = *(undefined4 *)(param_2 + 4);
        uVar6 = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)param_2;
        *(undefined4 *)(param_1 + 0x4c) = uVar5;
        *(undefined4 *)(param_1 + 0x50) = uVar6;
        func_00292528(*piVar1);
        func_004EAD1C(*piVar3,param_2);
        *(undefined1 *)(*DAT_004ef5fc + 0x7abe) = 0;
        return 1;
      }
    }
    if ((*param_2 == 8 || *param_2 == 0x26) && (param_3 == 0)) {
      param_3 = 5;
    }
    iVar4 = func_0014B00C(*(int *)(param_1 + 0x10),param_1 + 0x10,param_3,iVar4);
    if (iVar4 != 0) {
      uVar5 = *(undefined4 *)(param_2 + 4);
      uVar6 = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 0x4c) = uVar5;
      *(undefined4 *)(param_1 + 0x50) = uVar6;
      func_00292528(*piVar1);
      func_004EB254(*piVar3,(byte *)(param_1 + 0x48));
      return 1;
    }
  }
  return 0;
}

