#include "ghidra_types.h"


// USA 00583794 <- EU 0058376C (Ghidra, non-matching)

int func_00583794(int *param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (((param_2 == (int *)0x0) || (*param_1 == 0)) || (iVar8 = param_2[2], iVar8 < 1)) {
    return 0;
  }
  iVar7 = 0;
  (**(code **)(*param_2 + 8))(param_2);
  iVar6 = param_2[1];
  psVar4 = (short *)*param_1;
  do {
    do {
      sVar2 = *psVar4;
      if (sVar2 == 0) {
        if (iVar7 < iVar8) {
          puVar5 = (undefined2 *)(iVar6 + iVar7 * 2);
          iVar7 = iVar7 + 1;
        }
        else {
          if (param_2[2] <= iVar7) {
            (**(code **)(*param_2 + 8))(param_2);
            iVar8 = 0;
            do {
              if (*(short *)(param_2[1] + iVar8 * 2) == 0) {
                return iVar7;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < 0x40001);
            return iVar7;
          }
joined_r0x005838cc:
          iVar8 = iVar7;
          if (iVar7 < 0) {
            iVar8 = 0;
          }
          puVar5 = (undefined2 *)(param_2[1] + iVar8 * 2);
        }
        *puVar5 = 0;
        return iVar7;
      }
      if (sVar2 != 0xe) {
        if (sVar2 == 0xf) {
          psVar3 = psVar4 + 3;
          goto LAB_0058385c;
        }
        break;
      }
      psVar3 = (short *)((int)psVar4 + (ushort)psVar4[3] + 8);
LAB_0058385c:
      bVar9 = psVar4 != (short *)0x0;
      psVar4 = psVar3;
    } while (bVar9);
    if (iVar8 <= iVar7) {
      if (param_2[2] <= iVar7) {
        (**(code **)(*param_2 + 8))(param_2);
        iVar8 = 0;
        do {
          if (*(short *)(param_2[1] + iVar8 * 2) == 0) {
            return iVar7;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 0x40001);
        return iVar7;
      }
      goto joined_r0x005838cc;
    }
    iVar1 = iVar7 * 2;
    iVar7 = iVar7 + 1;
    *(short *)(iVar6 + iVar1) = *psVar4;
    psVar4 = psVar4 + 1;
  } while( true );
}

