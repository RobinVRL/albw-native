#include "ghidra_types.h"


// USA 003D64D0 <- EU 003D64B0 (Ghidra, non-matching)

undefined4 func_003D64D0(int param_1,int *param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    *(undefined1 *)(*param_2 + 8) = 0;
    *(undefined2 *)(*param_2 + 10) = 0x7b;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar3;
  if ((iVar3 != iVar6) &&
     (iVar8 = *(int *)(param_1 + 0xc), *(ushort *)(iVar8 + iVar3 * 2) - 0x30 < 10)) {
    iVar3 = 0;
    while (((iVar7 = *(int *)(param_1 + 0x10), iVar7 != iVar6 &&
            (uVar4 = (uint)*(ushort *)(iVar8 + iVar7 * 2), 0x2f < uVar4)) && (uVar4 < 0x3a))) {
      iVar3 = iVar3 * 10 + -0x30 + uVar4;
      if (0xffff < iVar3) {
        return 3;
      }
      *(int *)(param_1 + 0x10) = iVar7 + 1;
    }
    if (iVar3 != -1 && iVar7 != iVar6) {
      sVar1 = *(short *)(iVar8 + iVar7 * 2);
      uVar2 = (undefined2)iVar3;
      if (sVar1 == 0x7d) {
LAB_003d662c:
        *(undefined2 *)(*param_2 + 10) = uVar2;
        *(undefined1 *)(*param_2 + 8) = 0xe;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        return 0;
      }
      if (sVar1 == 0x2c) {
        iVar7 = iVar7 + 1;
        *(int *)(param_1 + 0x10) = iVar7;
        if (iVar7 != iVar6) {
          if (*(ushort *)(iVar8 + iVar7 * 2) - 0x30 < 10) {
            iVar5 = 0;
            while (((iVar7 != iVar6 && (uVar4 = (uint)*(ushort *)(iVar8 + iVar7 * 2), 0x2f < uVar4))
                   && (uVar4 < 0x3a))) {
              iVar5 = iVar5 * 10 + -0x30 + uVar4;
              if (0xffff < iVar5) goto LAB_003d6600;
              iVar7 = iVar7 + 1;
              *(int *)(param_1 + 0x10) = iVar7;
            }
          }
          else {
LAB_003d6600:
            iVar5 = -1;
          }
          if (iVar7 != iVar6) {
            if (iVar5 == -1) {
              if (*(short *)(iVar8 + iVar7 * 2) == 0x7d) {
                *(undefined2 *)(*param_2 + 10) = uVar2;
                *(undefined1 *)(*param_2 + 8) = 0xf;
                *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
                return 0;
              }
            }
            else if (*(short *)(iVar8 + iVar7 * 2) == 0x7d) {
              if (iVar3 == iVar5) goto LAB_003d662c;
              if (iVar3 < iVar5) {
                *(undefined2 *)(*param_2 + 10) = uVar2;
                *(short *)(*param_2 + 0xc) = (short)iVar5;
                *(undefined1 *)(*param_2 + 8) = 0x10;
                *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 3;
}

