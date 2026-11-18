#include "ghidra_types.h"

extern int func_003DA6F0(int param_1,int param_2,int param_3,int *param_4,int param_5,uint param_6);
extern int func_003DAE68(undefined4 param_1,int param_2,int param_3);
extern int func_003DAEB4(int param_1,int param_2,int param_3);
extern undefined4 DAT_003dad90;
extern undefined4 DAT_003dad94;
extern undefined4 DAT_003dad98;

// USA 003DABC4 <- EU 003DABA4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_003dad90 undefined4
// GLOBAL DAT_003dad94 undefined4
// GLOBAL DAT_003dad98 undefined4

undefined4 func_003DABC4(int param_1,int param_2,int *param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 ((int *)(albw_frame + 0x8))
  iVar3 = 0;
  iVar5 = 0;
  do {
    iVar5 = iVar5 + 2;
    local_68[iVar3] = *(int *)(param_1 + 0x2c) + iVar3 * 0x80;
    local_68[iVar3 + 1] = *(int *)(param_1 + 0x2c) + (iVar3 + 1) * 0x80;
    iVar3 = iVar3 + 2;
  } while (iVar5 < 0x10);
  uVar6 = 0;
  if (param_5 != 0) {
    do {
      iVar3 = *(int *)(param_4 + uVar6 * 4);
      if (iVar3 == 0) {
        return DAT_003dad90;
      }
      func_003DAEB4(local_68[uVar6],0x40,iVar3);
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_5);
  }
  if ((*(char *)(param_1 + 0x1a) == '\0') && (uVar6 = 0, param_5 != 0)) {
    do {
      iVar3 = func_003DAE68(param_1,local_68[uVar6],0x40);
      if (iVar3 != 0) {
        *(uint *)(param_2 + uVar6 * 4) =
             *(uint *)(param_2 + uVar6 * 4) | 1 << *(sbyte *)(param_1 + 0x1b);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_5);
  }
  uVar6 = (**(code **)(*param_3 + 0x24))(param_3);
  uVar1 = DAT_003dad94;
  if (((uVar6 < 2) || (0x4000 < (int)uVar6)) ||
     (uVar4 = (**(code **)(*param_3 + 0x2c))(param_3,*(undefined4 *)(param_1 + 0x24),uVar6),
     uVar2 = DAT_003dad98, uVar4 != uVar6)) {
    return uVar1;
  }
  psVar8 = *(short **)(param_1 + 0x24);
  if (*psVar8 != -0x101) {
    return uVar2;
  }
  iVar5 = 1;
  iVar3 = 1;
  if (2 < uVar6) {
    do {
      if (psVar8[iVar5] == 10) {
        iVar7 = iVar5 + 1;
        func_003DA6F0(param_1,param_2,(int)(psVar8 + iVar3),(int *)((iVar7 - iVar3) + -1),
                      (int)local_68,param_5);
        iVar3 = iVar7;
      }
      else {
        iVar7 = iVar5;
        if (psVar8[iVar5] == 0) {
          return uVar2;
        }
      }
      iVar5 = iVar7 + 1;
    } while ((uint)(iVar5 * 2) < uVar6);
    if (iVar7 == iVar3) {
      return 0;
    }
  }
  func_003DA6F0(param_1,param_2,(int)(psVar8 + iVar3),(int *)(iVar5 - iVar3),(int)local_68,param_5);
  return 0;
}

