#include "ghidra_types.h"


// USA 001113A0 <- EU 001113A0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int

int func_001113A0(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint in_r12;
  bool bVar7;
  bool bVar8;
  
  iVar6 = 0;
  uVar5 = 0;
  iVar4 = (int)*(short *)(param_2 + 0x10);
  if (iVar4 <= *(short *)(param_2 + 0x12)) {
    do {
      iVar1 = *(int *)(param_1 + 8) + iVar4 * 0x68;
      iVar2 = *(int *)(iVar1 + 0xc);
      bVar7 = iVar2 == param_3;
      if (bVar7) {
        in_r12 = *(uint *)(iVar1 + 0x14);
      }
      bVar8 = bVar7 && in_r12 == param_4;
      if (bVar7 && in_r12 == param_4) {
        bVar8 = *(int *)(iVar1 + 0x1c) == param_5;
      }
      if (bVar8) {
        return iVar1;
      }
      in_r12 = 0;
      if (iVar2 == -1) {
        uVar3 = *(uint *)(iVar1 + 0x14);
        if (uVar3 == 0xffffffff) {
          iVar2 = *(int *)(iVar1 + 0x1c);
          in_r12 = (uint)(iVar2 == -1);
          if ((iVar2 != -1) && (iVar2 == param_5)) {
LAB_00111498:
            in_r12 = 2;
          }
        }
        else if (*(int *)(iVar1 + 0x1c) == -1) {
          if (uVar3 == param_4) goto LAB_00111498;
        }
        else if (uVar3 == param_4 && *(int *)(iVar1 + 0x1c) == param_5) goto LAB_0011141c;
LAB_0011149c:
        if (uVar5 < in_r12) {
          uVar5 = in_r12;
          iVar6 = iVar1;
        }
      }
      else {
        if (*(uint *)(iVar1 + 0x14) == 0xffffffff) {
          if (*(int *)(iVar1 + 0x1c) == -1) {
            if (iVar2 == param_3) goto LAB_00111498;
          }
          else if (iVar2 == param_3 && *(int *)(iVar1 + 0x1c) == param_5) goto LAB_0011141c;
          goto LAB_0011149c;
        }
        if (*(int *)(iVar1 + 0x1c) == -1) {
          if (iVar2 == param_3 && *(uint *)(iVar1 + 0x14) == param_4) {
LAB_0011141c:
            in_r12 = 3;
          }
          goto LAB_0011149c;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= *(short *)(param_2 + 0x12));
  }
  return iVar6;
}

