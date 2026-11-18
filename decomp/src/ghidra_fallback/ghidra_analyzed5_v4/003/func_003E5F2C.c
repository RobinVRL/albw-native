#include "ghidra_types.h"


// USA 003E5F2C <- EU 003E5F0C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint *
// PARAM param_6 Stack[0x4]:4 uint *

void func_003E5F2C(uint *param_1,int param_2,int param_3,int *param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  *param_4 = 0;
  if (0 < param_3) {
    if (7 < param_3) {
      param_3 = 7;
    }
    do {
      uVar6 = param_1[4];
      uVar10 = *param_1;
      uVar11 = param_1[1];
      uVar1 = param_1[2];
      uVar4 = param_1[3];
      uVar7 = uVar6;
      if ((int)uVar6 < 1) {
        if (uVar6 != 0) {
          return;
        }
        if (uVar4 == uVar11 && uVar1 == uVar10) {
          if ((int)uVar11 < 0) {
            return;
          }
          uVar7 = 7;
        }
      }
      uVar2 = *param_5;
      uVar5 = param_5[1];
      if ((int)(uVar5 - (uVar11 + (uVar2 < uVar10))) < 0 ==
          (SBORROW4(uVar5,uVar11) != SBORROW4(uVar5 - uVar11,(uint)(uVar2 < uVar10)))) {
        iVar12 = uVar7 - *param_6;
      }
      else if ((int)uVar4 < 0) {
        iVar12 = uVar7 + 1;
      }
      else {
        iVar12 = param_3;
        if ((int)(uVar5 - (uVar4 + (uVar2 < uVar1))) < 0 ==
            (SBORROW4(uVar5,uVar4) != SBORROW4(uVar5 - uVar4,(uint)(uVar2 < uVar1)))) {
          iVar12 = (uVar7 - *param_6) + 8;
        }
      }
      iVar8 = 0;
      if (param_3 < iVar12) {
        iVar12 = param_3;
      }
      if (0 < iVar12) {
        do {
          puVar9 = (uint *)(param_2 + iVar8 * 0x10);
          iVar3 = (int)((uVar7 - iVar8) + 8) % 8;
          *puVar9 = param_1[iVar3 * 4 + 10];
          iVar8 = iVar8 + 1;
          puVar9[1] = param_1[iVar3 * 4 + 0xb];
          puVar9[2] = param_1[iVar3 * 4 + 0xc];
          *(short *)(puVar9 + 3) = (short)param_1[iVar3 * 4 + 0xd];
          *(undefined2 *)((int)puVar9 + 0xe) = *(undefined2 *)((int)param_1 + iVar3 * 0x10 + 0x36);
        } while (iVar8 < iVar12);
      }
    } while (((param_1[4] != uVar6) || (*param_1 != uVar10 || param_1[1] != uVar11)) ||
            (uVar4 != param_1[3] || uVar1 != param_1[2]));
    *param_4 = iVar12;
    param_5[1] = uVar11;
    *param_5 = uVar10;
    *param_6 = uVar7;
  }
  return;
}

