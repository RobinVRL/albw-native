#include "ghidra_types.h"

extern int func_003FE664(int param_1,int param_2,int param_3);

// USA 003FEF0C <- EU 003FEEEC (Ghidra, non-matching)

void func_003FEF0C(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = 0;
  iVar8 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(iVar8 + 0x10);
  if (*(short *)(iVar8 + 0xe) != 0) {
    do {
      iVar6 = *(int *)(iVar2 + iVar8 + uVar7 * 4) + iVar8;
      if (*(char *)(iVar6 + 0x1d) == '\0') {
        piVar5 = *(int **)(param_2 + 0x10);
        iVar3 = 0;
        if (piVar5 != (int *)(param_2 + 0x10)) {
          do {
            iVar4 = 0;
            while (*(char *)(iVar6 + iVar4) == *(char *)(piVar5[2] + 0x80 + iVar4)) {
              if ((*(char *)(iVar6 + iVar4) == '\0') || (iVar4 = iVar4 + 1, 0x17 < iVar4)) {
                iVar3 = piVar5[2];
                goto LAB_003fefe4;
              }
            }
            piVar5 = (int *)*piVar5;
          } while (piVar5 != (int *)(param_2 + 0x10));
LAB_003fefe4:
          if (iVar3 != 0) {
            uVar1 = *(ushort *)(param_1 + 0x20);
            if ((uint)*(ushort *)(param_1 + 0x22) <= (uint)uVar1) {
              return;
            }
            *(ushort *)(param_1 + 0x20) = uVar1 + 1;
            piVar5 = (int *)(*(int *)(param_1 + 0x1c) + (uint)uVar1 * 8);
            *piVar5 = iVar3;
            piVar5[1] = iVar6;
          }
        }
      }
      else {
        for (piVar5 = *(int **)(param_2 + 0x10); piVar5 != (int *)(param_2 + 0x10);
            piVar5 = (int *)*piVar5) {
          iVar3 = (**(code **)(*(int *)piVar5[2] + 0x30))((int *)piVar5[2],iVar6,0);
          if (iVar3 != 0) {
            iVar6 = func_003FE664(param_1,iVar3,iVar6);
            if (iVar6 == 0) {
              return;
            }
            break;
          }
        }
      }
      uVar7 = uVar7 + 1 & 0xffff;
    } while (uVar7 < *(ushort *)(iVar8 + 0xe));
  }
  return;
}

