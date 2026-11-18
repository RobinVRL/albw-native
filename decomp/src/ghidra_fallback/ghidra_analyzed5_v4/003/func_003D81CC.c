#include "ghidra_types.h"

extern int func_003DA0FC(int *param_1,undefined4 *param_2,int *param_3,int *param_4);
extern int func_003DA324(int *param_1,int param_2,int *param_3);
extern int func_003DA36C(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_003DA464(int *param_1,int param_2,int param_3);
extern int func_003DA498(int *param_1,int param_2);
extern int func_006769C4(undefined4 *param_1,undefined4 *param_2);
extern int func_00676A20(undefined4 *param_1);
extern int func_00676A44(int param_1);
extern int func_00676AA0(undefined4 *param_1,int *param_2);

// USA 003D81CC <- EU 003D81AC (Ghidra, non-matching)

undefined4 func_003D81CC(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(undefined1 * *)(albw_frame + 0x8))
  #define local_54 (*(undefined1 * *)(albw_frame + 0xc))
  #define local_50 (*(int * *)(albw_frame + 0x10))
  #define local_44 (*(int *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(int *)(albw_frame + 0x24))
  #define local_38 (*(int *)(albw_frame + 0x28))
  #define piStack_34 (*(int * *)(albw_frame + 0x2c))
  #define local_30 (*(int * *)(albw_frame + 0x30))
  #define piStack_2c (*(int * *)(albw_frame + 0x34))
  #define piStack_28 (*(int * *)(albw_frame + 0x38))
  piStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  piStack_28 = param_4;
  if (*(short *)(*param_1 + 10) == 0) {
    iVar6 = *param_3;
    piVar2 = *(int **)(iVar6 + 0xc);
    while (piVar2 != (int *)(iVar6 + 8)) {
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)piVar2[1] = *piVar2;
      func_00676A44((int)(piVar2 + 2));
      func_003DA464(*(int **)(iVar6 + 0x10),(int)piVar2,2);
      piVar2 = *(int **)(iVar6 + 0xc);
    }
    func_00676AA0(&local_54,(int *)(iVar6 + 8));
    if (local_54 == (undefined1 *)0x0) {
      return 2;
    }
    local_58 = (undefined1 *)*param_4;
    func_006769C4((undefined4 *)(local_54 + 8),&local_58);
    *local_30 = *param_4;
  }
  else {
    iVar6 = *param_4;
    iVar7 = 1;
    if (1 < *(ushort *)(*param_1 + 10)) {
      do {
        func_003DA36C((int)&local_58,param_1 + 1,param_1[5]);
        local_40 = 0;
        local_3c = *param_3;
        local_44 = *param_4;
        iVar1 = func_003DA0FC((int *)&local_58,&local_40,&local_3c,&local_44);
        if (iVar1 == 0) {
          if (local_50 == (int *)0x0) {
            return 2;
          }
          puVar3 = local_54;
          if ((undefined1 **)local_54 == &local_58) {
            return 2;
          }
          do {
            puVar4 = *(undefined1 **)(puVar3 + 4);
            func_003DA464(local_50,(int)puVar3,1);
            puVar3 = puVar4;
          } while ((undefined1 **)puVar4 != &local_58);
          return 2;
        }
        piVar5 = (int *)(iVar6 + 8);
        piVar2 = (int *)func_003DA498(*(int **)(iVar6 + 0x10),2);
        if (piVar2 == (int *)0x0) {
          if (local_50 == (int *)0x0) {
            return 2;
          }
          puVar3 = local_54;
          if ((undefined1 **)local_54 == &local_58) {
            return 2;
          }
          do {
            puVar4 = *(undefined1 **)(puVar3 + 4);
            func_003DA464(local_50,(int)puVar3,1);
            puVar3 = puVar4;
          } while ((undefined1 **)puVar4 != &local_58);
          return 2;
        }
        if (piVar2 + 2 != (int *)0x0) {
          func_00676A20(piVar2 + 2);
        }
        *piVar2 = *piVar5;
        piVar2[1] = (int)piVar5;
        *piVar5 = (int)piVar2;
        *(int **)(*piVar2 + 4) = piVar2;
        local_44 = local_40;
        func_006769C4(piVar2 + 2,&local_44);
        local_44 = *param_4;
        func_003DA324(&local_38,(int)&local_58,&local_44);
        iVar6 = *(int *)(local_38 + 0xc);
        if (local_50 != (int *)0x0) {
          puVar3 = local_54;
          if ((undefined1 **)local_54 != &local_58) {
            do {
              puVar4 = *(undefined1 **)(puVar3 + 4);
              func_003DA464(local_50,(int)puVar3,1);
              puVar3 = puVar4;
            } while ((undefined1 **)puVar4 != &local_58);
          }
          local_50 = (int *)0x0;
          local_58 = (undefined1 *)&local_58;
          local_54 = (undefined1 *)&local_58;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(uint)*(ushort *)(*param_1 + 10));
    }
    *local_30 = iVar6;
  }
  *param_1 = *(int *)(*param_1 + 4);
  return 0;
}

