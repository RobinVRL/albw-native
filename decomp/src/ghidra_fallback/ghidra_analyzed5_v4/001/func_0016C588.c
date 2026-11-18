#include "ghidra_types.h"

extern int func_0016B2E4(undefined4 param_1,int param_2);
extern int func_00270C14(int *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_00270DFC(undefined4 *param_1);
extern int func_0053AD64(int param_1);

// USA 0016C588 <- EU 0016C588 (Ghidra, non-matching)

int * func_0016C588(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    do {
      if (uVar4 < *(uint *)(param_1 + 0x7c)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x84) + uVar4 * 4);
      }
      else {
        iVar1 = 0;
      }
      if ((*(byte *)(iVar1 + 0x50) & 1) != 0) {
        if (uVar4 < *(uint *)(param_1 + 0x7c)) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x84) + uVar4 * 4);
        }
        else {
          iVar1 = 0;
        }
        piVar2 = (int *)func_0053AD64(iVar1);
        (**(code **)(*piVar2 + 8))(piVar2);
        (**(code **)(*piVar2 + 8))(piVar2);
        iVar1 = piVar2[1];
        (**(code **)(*param_2 + 8))(param_2);
        if (iVar1 == param_2[1]) {
LAB_0016c6e0:
          if ((uVar4 < *(uint *)(param_1 + 0x7c)) &&
             (piVar2 = *(int **)(*(int *)(param_1 + 0x84) + uVar4 * 4), piVar2 != (int *)0x0)) {
            return piVar2;
          }
          break;
        }
        iVar1 = 0;
        do {
          if (*(char *)(piVar2[1] + iVar1) != *(char *)(param_2[1] + iVar1)) break;
          if (*(char *)(piVar2[1] + iVar1) == '\0') goto LAB_0016c6e0;
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x40001);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x7c));
  }
  iVar1 = func_0016B2E4(param_1,(int)param_2);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x80)) {
      puVar3 = *(undefined4 **)(param_1 + 0x88);
      piVar2 = (int *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x88) = *puVar3;
        piVar2 = func_00270DFC(puVar3);
      }
      if (*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x80)) {
        *(int **)(*(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x7c) * 4) = piVar2;
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      }
    }
    else {
      piVar2 = (int *)0x0;
    }
    func_00270C14(piVar2,iVar1,*(int **)(param_1 + (uint)*(byte *)(param_1 + 0xf94) * 4 + 0xf8c),0);
  }
  return piVar2;
}

