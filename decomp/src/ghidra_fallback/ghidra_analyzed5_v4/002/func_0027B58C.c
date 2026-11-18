#include "ghidra_types.h"

extern int func_003C7A70(undefined4 *param_1);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_00560FA0(int param_1,uint *param_2,int param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_0056128C(int param_1);
extern undefined DAT_0027b6a4;

// USA 0027B58C <- EU 0027B5B4 (Ghidra, non-matching)
// GLOBAL DAT_0027b6a4 undefined

bool func_0027B58C(int param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint unaff_r8;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define aiStack_30 ((int *)(albw_frame + 0x0))
  #define aiStack_28 ((int *)(albw_frame + 0x8))
  #define local_20 ((uint *)(albw_frame + 0x10))
  func_003C7A70(aiStack_30);
  bVar1 = func_00560EF8(param_2,aiStack_30,(uint *)&DAT_0027b6a4);
  bVar6 = false;
  if (bVar1) {
    uVar2 = func_0056128C((int)aiStack_30);
    bVar6 = uVar2 == 0x60;
    uVar5 = 0x60;
    if ((int)uVar2 < 0x61) {
      bVar6 = uVar2 == 0;
      uVar5 = uVar2;
    }
    if (!bVar6) {
      iVar3 = 0;
      if (0 < (int)uVar5) {
        unaff_r8 = 0;
      }
      *(char *)(param_1 + 0x58) = (char)uVar5;
      if (0 < (int)uVar5) {
        do {
          func_003C7A70(aiStack_28);
          bVar6 = func_005610A8(aiStack_30,aiStack_28,iVar3);
          if (!bVar6) {
            return bVar6;
          }
          local_20[0] = unaff_r8;
          func_00560FA0((int)aiStack_28,local_20,0);
          puVar4 = (undefined2 *)(param_1 + 0x5a + iVar3 * 6);
          *puVar4 = (short)local_20[0];
          func_00560FA0((int)aiStack_28,local_20,1);
          puVar4[1] = (short)local_20[0];
          func_00560FA0((int)aiStack_28,local_20,2);
          iVar3 = iVar3 + 1;
          puVar4[2] = (short)local_20[0];
        } while (iVar3 < (int)uVar5);
      }
    }
    bVar6 = true;
  }
  return bVar6;
}

