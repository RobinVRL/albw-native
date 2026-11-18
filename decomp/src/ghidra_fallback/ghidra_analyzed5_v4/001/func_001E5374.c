#include "ghidra_types.h"


// USA 001E5374 <- EU 001E5374 (Ghidra, non-matching)

void func_001E5374(int param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 0x610) != 0) {
    piVar7 = *(int **)(param_1 + 0x480);
    uVar6 = 0;
    piVar1 = piVar7 + *(int *)(param_1 + 0x478);
    for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
      iVar5 = *piVar7;
      iVar4 = 0;
      do {
        if ((*(ushort *)(iVar5 + iVar4 * 2 + 0x32) == param_2) &&
           (*(byte *)(iVar5 + iVar4 + 0x30) == param_3)) {
          if (param_4 == 0) {
            if (iVar4 == 0) {
              if (uVar6 < *(uint *)(param_1 + 0x610)) {
                piVar2 = *(int **)(*(int *)(param_1 + 0x618) + uVar6 * 4);
              }
              else {
                piVar2 = (int *)0x0;
              }
              pcVar3 = *(code **)(*piVar2 + 0x50);
            }
            else {
              if (uVar6 < *(uint *)(param_1 + 0x610)) {
                piVar2 = *(int **)(*(int *)(param_1 + 0x618) + uVar6 * 4);
              }
              else {
                piVar2 = (int *)0x0;
              }
              pcVar3 = *(code **)(*piVar2 + 0x54);
            }
          }
          else if (iVar4 == 0) {
            if (uVar6 < *(uint *)(param_1 + 0x610)) {
              piVar2 = *(int **)(*(int *)(param_1 + 0x618) + uVar6 * 4);
            }
            else {
              piVar2 = (int *)0x0;
            }
            pcVar3 = *(code **)(*piVar2 + 0x48);
          }
          else {
            if (uVar6 < *(uint *)(param_1 + 0x610)) {
              piVar2 = *(int **)(*(int *)(param_1 + 0x618) + uVar6 * 4);
            }
            else {
              piVar2 = (int *)0x0;
            }
            pcVar3 = *(code **)(*piVar2 + 0x4c);
          }
          (*pcVar3)();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      uVar6 = uVar6 + 1;
    }
  }
  return;
}

