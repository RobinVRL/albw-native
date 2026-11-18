#include "ghidra_types.h"

extern int func_003DA464(int *param_1,int param_2,int param_3);
extern int func_003DA498(int *param_1,int param_2);
extern uint DAT_003d9af4;

// USA 003D9974 <- EU 003D9954 (Ghidra, non-matching)
// GLOBAL DAT_003d9af4 uint

undefined4 func_003D9974(int *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  
  uVar3 = DAT_003d9af4;
  bVar2 = false;
  if ((int *)param_1[1] != param_1) {
    piVar5 = (int *)param_1[1];
    do {
      uVar4 = (uint)*(ushort *)(piVar5 + 2);
      uVar1 = *(ushort *)((int)piVar5 + 10);
      uVar6 = (uint)uVar1;
      bVar9 = param_2 <= uVar4;
      bVar8 = uVar4 == param_2;
      if (!bVar9 || bVar8) {
        bVar9 = uVar6 <= param_3;
        bVar8 = param_3 == uVar6;
      }
      if (!bVar9 || bVar8) {
        return 1;
      }
      bVar9 = uVar4 <= param_2;
      bVar8 = param_2 == uVar4;
      if (!bVar9 || bVar8) {
        bVar9 = param_3 <= uVar6;
        bVar8 = uVar6 == param_3;
      }
      if (bVar9 && !bVar8) {
        bVar9 = param_2 <= uVar4;
        bVar8 = uVar4 == param_2;
        if (!bVar9 || bVar8) {
          bVar9 = uVar6 <= param_2;
          bVar8 = param_2 == uVar6;
        }
        if ((!bVar9 || bVar8) || ((uVar6 != uVar3 && (uVar6 + 1 == param_2)))) {
          bVar2 = true;
          *(short *)((int)piVar5 + 10) = (short)param_3;
        }
        else {
          bVar9 = param_3 <= uVar4;
          bVar8 = uVar4 == param_3;
          if (!bVar9 || bVar8) {
            bVar9 = uVar6 <= param_3;
            bVar8 = param_3 == uVar6;
          }
          if ((!bVar9 || bVar8) || ((param_3 != uVar3 && (param_3 + 1 == uVar4)))) {
            if (bVar2) {
              piVar7 = (int *)piVar5[1];
              *(int **)(*piVar5 + 4) = piVar7;
              *(int *)piVar5[1] = *piVar5;
              func_003DA464((int *)param_1[2],(int)piVar5,1);
              *(ushort *)(*piVar7 + 10) = uVar1;
              return 1;
            }
            *(short *)(piVar5 + 2) = (short)param_2;
            return 1;
          }
          if (param_3 < uVar4) {
            if (bVar2) {
              return 1;
            }
            piVar7 = (int *)func_003DA498((int *)param_1[2],1);
            if (piVar7 == (int *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              *piVar7 = *piVar5;
              piVar7[1] = (int)piVar5;
              *piVar5 = (int)piVar7;
              *(int **)(*piVar7 + 4) = piVar7;
            }
            if (piVar7 == (int *)0x0) {
              return 0;
            }
            goto LAB_003d9ae8;
          }
        }
        piVar7 = (int *)piVar5[1];
      }
      else {
        piVar7 = (int *)piVar5[1];
        *(int **)(*piVar5 + 4) = piVar7;
        *(int *)piVar5[1] = *piVar5;
        func_003DA464((int *)param_1[2],(int)piVar5,1);
      }
      piVar5 = piVar7;
    } while (piVar7 != param_1);
    if (bVar2) {
      return 1;
    }
  }
  piVar7 = (int *)func_003DA498((int *)param_1[2],1);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = *param_1;
    piVar7[1] = (int)param_1;
    *param_1 = (int)piVar7;
    *(int **)(*piVar7 + 4) = piVar7;
  }
  if (piVar7 == (int *)0x0) {
    return 0;
  }
LAB_003d9ae8:
  *(short *)(piVar7 + 2) = (short)param_2;
  *(short *)((int)piVar7 + 10) = (short)param_3;
  return 1;
}

