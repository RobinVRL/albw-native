#include "ghidra_types.h"

extern int func_003DA464(int *param_1,int param_2,int param_3);
extern int func_003DA498(int *param_1,int param_2);
extern uint DAT_003d9ea8;

// USA 003D9B60 <- EU 003D9B40 (Ghidra, non-matching)
// GLOBAL DAT_003d9ea8 uint

/* WARNING: Removing unreachable block (ram,0x003d9d24) */

undefined4 func_003D9B60(int *param_1)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  int **ppiVar4;
  int *piVar5;
  int **ppiVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int * *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 * *)(albw_frame + 0xc))
  #define local_20 (*(int * *)(albw_frame + 0x10))
  uVar3 = DAT_003d9ea8;
  local_28 = (int *)&local_28;
  local_24 = &local_28;
  piVar7 = (int *)param_1[1];
  uVar1 = (undefined2)DAT_003d9ea8;
  if (piVar7 == param_1) {
    piVar7 = (int *)func_003DA498((int *)param_1[2],1);
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    *piVar7 = *param_1;
    piVar7[1] = (int)param_1;
    *param_1 = (int)piVar7;
    *(int **)(*piVar7 + 4) = piVar7;
    *(undefined2 *)(piVar7 + 2) = 0;
    *(undefined2 *)((int)piVar7 + 10) = uVar1;
  }
  else {
    iVar8 = 0;
    piVar5 = piVar7;
    do {
      piVar5 = (int *)piVar5[1];
      iVar8 = iVar8 + 1;
    } while (piVar5 != param_1);
    if (((iVar8 == 1) && ((short)piVar7[2] == 0)) && (*(short *)((int)piVar7 + 10) == 0)) {
      *(int *)(*piVar7 + 4) = piVar7[1];
      *(int *)piVar7[1] = *piVar7;
      func_003DA464((int *)param_1[2],(int)piVar7,1);
    }
    else {
      local_20 = (int *)param_1[2];
      piVar5 = (int *)param_1[1];
      piVar7 = piVar5;
      ppiVar6 = &local_28;
      ppiVar4 = &local_28;
      if ((short)piVar5[2] == 0) goto LAB_003d9c38;
      ppiVar6 = (int **)func_003DA498(local_20,1);
      if (ppiVar6 == (int **)0x0) {
        if ((local_20 != (int *)0x0) && (puVar9 = local_24, (int **)local_24 != &local_28)) {
          do {
            puVar10 = (undefined4 *)puVar9[1];
            func_003DA464(local_20,(int)puVar9,1);
            puVar9 = puVar10;
          } while ((int **)puVar10 != &local_28);
        }
        return 0;
      }
      *ppiVar6 = local_28;
      ((int *)ppiVar6)[1] = (int)&local_28;
      *(int ***)((int)*ppiVar6 + 4) = ppiVar6;
      sVar2 = (short)piVar5[2];
      *(undefined2 *)((int *)ppiVar6 + 2) = 0;
      while( true ) {
        *(short *)((int)ppiVar6 + 10) = sVar2 + -1;
        piVar7 = piVar5;
        ppiVar4 = (int **)local_24;
LAB_003d9c38:
        local_24 = ppiVar4;
        local_28 = (int *)ppiVar6;
        piVar5 = (int *)piVar7[1];
        if (piVar5 == param_1) break;
        ppiVar6 = (int **)func_003DA498(local_20,1);
        if (ppiVar6 == (int **)0x0) {
          if (local_20 == (int *)0x0) {
            return 0;
          }
          puVar9 = local_24;
          if ((int **)local_24 == &local_28) {
            return 0;
          }
          do {
            puVar10 = (undefined4 *)puVar9[1];
            func_003DA464(local_20,(int)puVar9,1);
            puVar9 = puVar10;
          } while ((int **)puVar10 != &local_28);
          return 0;
        }
        *ppiVar6 = local_28;
        ((int *)ppiVar6)[1] = (int)&local_28;
        *(int ***)((int)*ppiVar6 + 4) = ppiVar6;
        sVar2 = (short)piVar5[2];
        *(short *)((int *)ppiVar6 + 2) = *(short *)((int)piVar7 + 10) + 1;
      }
      if (*(ushort *)((int)piVar7 + 10) != uVar3) {
        piVar5 = (int *)func_003DA498(local_20,1);
        if (piVar5 == (int *)0x0) {
          if (local_20 == (int *)0x0) {
            return 0;
          }
          puVar9 = local_24;
          if ((int **)local_24 == &local_28) {
            return 0;
          }
          do {
            puVar10 = (undefined4 *)puVar9[1];
            func_003DA464(local_20,(int)puVar9,1);
            puVar9 = puVar10;
          } while ((int **)puVar10 != &local_28);
          return 0;
        }
        *piVar5 = (int)local_28;
        piVar5[1] = (int)&local_28;
        *(int **)(*piVar5 + 4) = piVar5;
        *(short *)(piVar5 + 2) = *(short *)((int)piVar7 + 10) + 1;
        *(undefined2 *)((int)piVar5 + 10) = uVar1;
        local_28 = piVar5;
      }
      if (param_1[2] != 0) {
        piVar7 = (int *)param_1[1];
        while (piVar7 != param_1) {
          piVar5 = (int *)piVar7[1];
          func_003DA464((int *)param_1[2],(int)piVar7,1);
          piVar7 = piVar5;
        }
        param_1[2] = 0;
        *param_1 = (int)param_1;
        param_1[1] = (int)param_1;
      }
      param_1[1] = (int)local_24;
      *local_24 = param_1;
      *param_1 = (int)local_28;
      local_28[1] = (int)param_1;
      param_1[2] = (int)local_20;
    }
  }
  return 1;
}

