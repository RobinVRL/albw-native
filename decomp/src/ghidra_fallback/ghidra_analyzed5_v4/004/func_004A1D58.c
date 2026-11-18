#include "ghidra_types.h"

extern int func_0011130C(int param_1,uint param_2,int param_3,undefined4 param_4,...);
extern undefined4 DAT_004a1ee8;
extern undefined DAT_004a1ef4;
extern char s_bone__s_004a1eec[];
extern char s_cf_004a1eec[];

// USA 004A1D58 <- EU 004A1D30 (Ghidra, non-matching)
// GLOBAL DAT_004a1ee8 undefined4
// GLOBAL DAT_004a1ef4 undefined
// GLOBAL s_cf_004a1eec string

void func_004A1D58(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  bVar7 = false;
  iVar3 = 0;
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 0xc);
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x14) = DAT_004a1ee8;
  }
  if (0 < *(int *)(*piVar2 + 4)) {
    do {
      iVar5 = piVar2[2] + iVar3 * 0x68;
      piVar4 = (int *)(*(int *)(param_1 + 0x54) + iVar3 * 8);
      pcVar6 = (char *)(piVar2[7] + *(int *)(iVar5 + 0x28));
      if (*pcVar6 == '\0') {
        piVar4[1] = *(int *)(param_1 + 0x1c);
        *piVar4 = *(int *)(param_1 + 0x14);
        if (*(char *)(iVar5 + 0x30) != '\0') {
          bVar7 = true;
        }
      }
      else {
        iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x10))
                          (*(undefined4 **)(param_1 + 0x10),pcVar6);
        *piVar4 = iVar1;
        piVar4[1] = 0;
        if (iVar1 == 0) {
          func_0011130C(*(int *)(param_1 + 8),3,*(int *)(param_1 + 0xc),s_bone__s_004a1eec,pcVar6);
          piVar4[1] = *(int *)(param_1 + 0x1c);
          *piVar4 = *(int *)(param_1 + 0x14);
        }
      }
      iVar3 = iVar3 + 1;
      if (*(char *)(iVar5 + 0x32) == '\x01') {
        bVar7 = true;
      }
    } while (iVar3 < *(int *)(*piVar2 + 4));
    if (bVar7) {
      iVar3 = *(int *)(param_1 + 0x18);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      if (bVar7 && iVar3 == 0) {
        func_0011130C(*(int *)(param_1 + 8),5,*(int *)(param_1 + 0xc),&DAT_004a1ef4);
      }
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(*piVar2 + 8)) {
    do {
      piVar4 = (int *)(*(int *)(param_1 + 0x58) + iVar3 * 0x10);
      pcVar6 = (char *)(piVar2[7] + *(int *)(piVar2[4] + iVar3 * 0x3c + 0x1c));
      if (*pcVar6 == '\0') {
        *piVar4 = 0;
      }
      else {
        iVar5 = (**(code **)**(undefined4 **)(param_1 + 0x10))
                          (*(undefined4 **)(param_1 + 0x10),pcVar6);
        *piVar4 = iVar5;
        if (iVar5 == 0) {
          func_0011130C(*(int *)(param_1 + 8),3,*(int *)(param_1 + 0xc),s_bone__s_004a1eec,pcVar6);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*piVar2 + 8));
  }
  return;
}

