#include "ghidra_types.h"

extern int func_003DA498(int *param_1,int param_2);
extern int func_00676878(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4);
extern int func_00676A20(undefined4 *param_1);

// USA 003DA0FC <- EU 003DA0DC (Ghidra, non-matching)

undefined4 func_003DA0FC(int *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c ((int *)(albw_frame + 0x14))
  #define piStack_34 (*(int * *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 * *)(albw_frame + 0x20))
  #define piStack_2c (*(int * *)(albw_frame + 0x24))
  #define piStack_28 (*(int * *)(albw_frame + 0x28))
  piVar5 = (int *)param_1[3];
  piStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  piStack_28 = param_4;
  piVar1 = (int *)func_003DA498((int *)piVar5[2],2);
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 2;
    if (piVar2 != (int *)0x0) {
      piVar1[4] = 0;
      *piVar2 = (int)piVar2;
      piVar1[5] = 0;
      piVar1[3] = (int)piVar2;
    }
    *piVar1 = *piVar5;
    piVar1[1] = (int)piVar5;
    *piVar5 = (int)piVar1;
    *(int **)(*piVar1 + 4) = piVar1;
    piVar1[4] = param_1[4];
    piVar5 = (int *)func_003DA498((int *)param_1[2],1);
    uVar4 = 0;
    if (piVar5 != (int *)0x0) {
      if (piVar5 + 2 != (int *)0x0) {
        piVar5[2] = 0;
        piVar5[3] = 0;
      }
      *piVar5 = *param_1;
      piVar5[1] = (int)param_1;
      *param_1 = (int)piVar5;
      *(int **)(*piVar5 + 4) = piVar5;
      piVar5[2] = *param_3;
      piVar5[3] = (int)piVar1;
      if (*param_3 != *param_4) {
        local_40 = *param_3 + 8;
        iVar6 = *(int *)(*param_3 + 0xc);
        if (iVar6 != local_40) {
          do {
            piVar5 = (int *)param_1[1];
            if (piVar5 != param_1) {
              do {
                bVar8 = piVar5[2] != *(int *)(iVar6 + 8);
                if (bVar8) {
                  piVar5 = (int *)piVar5[1];
                }
              } while (bVar8 && piVar5 != param_1);
            }
            if (piVar5 == param_1) {
              local_44 = 0;
              local_3c[0] = *(int *)(iVar6 + 8);
              local_48 = *param_4;
              iVar3 = func_003DA0FC(param_1,&local_44,local_3c,&local_48);
              if (iVar3 == 0) {
                return 0;
              }
              piVar2 = piVar1 + 2;
              piVar5 = (int *)func_003DA498((int *)piVar1[4],2);
              if (piVar5 == (int *)0x0) {
                return 0;
              }
              if (piVar5 + 2 != (int *)0x0) {
                func_00676A20(piVar5 + 2);
              }
              *piVar5 = *piVar2;
              piVar5[1] = (int)piVar2;
              *piVar2 = (int)piVar5;
              *(int **)(*piVar5 + 4) = piVar5;
              local_48 = local_44;
              iVar3 = func_00676878(piVar5 + 2,iVar6 + 8,&local_48,param_1[4]);
            }
            else {
              piVar7 = piVar1 + 2;
              piVar2 = (int *)func_003DA498((int *)piVar1[4],2);
              if (piVar2 == (int *)0x0) {
                return 0;
              }
              if (piVar2 + 2 != (int *)0x0) {
                func_00676A20(piVar2 + 2);
              }
              *piVar2 = *piVar7;
              piVar2[1] = (int)piVar7;
              *piVar7 = (int)piVar2;
              *(int **)(*piVar2 + 4) = piVar2;
              local_48 = piVar5[3];
              iVar3 = func_00676878(piVar2 + 2,iVar6 + 8,&local_48,param_1[4]);
            }
            if (iVar3 == 0) {
              return 0;
            }
            iVar6 = *(int *)(iVar6 + 4);
          } while (iVar6 != local_40);
        }
      }
      *local_30 = piVar1;
      uVar4 = 1;
    }
  }
  return uVar4;
}

