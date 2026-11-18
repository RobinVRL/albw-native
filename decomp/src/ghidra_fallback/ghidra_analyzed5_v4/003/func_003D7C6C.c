#include "ghidra_types.h"

extern int func_003DA0FC(int *param_1,undefined4 *param_2,int *param_3,int *param_4);
extern int func_003DA324(int *param_1,int param_2,int *param_3);
extern int func_003DA36C(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_003DA464(int *param_1,int param_2,int param_3);
extern int func_003DA498(int *param_1,int param_2);
extern int func_006769C4(undefined4 *param_1,undefined4 *param_2);
extern int func_00676A20(undefined4 *param_1);
extern int func_00676AA0(undefined4 *param_1,int *param_2);

// USA 003D7C6C <- EU 003D7C4C (Ghidra, non-matching)

/* WARNING: Type propagation algorithm not settling */

undefined4 func_003D7C6C(int *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined4 *******pppppppuVar1;
  int iVar2;
  int *piVar3;
  undefined4 *******pppppppuVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(int *)(albw_frame + 0x0))
  #define local_7c ((int *)(albw_frame + 0x4))
  #define local_74 (*(undefined4 ******* *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 ******* *)(albw_frame + 0x10))
  #define local_6c (*(int * *)(albw_frame + 0x14))
  #define local_60 (*(int *)(albw_frame + 0x20))
  #define local_5c ((int *)(albw_frame + 0x24))
  #define local_50 (*(int *)(albw_frame + 0x30))
  #define local_4c (*(int *)(albw_frame + 0x34))
  #define local_48 ((int *)(albw_frame + 0x38))
  #define local_3c (*(int *)(albw_frame + 0x44))
  #define piStack_34 (*(int * *)(albw_frame + 0x4c))
  #define local_30 (*(int * *)(albw_frame + 0x50))
  #define piStack_2c (*(int * *)(albw_frame + 0x54))
  #define piStack_28 (*(int * *)(albw_frame + 0x58))
  piStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  piStack_28 = param_4;
  if (*(short *)(*param_1 + 10) == 0) {
    func_00676AA0(local_7c,(int *)(*param_4 + 8));
    if (local_7c[0] != 0) {
      local_80 = *param_3;
      func_006769C4((undefined4 *)(local_7c[0] + 8),&local_80);
      *local_30 = *param_3;
      goto LAB_003d7dd8;
    }
  }
  else {
    local_3c = *param_3;
    iVar7 = 1;
    iVar6 = *param_4;
    if (1 < *(ushort *)(*param_1 + 10)) {
      do {
        func_003DA36C((int)&local_74,param_1 + 1,param_1[5]);
        local_60 = 0;
        local_4c = *param_3;
        local_80 = *param_4;
        iVar2 = func_003DA0FC((int *)&local_74,&local_60,&local_4c,&local_80);
        if (iVar2 == 0) {
          pppppppuVar1 = local_70;
          if (local_6c == (int *)0x0) {
            return 2;
          }
          while ((undefined4 ********)pppppppuVar1 != &local_74) {
            pppppppuVar4 = (undefined4 *******)pppppppuVar1[1];
            func_003DA464(local_6c,(int)pppppppuVar1,1);
            pppppppuVar1 = pppppppuVar4;
          }
          return 2;
        }
        piVar5 = (int *)(iVar6 + 8);
        piVar3 = (int *)func_003DA498(*(int **)(iVar6 + 0x10),2);
        if (piVar3 == (int *)0x0) {
          pppppppuVar1 = local_70;
          if (local_6c == (int *)0x0) {
            return 2;
          }
          while ((undefined4 ********)pppppppuVar1 != &local_74) {
            pppppppuVar4 = (undefined4 *******)pppppppuVar1[1];
            func_003DA464(local_6c,(int)pppppppuVar1,1);
            pppppppuVar1 = pppppppuVar4;
          }
          return 2;
        }
        if (piVar3 + 2 != (int *)0x0) {
          func_00676A20(piVar3 + 2);
        }
        *piVar3 = *piVar5;
        piVar3[1] = (int)piVar5;
        *piVar5 = (int)piVar3;
        *(int **)(*piVar3 + 4) = piVar3;
        local_80 = local_60;
        func_006769C4(piVar3 + 2,&local_80);
        local_3c = local_60;
        local_80 = *param_4;
        func_003DA324(local_48,(int)&local_74,&local_80);
        iVar6 = *(int *)(local_48[0] + 0xc);
        pppppppuVar1 = local_70;
        if (local_6c != (int *)0x0) {
          while ((undefined4 ********)pppppppuVar1 != &local_74) {
            pppppppuVar4 = (undefined4 *******)pppppppuVar1[1];
            func_003DA464(local_6c,(int)pppppppuVar1,1);
            pppppppuVar1 = pppppppuVar4;
          }
          local_6c = (int *)0x0;
          local_74 = &local_74;
          local_70 = &local_74;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(uint)*(ushort *)(*param_1 + 10));
    }
    func_00676AA0(&local_50,(int *)(iVar6 + 8));
    if (local_50 != 0) {
      local_5c[0] = local_3c;
      func_006769C4((undefined4 *)(local_50 + 8),local_5c);
      *local_30 = iVar6;
LAB_003d7dd8:
      *param_1 = *(int *)(*param_1 + 4);
      return 0;
    }
  }
  return 2;
}

