#include "ghidra_types.h"

extern int func_003C7A70(undefined4 *param_1);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_00560FA0(int param_1,uint *param_2,int param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_0056128C(int param_1);
extern uint *DAT_0027b7d8;

// USA 0027B680 <- EU 0027B6A8 (Ghidra, non-matching)
// GLOBAL DAT_0027b7d8 uint *

undefined4 func_0027B680(int param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(uint *)(albw_frame + 0x0))
  #define local_2c (*(uint *)(albw_frame + 0x4))
  #define aiStack_28 ((int *)(albw_frame + 0x8))
  #define aiStack_20 ((int *)(albw_frame + 0x10))
  func_003C7A70(aiStack_28);
  bVar1 = func_00560EF8(param_2,aiStack_28,DAT_0027b7d8);
  uVar6 = 0;
  if (bVar1) {
    uVar2 = func_0056128C((int)aiStack_28);
    bVar1 = uVar2 == 4;
    uVar8 = 4;
    if ((int)uVar2 < 5) {
      bVar1 = uVar2 == 0;
      uVar8 = uVar2;
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x29c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
      return 1;
    }
    iVar7 = 0;
    if (0 < (int)uVar8) {
      unaff_r8 = 0;
    }
    *(char *)(param_1 + 0x59) = (char)uVar8;
    if (0 < (int)uVar8) {
      do {
        func_003C7A70(aiStack_20);
        bVar1 = func_005610A8(aiStack_28,aiStack_20,iVar7);
        if (!bVar1) {
          puVar5 = (undefined4 *)(param_1 + 0x29c + iVar7 * 8);
          *puVar5 = 0xffffffff;
          puVar5[1] = 0xffffffff;
          return 0;
        }
        local_30 = unaff_r8;
        iVar3 = func_00560FA0((int)aiStack_20,&local_30,0);
        if (iVar3 != 0) {
          local_2c = unaff_r8;
          iVar3 = func_00560FA0((int)aiStack_20,&local_2c,1);
          if (iVar3 == 0) {
            return 0;
          }
          puVar4 = (uint *)(param_1 + 0x29c + iVar7 * 8);
          *puVar4 = local_30;
          puVar4[1] = local_2c;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar8);
    }
    if ((int)uVar8 < 4) {
      puVar5 = (undefined4 *)(param_1 + 0x29c + uVar8 * 8);
      *puVar5 = 0xffffffff;
      puVar5[1] = 0xffffffff;
    }
    uVar6 = 1;
  }
  return uVar6;
}

