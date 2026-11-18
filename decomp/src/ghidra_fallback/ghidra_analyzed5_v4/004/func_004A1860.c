#include "ghidra_types.h"

extern int func_001107D8(int *param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5);
extern int func_00110848(int param_1);

// USA 004A1860 <- EU 004A1838 (Ghidra, non-matching)

void func_004A1860(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar8 = *(int *)(param_2 + 0x58);
    iVar7 = *(int *)(*(int *)(param_2 + 0xc) + 0xc);
    if (param_1[1] < param_1[2]) {
      param_1[2] = param_1[1] + -1;
    }
    iVar5 = (int)*(short *)(iVar1 + 8);
    if (iVar5 <= *(short *)(iVar1 + 10)) {
      do {
        iVar6 = *(int *)(iVar7 + 0x10) + iVar5 * 0x3c;
        iVar2 = param_1[1];
        iVar3 = *(int *)(iVar6 + 0x10);
        bVar11 = SBORROW4(iVar2,iVar3);
        iVar1 = iVar2 - iVar3;
        iVar4 = iVar2;
        if (iVar3 <= iVar2) {
          iVar4 = param_1[2];
          bVar11 = SBORROW4(iVar3,iVar4);
          iVar1 = iVar3 - iVar4;
        }
        bVar9 = iVar1 < 0;
        bVar10 = iVar4 == iVar3;
        if (!bVar10 && bVar9 == bVar11) {
          iVar1 = *(int *)(iVar6 + 0x14);
          bVar11 = SBORROW4(iVar1,iVar2);
          bVar9 = iVar1 - iVar2 < 0;
          bVar10 = iVar1 == iVar2;
        }
        if (!bVar10 && bVar9 == bVar11) {
          if ((*(char *)(iVar6 + 0x1a) == '\0') || (*(char *)(iVar8 + iVar5 * 0x10 + 0xc) == '\0'))
          {
            iVar4 = iVar8 + iVar5 * 0x10;
            iVar1 = *(int *)(iVar4 + 4);
            if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(iVar4 + 8))) {
              func_00110848(iVar1);
            }
            func_001107D8(&local_30,param_2,*(uint **)(iVar6 + 0xc),iVar6,param_1);
            *(int *)(iVar4 + 4) = local_30;
            *(undefined4 *)(iVar4 + 8) = uStack_2c;
          }
          *(undefined1 *)(iVar8 + iVar5 * 0x10 + 0xc) = 1;
        }
        iVar4 = *(int *)(iVar6 + 0x14);
        iVar2 = param_1[1];
        bVar11 = SBORROW4(iVar4,iVar2);
        iVar1 = iVar4 - iVar2;
        if (iVar4 <= iVar2) {
          bVar11 = SBORROW4(param_1[2],iVar4);
          iVar1 = param_1[2] - iVar4;
        }
        if (iVar1 < 0 != bVar11) {
          iVar1 = iVar8 + iVar5 * 0x10;
          iVar4 = *(int *)(iVar1 + 4);
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == *(int *)(iVar1 + 8))) {
            iVar1 = *(int *)(iVar4 + 0x20);
            if ((iVar1 != 0) &&
               ((*(int *)(iVar4 + 0x24) == *(int *)(iVar1 + 0xc) && (0 < *(int *)(iVar1 + 4))))) {
              *(undefined1 *)(iVar1 + 0x280) = 1;
            }
            *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) & 0xfffffffb;
            *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) | 8;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= *(short *)(*param_1 + 10));
    }
  }
  param_1[2] = param_1[1];
  return;
}

