#include "ghidra_types.h"

extern int func_003C7A20(int *param_1,short *param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560E74(int *param_1,uint *param_2,uint *param_3);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int DAT_00271730;

// USA 002715F8 <- EU 00271620 (Ghidra, non-matching)
// GLOBAL DAT_00271730 int

undefined4 func_002715F8(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define aiStack_38 ((int *)(albw_frame + 0x8))
  #define aiStack_30 ((int *)(albw_frame + 0x10))
  #define aiStack_28 ((int *)(albw_frame + 0x18))
  #define auStack_20 ((uint *)(albw_frame + 0x20))
  puVar4 = (undefined4 *)(param_1 + 0x10);
  if (param_2 < 3) {
    puVar4 = puVar4 + param_2;
  }
  piVar6 = (int *)*puVar4;
  *(char *)((int)piVar6 + 0x581) = (char)param_2;
  (**(code **)*piVar6)(piVar6);
  func_00689894((int)(piVar6 + 1),param_3,0xffffffff);
  func_003C7A20(aiStack_28,*(short **)(*(int *)(param_1 + 0x7ca8) + 0x14));
  func_003C7A70(aiStack_30);
  (**(code **)(*param_3 + 8))(param_3);
  bVar2 = func_00560EF8(aiStack_28,aiStack_30,(uint *)param_3[1]);
  if (bVar2) {
    func_003C7A70(aiStack_38);
    iVar1 = DAT_00271730;
    iVar7 = 0;
    while (bVar2 = func_005610A8(aiStack_30,aiStack_38,iVar7), bVar2) {
      piVar5 = (int *)(iVar1 + *(char *)((int)piVar6 + 0x581) * 8);
      (**(code **)(*piVar5 + 8))(piVar5);
      iVar3 = func_00560E74(aiStack_38,auStack_20,(uint *)piVar5[1]);
      if (iVar3 != 0) {
        return (**(code **)(*piVar6 + 4))(piVar6,aiStack_38);
      }
      iVar7 = iVar7 + 1;
    }
  }
  return 0;
}

