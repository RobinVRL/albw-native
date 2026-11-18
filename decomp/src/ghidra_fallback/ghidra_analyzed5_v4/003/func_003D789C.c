#include "ghidra_types.h"

extern int func_003D6F78(undefined4 *param_1,int param_2);
extern int func_003DA0FC(int *param_1,undefined4 *param_2,int *param_3,int *param_4);
extern int func_003DA324(int *param_1,int param_2,int *param_3);
extern int func_003DA36C(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_003DA464(int *param_1,int param_2,int param_3);
extern int func_003DA498(int *param_1,int param_2);
extern int func_006769C4(undefined4 *param_1,undefined4 *param_2);
extern int func_00676A20(undefined4 *param_1);
extern int func_00676AA0(undefined4 *param_1,int *param_2);

// USA 003D789C <- EU 003D787C (Ghidra, non-matching)

undefined4 func_003D789C(int *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(undefined1 * *)(albw_frame + 0x0))
  #define local_6c (*(undefined1 * *)(albw_frame + 0x4))
  #define local_68 (*(int * *)(albw_frame + 0x8))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(int *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined1 * *)(albw_frame + 0x24))
  #define local_48 (*(undefined1 * *)(albw_frame + 0x28))
  #define local_44 (*(int *)(albw_frame + 0x2c))
  #define local_40 ((int *)(albw_frame + 0x30))
  #define piStack_34 (*(int * *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 * *)(albw_frame + 0x40))
  #define piStack_2c (*(int * *)(albw_frame + 0x44))
  #define piStack_28 (*(int * *)(albw_frame + 0x48))
  piStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  piStack_28 = param_4;
  func_003D6F78(&local_48,(int)param_1);
  if (local_48 == (undefined1 *)0x0) {
    return 2;
  }
  iVar7 = *param_4;
  uVar6 = 1;
  if (1 < *(ushort *)(*param_1 + 0xc)) {
    do {
      func_003DA36C((int)&local_70,param_1 + 1,param_1[5]);
      local_50 = 0;
      local_44 = *param_3;
      local_54 = *param_4;
      iVar1 = func_003DA0FC((int *)&local_70,&local_50,&local_44,&local_54);
      if (iVar1 == 0) {
        if (local_68 == (int *)0x0) {
          return 2;
        }
        puVar4 = local_6c;
        if ((undefined1 **)local_6c == &local_70) {
          return 2;
        }
        do {
          puVar3 = *(undefined1 **)(puVar4 + 4);
          func_003DA464(local_68,(int)puVar4,1);
          puVar4 = puVar3;
        } while ((undefined1 **)puVar3 != &local_70);
        return 2;
      }
      piVar5 = (int *)(iVar7 + 8);
      piVar2 = (int *)func_003DA498(*(int **)(iVar7 + 0x10),2);
      if (piVar2 == (int *)0x0) {
        if (local_68 == (int *)0x0) {
          return 2;
        }
        puVar4 = local_6c;
        if ((undefined1 **)local_6c == &local_70) {
          return 2;
        }
        do {
          puVar3 = *(undefined1 **)(puVar4 + 4);
          func_003DA464(local_68,(int)puVar4,1);
          puVar4 = puVar3;
        } while ((undefined1 **)puVar3 != &local_70);
        return 2;
      }
      if (piVar2 + 2 != (int *)0x0) {
        func_00676A20(piVar2 + 2);
      }
      *piVar2 = *piVar5;
      piVar2[1] = (int)piVar5;
      *piVar5 = (int)piVar2;
      *(int **)(*piVar2 + 4) = piVar2;
      local_58 = local_50;
      func_006769C4(piVar2 + 2,&local_58);
      local_54 = *param_4;
      func_003DA324(local_40,(int)&local_70,&local_54);
      iVar7 = *(int *)(local_40[0] + 0xc);
      if ((uint)*(ushort *)(*param_1 + 10) <= uVar6 + 1) {
        piVar5 = (int *)(iVar7 + 8);
        piVar2 = (int *)func_003DA498(*(int **)(iVar7 + 0x10),2);
        if (piVar2 == (int *)0x0) {
          if (local_68 == (int *)0x0) {
            return 2;
          }
          puVar4 = local_6c;
          if ((undefined1 **)local_6c == &local_70) {
            return 2;
          }
          do {
            puVar3 = *(undefined1 **)(puVar4 + 4);
            func_003DA464(local_68,(int)puVar4,1);
            puVar4 = puVar3;
          } while ((undefined1 **)puVar3 != &local_70);
          return 2;
        }
        if (piVar2 + 2 != (int *)0x0) {
          func_00676A20(piVar2 + 2);
        }
        *piVar2 = *piVar5;
        piVar2[1] = (int)piVar5;
        *piVar5 = (int)piVar2;
        *(int **)(*piVar2 + 4) = piVar2;
        local_4c = local_48;
        func_006769C4(piVar2 + 2,&local_4c);
      }
      if (local_68 != (int *)0x0) {
        puVar4 = local_6c;
        if ((undefined1 **)local_6c != &local_70) {
          do {
            puVar3 = *(undefined1 **)(puVar4 + 4);
            func_003DA464(local_68,(int)puVar4,1);
            puVar4 = puVar3;
          } while ((undefined1 **)puVar3 != &local_70);
        }
        local_68 = (int *)0x0;
        local_70 = (undefined1 *)&local_70;
        local_6c = (undefined1 *)&local_70;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(*param_1 + 0xc));
  }
  if (*(short *)(*param_1 + 10) == 0) {
    func_00676AA0(&local_6c,(int *)(*param_3 + 8));
    if (local_6c == (undefined1 *)0x0) {
      return 2;
    }
    local_70 = local_48;
    func_006769C4((undefined4 *)(local_6c + 8),&local_70);
  }
  if ((*(ushort *)(*param_1 + 10) < 2) && (*(short *)(*param_1 + 0xc) != 0)) {
    func_00676AA0(&local_6c,(int *)(*param_4 + 8));
    if (local_6c == (undefined1 *)0x0) {
      return 2;
    }
    local_70 = local_48;
    func_006769C4((undefined4 *)(local_6c + 8),&local_70);
  }
  *local_30 = local_48;
  *param_1 = *(int *)(*param_1 + 4);
  return 0;
}

