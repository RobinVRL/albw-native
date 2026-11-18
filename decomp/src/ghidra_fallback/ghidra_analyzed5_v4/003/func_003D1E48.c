#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_003D20D8(undefined4 *param_1);
extern int func_003D2158(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_003d1f84;
extern undefined4 DAT_003d1f88;
extern undefined4 DAT_003d1f8c;

// USA 003D1E48 <- EU 003D1E24 (Ghidra, non-matching)
// GLOBAL DAT_003d1f84 undefined4
// GLOBAL DAT_003d1f88 undefined4
// GLOBAL DAT_003d1f8c undefined4

undefined4 func_003D1E48(undefined4 *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  func_003D20D8(param_1);
  uVar3 = DAT_003d1f84;
  *(undefined1 *)((int)param_1 + 0x131) = 1;
  uVar2 = DAT_003d1f88;
  if (((param_2 != (byte *)0x0) && (0x6f < param_3)) && (param_3 < 0x19001)) {
    if (*(short *)param_2 != 0x6060) {
      return uVar2;
    }
    if (*(uint *)(param_2 + 4) <= param_3) {
      iVar8 = *(int *)(param_2 + 0xc);
      iVar9 = *(int *)(param_2 + 8);
      uVar3 = DAT_003d1f8c;
      if (iVar8 + iVar9 + 0x20U <= *(uint *)(param_2 + 4)) {
        func_00110D44(param_1,param_2,0x70);
        uVar7 = iVar9 - 0x70;
        if (uVar7 != 0) {
          pbVar6 = param_2 + 0x70;
          while( true ) {
            if (uVar7 < 0xc) {
              return uVar2;
            }
            uVar5 = *(uint *)(pbVar6 + 4);
            func_003D2158((int)param_1,*(int *)pbVar6,uVar5,(int)(pbVar6 + 8));
            uVar5 = (uVar5 + 3 & 0xfffffffc) + 8;
            if (uVar7 <= uVar5) break;
            uVar7 = uVar7 - uVar5;
            pbVar6 = pbVar6 + uVar5;
          }
        }
        param_1[0x4f] = param_2 + iVar9 + iVar8;
        param_1[0x50] = 0x20;
        if (iVar8 == 0) {
          param_1[0x4d] = 0;
          param_1[0x4e] = 0;
        }
        else {
          param_1[0x4e] = param_2 + iVar9;
          param_1[0x4d] = iVar8;
        }
        iVar9 = 0x70;
        iVar8 = (int)*(char *)(param_1 + 0x4c);
        if (iVar8 != 0) {
          iVar4 = 0;
          do {
            iVar8 = iVar8 + -1;
            iVar1 = iVar4 * 3;
            iVar4 = iVar4 + 1;
            iVar9 = (param_1[iVar1 + 0x1d] + 3 & 0xfffffffc) + iVar9 + 8;
          } while (iVar8 != 0);
        }
        param_1[1] = param_1[0x4d] + iVar9 + 0x20;
        param_1[2] = iVar9;
        return 0;
      }
    }
  }
  return uVar3;
}

