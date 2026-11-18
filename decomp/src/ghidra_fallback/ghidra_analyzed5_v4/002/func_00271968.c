#include "ghidra_types.h"

extern int func_003C7A20(int *param_1,short *param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560E74(int *param_1,uint *param_2,uint *param_3);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int DAT_00271ad8;
extern int DAT_00271adc;

// USA 00271968 <- EU 00271990 (Ghidra, non-matching)
// GLOBAL DAT_00271ad8 int
// GLOBAL DAT_00271adc int

void func_00271968(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define aiStack_38 ((int *)(albw_frame + 0x8))
  #define aiStack_30 ((int *)(albw_frame + 0x10))
  #define aiStack_28 ((int *)(albw_frame + 0x18))
  #define uStack_20 (*(uint *)(albw_frame + 0x20))
  func_003C7A20(aiStack_28,*(short **)(*(int *)(param_1 + 0x7ca8) + 0x14));
  func_003C7A70(aiStack_30);
  (**(code **)(*param_3 + 8))(param_3);
  bVar1 = func_00560EF8(aiStack_28,aiStack_30,(uint *)param_3[1]);
  if (bVar1) {
    func_003C7A70(aiStack_38);
    iVar4 = 0;
    piVar6 = (int *)(param_1 + 0x3d74);
    piVar5 = (int *)(DAT_00271ad8 + param_2 * 8);
    while (bVar1 = func_005610A8(aiStack_30,aiStack_38,iVar4), bVar1) {
      (**(code **)(*piVar5 + 8))(piVar5);
      iVar2 = func_00560E74(aiStack_38,&uStack_20,(uint *)piVar5[1]);
      if (iVar2 != 0) {
        iVar2 = *piVar6;
        if (iVar2 < *(int *)(param_1 + 0x3d78)) {
          piVar3 = (int *)(*(int *)(param_1 + 0x3d7c) + iVar2 * 0x620);
          *piVar6 = iVar2 + 1;
        }
        else {
          piVar3 = (int *)0x0;
        }
        (**(code **)*piVar3)(piVar3);
        *(char *)((int)piVar3 + 0x581) = (char)param_2;
        func_00689894((int)(piVar3 + 1),param_3,0xffffffff);
        *(short *)(DAT_00271adc + (int)piVar3) = (short)*piVar6 + -1;
        (**(code **)(*piVar3 + 4))(piVar3,aiStack_38);
      }
      iVar4 = iVar4 + 1;
    }
  }
  return;
}

