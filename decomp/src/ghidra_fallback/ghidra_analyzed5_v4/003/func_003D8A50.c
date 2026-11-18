#include "ghidra_types.h"

extern int func_003D88D8(undefined4 *param_1,int *param_2,uint *param_3,int *param_4);
extern int func_003D89CC(int param_1,int param_2);
extern int func_003D9770(int *param_1,int param_2);
extern int func_003D9ECC(int *param_1,int param_2);
extern int func_003DA464(int *param_1,int param_2,int param_3);
extern int func_003DA498(int *param_1,int param_2);
extern int func_005645D8(int param_1,int param_2);
extern int func_00676824(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_00676854(undefined4 *param_1);
extern int func_00676A44(int param_1);

// USA 003D8A50 <- EU 003D8A30 (Ghidra, non-matching)

undefined4 func_003D8A50(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int *in_r3;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  int *piVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined1 * *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x4))
  #define local_38 (*(int * *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define piStack_2c (*(int * *)(albw_frame + 0x14))
  #define local_28 (*(int * *)(albw_frame + 0x18))
  iVar4 = *param_2;
  piVar2 = *(int **)(iVar4 + 0x18);
  piStack_2c = param_1;
  local_28 = param_2;
joined_r0x003d8a50:
  while( true ) {
    if (piVar2 == (int *)(iVar4 + 0x14)) {
      return 1;
    }
    if ((char)piVar2[3] == '\x03') break;
    piVar2 = (int *)piVar2[1];
  }
  uVar1 = param_1[4] + 0xfU >> 4;
  puVar5 = (uint *)func_003DA498((int *)*param_1,uVar1);
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  if (param_1[4] != 0) {
    puVar6 = (uint *)((int)puVar5 + -1);
    if ((param_1[4] & 1U) != 0) {
      *(undefined1 *)puVar5 = 0;
      puVar6 = puVar5;
    }
    for (uVar9 = (uint)param_1[4] >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)((int)puVar6 + 1) = 0;
      puVar6 = (uint *)((int)puVar6 + 2);
      *(undefined1 *)puVar6 = 0;
    }
  }
  *(undefined1 *)(*(int *)(piVar2[2] + 0x14) + (int)puVar5) = 1;
  local_38 = (int *)piVar2[6];
  local_40 = (undefined1 *)&local_40;
  local_3c = &local_40;
  for (piVar14 = (int *)piVar2[5]; piVar14 != piVar2 + 4; piVar14 = (int *)piVar14[1]) {
    piVar7 = (int *)func_003DA498(local_38,1);
    if (piVar7 == (int *)0x0) {
      if (local_38 == (int *)0x0) {
        return 0;
      }
      puVar10 = local_3c;
      if ((undefined1 **)local_3c == &local_40) {
        return 0;
      }
      do {
        puVar11 = (undefined4 *)puVar10[1];
        func_003DA464(local_38,(int)puVar10,1);
        puVar10 = puVar11;
      } while ((undefined1 **)puVar11 != &local_40);
      return 0;
    }
    *piVar7 = (int)local_40;
    piVar7[1] = (int)&local_40;
    *(int **)(*piVar7 + 4) = piVar7;
    piVar7[2] = piVar14[2];
    local_40 = (undefined1 *)piVar7;
  }
  piVar14 = *(int **)(iVar4 + 0x18);
