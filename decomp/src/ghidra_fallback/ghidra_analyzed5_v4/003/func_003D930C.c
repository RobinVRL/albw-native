#include "ghidra_types.h"

extern int func_00100858(uint *param_1,uint *param_2,uint param_3);
extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_003D88D8(undefined4 *param_1,int *param_2,uint *param_3,int *param_4);
extern int func_003D89CC(int param_1,int param_2);
extern int func_003DA464(int *param_1,int param_2,int param_3);
extern int func_003DA498(int *param_1,int param_2);
extern int func_0067680C(undefined4 *param_1,undefined4 *param_2,undefined1 param_3);
extern int func_00676854(undefined4 *param_1);
extern int func_00676A44(int param_1);

// USA 003D930C <- EU 003D92EC (Ghidra, non-matching)

undefined4 func_003D930C(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int *in_r3;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_28 (*(int * *)(albw_frame + 0x8))
  iVar2 = *param_2;
  piVar8 = (int *)(iVar2 + 0x14);
  piVar7 = *(int **)(iVar2 + 0x18);
  local_28 = piVar8;
  if (*(int **)(iVar2 + 0x18) != piVar8) {
    do {
      uVar1 = param_1[4] + 0xfU >> 4;
      puVar3 = (uint *)func_003DA498((int *)*param_1,uVar1);
      if (puVar3 == (uint *)0x0) {
        return 0;
      }
      func_001163A0(puVar3,*(uint **)(*param_2 + 0x24),param_1[4]);
      *(undefined1 *)((int)puVar3 + *(int *)(piVar7[2] + 0x14)) = 1;
      piVar5 = *(int **)(iVar2 + 0x18);
      while (piVar5 != piVar8) {
        if ((piVar5 == piVar7) || (*(char *)((int)piVar7 + 0xe) != *(char *)((int)piVar5 + 0xe))) {
          piVar5 = (int *)piVar5[1];
        }
        else {
          *(undefined1 *)((int)puVar3 + *(int *)(piVar5[2] + 0x14)) = 1;
          piVar6 = (int *)piVar5[1];
          *(int **)(*piVar5 + 4) = piVar6;
          *(int *)piVar5[1] = *piVar5;
          func_00676A44((int)(piVar5 + 2));
          func_003DA464(*(int **)(iVar2 + 0x1c),(int)piVar5,2);
          piVar5 = piVar6;
        }
      }
      func_003D89CC((int)param_1,(int)puVar3);
      iVar4 = func_00100858(puVar3,*(uint **)(*param_2 + 0x24),param_1[4]);
      if (iVar4 != 0) {
        func_003D88D8(&local_30,param_1,puVar3,in_r3);
        if (local_30 == 0) {
          return 0;
        }
        piVar6 = (int *)(*param_2 + 8);
        piVar5 = (int *)func_003DA498(*(int **)(*param_2 + 0x10),2);
        if (piVar5 == (int *)0x0) {
          return 0;
        }
        if (piVar5 + 2 != (int *)0x0) {
          func_00676854(piVar5 + 2);
        }
        *piVar5 = *piVar6;
        piVar5[1] = (int)piVar6;
        *piVar6 = (int)piVar5;
        *(int **)(*piVar5 + 4) = piVar5;
        local_2c = local_30;
        func_0067680C(piVar5 + 2,&local_2c,*(undefined1 *)((int)piVar7 + 0xe));
      }
      func_003DA464((int *)*param_1,(int)puVar3,uVar1);
      piVar5 = (int *)piVar7[1];
      *(int **)(*piVar7 + 4) = piVar5;
      *(int *)piVar7[1] = *piVar7;
      func_00676A44((int)(piVar7 + 2));
      func_003DA464(*(int **)(iVar2 + 0x1c),(int)piVar7,2);
      piVar7 = piVar5;
    } while (piVar5 != local_28);
  }
  return 1;
}

