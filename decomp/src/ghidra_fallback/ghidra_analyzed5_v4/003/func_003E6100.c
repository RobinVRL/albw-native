#include "ghidra_types.h"


// USA 003E6100 <- EU 003E60E0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint *
// PARAM param_6 Stack[0x4]:4 uint *

void func_003E6100(uint *param_1,int param_2,int param_3,int *param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  *param_4 = 0;
  if (0 < param_3) {
    if (7 < param_3) {
      param_3 = 7;
    }
    do {
      uVar11 = param_1[4];
      uVar1 = *param_1;
      uVar5 = param_1[1];
      uVar2 = param_1[2];
      uVar6 = param_1[3];
      uVar8 = uVar11;
      if ((int)uVar11 < 1) {
        if (uVar11 != 0) {
          return;
        }
        if (uVar1 == uVar2 && uVar5 == uVar6) {
          if ((int)uVar5 < 0) {
            return;
          }
          uVar8 = 7;
        }
      }
      uVar7 = *param_5;
      uVar3 = param_5[1];
      if ((int)(uVar3 - (uVar5 + (uVar7 < uVar1))) < 0 ==
          (SBORROW4(uVar3,uVar5) != SBORROW4(uVar3 - uVar5,(uint)(uVar7 < uVar1)))) {
        iVar10 = uVar8 - *param_6;
      }
      else if ((int)uVar6 < 0) {
        iVar10 = uVar8 + 1;
      }
      else {
        iVar10 = param_3;
        if ((int)(uVar3 - (uVar6 + (uVar7 < uVar2))) < 0 ==
            (SBORROW4(uVar3,uVar6) != SBORROW4(uVar3 - uVar6,(uint)(uVar7 < uVar2)))) {
          iVar10 = (uVar8 - *param_6) + 8;
        }
      }
      iVar12 = 0;
      if (param_3 < iVar10) {
        iVar10 = param_3;
      }
      if (0 < iVar10) {
        do {
          puVar9 = (undefined2 *)(param_2 + iVar12 * 8);
          iVar4 = (int)((uVar8 - iVar12) + 8) % 8;
          iVar12 = iVar12 + 1;
          *puVar9 = (short)param_1[iVar4 * 2 + 8];
          puVar9[1] = *(undefined2 *)((int)param_1 + iVar4 * 8 + 0x22);
          *(char *)(puVar9 + 2) = (char)param_1[iVar4 * 2 + 9];
        } while (iVar12 < iVar10);
      }
    } while (((param_1[4] != uVar11) || (*param_1 != uVar1 || param_1[1] != uVar5)) ||
            (param_1[2] != uVar2 || param_1[3] != uVar6));
    *param_4 = iVar10;
    *param_5 = uVar1;
    param_5[1] = uVar5;
    *param_6 = uVar8;
  }
  return;
}

