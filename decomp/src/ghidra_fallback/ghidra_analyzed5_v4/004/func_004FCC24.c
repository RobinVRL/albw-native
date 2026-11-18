#include "ghidra_types.h"


// USA 004FCC24 <- EU 004FCBFC (Ghidra, non-matching)

undefined4 func_004FCC24(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint unaff_r4;
  uint uVar6;
  int iVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 ((int *)(albw_frame + 0xc))
  if (param_2 != 0) {
    unaff_r4 = (uint)*(byte *)(param_1 + 0xa9);
  }
  if (param_2 != 0 && unaff_r4 != 0) {
    uVar4 = unaff_r4 & 1;
    if (uVar4 == 1) {
      local_34[0] = *(int *)(param_1 + 0x54);
    }
    uVar2 = (uint)(uVar4 == 1);
    for (; uVar4 < unaff_r4; uVar4 = uVar4 + 2) {
      local_34[uVar2] = *(int *)(param_1 + uVar2 * 4 + 0x54);
      local_34[uVar2 + 1] = *(int *)(param_1 + (uVar2 + 1) * 4 + 0x54);
      uVar2 = uVar2 + 2;
    }
    uVar1 = 0;
    uVar4 = 0;
    *(undefined1 *)(param_1 + 0xa9) = 0;
    if (unaff_r4 != 0) {
      do {
        iVar5 = local_34[uVar4];
        if (iVar5 == 0 || iVar5 == param_2) {
          uVar1 = 1;
        }
        else {
          uVar2 = (uint)*(byte *)(param_1 + 0xa9);
          if (uVar2 < 7) {
            if (uVar2 != 0) {
              uVar3 = uVar2 & 1;
              uVar6 = 0;
              if ((*(byte *)(param_1 + 0xa9) & 1) != 0) {
                do {
                  if (*(int *)(param_1 + uVar6 * 4 + 0x54) == iVar5) goto LAB_004fcd18;
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar3);
              }
              for (; uVar3 < uVar2; uVar3 = uVar3 + 2) {
                iVar7 = param_1 + uVar3 * 4;
                bVar8 = *(int *)(iVar7 + 0x54) == iVar5;
                if (!bVar8) {
                  iVar7 = *(int *)(iVar7 + 0x58);
                }
                if (bVar8 || iVar7 == iVar5) goto LAB_004fcd18;
              }
            }
            *(int *)(param_1 + uVar2 * 4 + 0x54) = iVar5;
            *(char *)(param_1 + 0xa9) = *(char *)(param_1 + 0xa9) + '\x01';
          }
        }
LAB_004fcd18:
        uVar4 = uVar4 + 1;
      } while (uVar4 < unaff_r4);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

