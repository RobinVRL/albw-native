#include "ghidra_types.h"

extern int func_003DA464(int *param_1,int param_2,int param_3);
extern int func_003DA498(int *param_1,int param_2);

// USA 003D9ECC <- EU 003D9EAC (Ghidra, non-matching)

undefined4 func_003D9ECC(int *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = *(int *)(param_2 + 4);
  piVar5 = (int *)param_1[1];
LAB_003d9ec4:
  do {
    while( true ) {
      if (piVar5 == param_1) {
        return 1;
      }
      if (iVar6 == param_2) {
        do {
          piVar7 = (int *)piVar5[1];
          *(int **)(*piVar5 + 4) = piVar7;
          *(int *)piVar5[1] = *piVar5;
          func_003DA464((int *)param_1[2],(int)piVar5,1);
          piVar5 = piVar7;
        } while (piVar7 != param_1);
        return 1;
      }
      uVar1 = *(ushort *)(piVar5 + 2);
      uVar2 = *(ushort *)(iVar6 + 8);
      uVar3 = *(ushort *)((int)piVar5 + 10);
      uVar4 = *(ushort *)(iVar6 + 10);
      if (uVar1 == uVar2) break;
      if (uVar2 <= uVar1) {
        if (uVar1 <= uVar4) {
          if (uVar3 <= uVar4) goto LAB_003d9f34;
          *(ushort *)((int)piVar5 + 10) = uVar4;
          piVar7 = (int *)piVar5[1];
          piVar5 = (int *)func_003DA498((int *)param_1[2],1);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = *piVar7;
            piVar5[1] = (int)piVar7;
            *piVar7 = (int)piVar5;
            *(int **)(*piVar5 + 4) = piVar5;
          }
          if (piVar5 == (int *)0x0) {
            return 0;
          }
          goto LAB_003da01c;
        }
        goto LAB_003d9f84;
      }
      if (uVar3 < uVar2) {
        piVar7 = (int *)piVar5[1];
        *(int **)(*piVar5 + 4) = piVar7;
        *(int *)piVar5[1] = *piVar5;
        func_003DA464((int *)param_1[2],(int)piVar5,1);
        piVar5 = piVar7;
      }
      else {
        *(ushort *)(piVar5 + 2) = uVar2;
        if (uVar4 < uVar3) {
          *(ushort *)((int)piVar5 + 10) = uVar4;
          piVar7 = (int *)piVar5[1];
          piVar5 = (int *)func_003DA498((int *)param_1[2],1);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = *piVar7;
            piVar5[1] = (int)piVar7;
            *piVar7 = (int)piVar5;
            *(int **)(*piVar5 + 4) = piVar5;
          }
          if (piVar5 == (int *)0x0) {
            return 0;
          }
LAB_003da01c:
          *(ushort *)(piVar5 + 2) = uVar4 + 1;
          *(ushort *)((int)piVar5 + 10) = uVar3;
          iVar6 = *(int *)(iVar6 + 4);
        }
        else {
          piVar5 = (int *)piVar5[1];
        }
      }
    }
    if (uVar3 == uVar4) {
      piVar5 = (int *)piVar5[1];
    }
    else {
      if (uVar3 < uVar4) {
LAB_003d9f34:
        piVar5 = (int *)piVar5[1];
        goto LAB_003d9ec4;
      }
      *(ushort *)((int)piVar5 + 10) = uVar4;
      piVar7 = (int *)piVar5[1];
      piVar5 = (int *)func_003DA498((int *)param_1[2],1);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = *piVar7;
        piVar5[1] = (int)piVar7;
        *piVar7 = (int)piVar5;
        *(int **)(*piVar5 + 4) = piVar5;
      }
      if (piVar5 == (int *)0x0) {
        return 0;
      }
      *(ushort *)(piVar5 + 2) = uVar4 + 1;
      *(ushort *)((int)piVar5 + 10) = uVar3;
    }
LAB_003d9f84:
    iVar6 = *(int *)(iVar6 + 4);
  } while( true );
}

