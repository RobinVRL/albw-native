#include "ghidra_types.h"

extern int func_00474728(int *param_1,int *param_2,int param_3,int param_4);
extern int func_00573A00(int param_1);

// USA 0051B8C4 <- EU 0051B89C (Ghidra, non-matching)

void func_0051B8C4(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define iStack_1c (*(int *)(albw_frame + 0x4))
  if ((*(int *)(param_1 + 0x80) != 0) &&
     (iVar1 = func_00573A00(*(int *)(param_1 + 0x80)), iVar1 != 0)) {
    piVar7 = (int *)param_2[2];
    piVar8 = piVar7 + *param_2;
    if (0 < *param_2) {
      for (; piVar7 != piVar8; piVar7 = piVar7 + 1) {
        if ((*(uint *)(*piVar7 + 0x14) & 0x100000) != 0) {
          uVar2 = 0;
          do {
            piVar3 = (int *)(param_1 + 0xb4);
            if (uVar2 < 8) {
              piVar3 = piVar3 + uVar2;
            }
            if (*piVar3 != 0) {
              puVar4 = (uint *)(param_1 + 0xb4);
              if (uVar2 < 8) {
                puVar4 = puVar4 + uVar2;
              }
              uVar5 = *puVar4;
              bVar9 = *(char *)(uVar5 + 0xd) == '\0';
              if (bVar9) {
                uVar5 = (uint)*(byte *)(uVar5 + 0xe);
              }
              if (!bVar9 || uVar5 != 0) {
                piVar3 = (int *)(param_1 + 0xb4);
                if (uVar2 < 8) {
                  piVar3 = piVar3 + uVar2;
                }
                if (*(int *)(*piVar7 + 0x1c) == *(int *)(*piVar3 + 0x88)) goto LAB_0051ba10;
              }
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < 8);
          uVar2 = 0;
          do {
            piVar3 = (int *)(param_1 + 0xb4);
            if (uVar2 < 8) {
              piVar3 = piVar3 + uVar2;
            }
            if (*piVar3 != 0) {
              puVar4 = (uint *)(param_1 + 0xb4);
              if (uVar2 < 8) {
                puVar4 = puVar4 + uVar2;
              }
              uVar5 = *puVar4;
              bVar9 = *(char *)(uVar5 + 0xd) == '\0';
              if (bVar9) {
                uVar5 = (uint)*(byte *)(uVar5 + 0xe);
              }
              if (bVar9 && uVar5 == 0) {
                piVar3 = (int *)(param_1 + 0xb4);
                if (uVar2 < 8) {
                  piVar3 = piVar3 + uVar2;
                }
                if (0x7fffffff < *(uint *)(*piVar3 + 0x88)) {
                  puVar6 = (undefined4 *)(param_1 + 0xb4);
                  if (uVar2 < 8) {
                    puVar6 = puVar6 + uVar2;
                  }
                  local_20 = *(int *)*piVar7;
                  iStack_1c = ((int *)*piVar7)[2];
                  func_00474728((int *)*puVar6,&local_20,*(int *)(*piVar7 + 0x1c),param_3);
                  break;
                }
              }
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < 8);
        }
LAB_0051ba10:
      }
    }
  }
  return;
}

