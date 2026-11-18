#include "ghidra_types.h"

extern int func_003D69CC(int param_1,int *param_2,uint param_3,int param_4);
extern int func_003D6A64(int param_1);
extern int func_003D89CC(int param_1,int param_2);
extern int func_003D8A50(int *param_1,int *param_2);
extern int func_003D8F84(int *param_1,int *param_2);
extern int func_003D9234(int *param_1,int *param_2);
extern int func_003D930C(int *param_1,int *param_2);
extern int func_003DA498(int *param_1,int param_2);

// USA 003D94F0 <- EU 003D94D0 (Ghidra, non-matching)

undefined4 func_003D94F0(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined1 uVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int * *)(albw_frame + 0x0))
  #define local_1c (*(int * *)(albw_frame + 0x4))
  *param_1 = (int)param_2;
  iVar6 = 0;
  for (iVar2 = *(int *)(param_3 + 4); iVar2 != param_3; iVar2 = *(int *)(iVar2 + 4)) {
    iVar6 = iVar6 + 1;
  }
  param_1[4] = iVar6;
  iVar2 = func_003DA498(param_2,iVar6 * 4 + 0xfU >> 4);
  param_1[5] = iVar2;
  if (iVar2 != 0) {
    iVar6 = 0;
    for (iVar2 = *(int *)(param_3 + 4); iVar2 != param_3; iVar2 = *(int *)(iVar2 + 4)) {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      *(int *)(param_1[5] + iVar1) = iVar2;
    }
    piVar5 = param_1 + 1;
    param_1[3] = *param_1;
    piVar3 = (int *)func_003DA498((int *)*param_1,3);
    if (piVar3 != (int *)0x0) {
      if (piVar3 + 2 != (int *)0x0) {
        func_003D6A64((int)(piVar3 + 2));
      }
      *piVar3 = *piVar5;
      piVar3[1] = (int)piVar5;
      *piVar5 = (int)piVar3;
      *(int **)(*piVar3 + 4) = piVar3;
      iVar2 = func_003D69CC((int)(piVar3 + 2),(int *)*param_1,param_1[4],1);
      if (iVar2 != 0) {
        *(undefined1 *)piVar3[9] = 1;
        func_003D89CC((int)param_1,piVar3[9]);
        local_1c = piVar3;
        iVar2 = func_003D9234(param_1,(int *)&local_1c);
        if (iVar2 != 0) {
          for (piVar3 = (int *)param_1[2]; piVar3 != param_1 + 1; piVar3 = (int *)piVar3[1]) {
            if ((int *)piVar3[6] != piVar3 + 5) {
              local_20 = piVar3;
              iVar2 = func_003D8F84(param_1,(int *)&local_20);
              if (iVar2 == 0) {
                return 0;
              }
              if ((int *)piVar3[6] != piVar3 + 5) {
                local_20 = piVar3;
                iVar2 = func_003D8A50(param_1,(int *)&local_20);
                if (iVar2 == 0) {
                  return 0;
                }
                if (((int *)piVar3[6] != piVar3 + 5) &&
                   (local_20 = piVar3, iVar2 = func_003D930C(param_1,(int *)&local_20), iVar2 == 0))
                {
                  return 0;
                }
              }
            }
          }
          piVar5 = (int *)param_1[2];
          for (piVar3 = piVar5; piVar3 != param_1 + 1; piVar3 = (int *)piVar3[1]) {
          }
          iVar2 = *param_4;
          do {
            if (piVar5 == param_1 + 1) {
              return 1;
            }
            uVar7 = 0;
            uVar4 = 0;
            if (param_1[4] != 0) {
              do {
                if ((*(char *)(piVar5[9] + uVar4) != '\0') &&
                   (*(int *)(param_1[5] + uVar4 * 4) == iVar2)) {
                  uVar7 = 1;
                  break;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < (uint)param_1[4]);
            }
            *(undefined1 *)(piVar5 + 0xb) = uVar7;
            piVar5 = (int *)piVar5[1];
          } while( true );
        }
      }
    }
  }
  return 0;
}