joined_r0x003d8b68:
  do {
    if (piVar14 == (int *)(iVar4 + 0x14)) break;
    if (((piVar14 != piVar2) && ((char)piVar14[3] == '\x03')) &&
       (iVar8 = func_005645D8((int)(piVar14 + 4),(int)&local_40), iVar8 != 0)) {
      iVar8 = func_003D9ECC((int *)&local_40,(int)(piVar14 + 4));
      if ((iVar8 == 0) || (iVar8 = func_003D9770(piVar14 + 4,(int)&local_40), iVar8 == 0)) {
        if (local_38 == (int *)0x0) {
          return 0;
        }
        puVar10 = local_3c;
        if ((undefined1 **)local_3c == &local_40) {
          return 0;
        }
        do {
          puVar11 = (undefined4 *)puVar10[1];
          func_003DA464(local_38,(int)puVar10,1);
          puVar10 = puVar11;
        } while ((undefined1 **)puVar11 != &local_40);
        return 0;
      }
      in_r3 = (int *)0x1;
      *(undefined1 *)(*(int *)(piVar14[2] + 0x14) + (int)puVar5) = 1;
      if ((int *)piVar14[5] == piVar14 + 4) {
        piVar7 = (int *)piVar14[1];
        *(int **)(*piVar14 + 4) = piVar7;
        *(int *)piVar14[1] = *piVar14;
        func_00676A44((int)(piVar14 + 2));
        func_003DA464(*(int **)(iVar4 + 0x1c),(int)piVar14,2);
        piVar14 = piVar7;
        goto joined_r0x003d8b68;
      }
    }
    piVar14 = (int *)piVar14[1];
  } while( true );
  iVar8 = func_003D9770(piVar2 + 4,(int)&local_40);
  if (iVar8 == 0) {
    if ((local_38 != (int *)0x0) && (puVar10 = local_3c, (undefined1 **)local_3c != &local_40)) {
      do {
        puVar11 = (undefined4 *)puVar10[1];
        func_003DA464(local_38,(int)puVar10,1);
        puVar10 = puVar11;
      } while ((undefined1 **)puVar11 != &local_40);
    }
    return 0;
  }
  func_003D89CC((int)param_1,(int)puVar5);
  func_003D88D8(&local_34,param_1,puVar5,in_r3);
  if (local_34 == 0) {
    if (local_38 == (int *)0x0) {
      return 0;
    }
    puVar10 = local_3c;
    if ((undefined1 **)local_3c == &local_40) {
      return 0;
    }
    do {
      puVar11 = (undefined4 *)puVar10[1];
      func_003DA464(local_38,(int)puVar10,1);
      puVar10 = puVar11;
    } while ((undefined1 **)puVar11 != &local_40);
    return 0;
  }
  func_003DA464((int *)*param_1,(int)puVar5,uVar1);
  piVar7 = (int *)(*local_28 + 8);
  piVar14 = (int *)func_003DA498(*(int **)(*local_28 + 0x10),2);
  if (piVar14 == (int *)0x0) {
    if (local_38 == (int *)0x0) {
      return 0;
    }
    puVar10 = local_3c;
    if ((undefined1 **)local_3c == &local_40) {
      return 0;
    }
    do {
      puVar11 = (undefined4 *)puVar10[1];
      func_003DA464(local_38,(int)puVar10,1);
      puVar10 = puVar11;
    } while ((undefined1 **)puVar11 != &local_40);
    return 0;
  }
  if (piVar14 + 2 != (int *)0x0) {
    func_00676854(piVar14 + 2);
  }
  *piVar14 = *piVar7;
  piVar14[1] = (int)piVar7;
  *piVar7 = (int)piVar14;
  *(int **)(*piVar14 + 4) = piVar14;
  local_30 = local_34;
  func_00676824(piVar14 + 2,&local_30,*param_1);
  piVar7 = piVar14 + 4;
  if (piVar14[6] != 0) {
    piVar3 = (int *)piVar14[5];
    while (piVar3 != piVar7) {
      piVar13 = (int *)piVar3[1];
      func_003DA464((int *)piVar14[6],(int)piVar3,1);
      piVar3 = piVar13;
    }
    piVar14[6] = 0;
    *piVar7 = (int)piVar7;
    piVar14[5] = (int)piVar7;
  }
  piVar14[5] = (int)local_3c;
  *local_3c = piVar7;
  *piVar7 = (int)local_40;
  *(int **)(local_40 + 4) = piVar7;
  piVar14[6] = (int)local_38;
  piVar14 = piVar2;
  local_40 = (undefined1 *)&local_40;
  local_3c = &local_40;
  if ((int *)piVar2[5] == piVar2 + 4) {
    piVar14 = (int *)piVar2[1];
    *(int **)(*piVar2 + 4) = piVar14;
    *(int *)piVar2[1] = *piVar2;
    local_40 = (undefined1 *)&local_40;
    local_3c = &local_40;
    func_00676A44((int)(piVar2 + 2));
    func_003DA464(*(int **)(iVar4 + 0x1c),(int)piVar2,2);
  }
  piVar2 = piVar14;
  if (local_38 != (int *)0x0) {
    puVar10 = local_3c;
    if ((undefined1 **)local_3c != &local_40) {
      do {
        puVar12 = *(undefined1 **)((int)puVar10 + 4);
        func_003DA464(local_38,(int)puVar10,1);
        puVar10 = (undefined4 *)puVar12;
      } while ((undefined1 **)puVar12 != &local_40);
    }
    local_38 = (int *)0x0;
    local_3c = &local_40;
    local_40 = (undefined1 *)&local_40;
  }
  goto joined_r0x003d8a50;
}

