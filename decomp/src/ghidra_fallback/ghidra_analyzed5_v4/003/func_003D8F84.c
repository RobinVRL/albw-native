#include "ghidra_types.h"

extern int func_003D88D8(undefined4 *param_1,int *param_2,uint *param_3,int *param_4);
extern int func_003D89CC(int param_1,int param_2);
extern int func_003D9888(int *param_1,uint param_2);
extern int func_003DA464(int *param_1,int param_2,int param_3);
extern int func_003DA498(int *param_1,int param_2);
extern int func_0067683C(undefined4 *param_1,undefined4 *param_2,undefined2 param_3);
extern int func_00676854(undefined4 *param_1);
extern int func_00676A44(int param_1);
extern int func_0068FBAC(int param_1,uint param_2);

// USA 003D8F84 <- EU 003D8F64 (Ghidra, non-matching)

undefined4 func_003D8F84(int *param_1,int *param_2)

{
  uint uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *in_r3;
  int *piVar10;
  uint uVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define piStack_2c (*(int * *)(albw_frame + 0x14))
  #define local_28 (*(int * *)(albw_frame + 0x18))
  iVar4 = *param_2;
  piVar3 = *(int **)(iVar4 + 0x18);
  piStack_2c = param_1;
  local_28 = param_2;
  do {
    while( true ) {
      if (piVar3 == (int *)(iVar4 + 0x14)) {
        return 1;
      }
      if ((char)piVar3[3] == '\x02') break;
      piVar3 = (int *)piVar3[1];
    }
    uVar1 = param_1[4] + 0xfU >> 4;
    uVar2 = *(ushort *)((int)piVar3 + 0xe);
    uVar11 = (uint)uVar2;
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
    *(undefined1 *)(*(int *)(piVar3[2] + 0x14) + (int)puVar5) = 1;
    piVar8 = *(int **)(iVar4 + 0x18);
    while (piVar8 != (int *)(iVar4 + 0x14)) {
      if (piVar8 == piVar3) {
LAB_003d912c:
        piVar8 = (int *)piVar8[1];
      }
      else if ((char)piVar8[3] == '\x02') {
        if (*(ushort *)((int)piVar8 + 0xe) != uVar11) goto LAB_003d912c;
        *(undefined1 *)(*(int *)(piVar8[2] + 0x14) + (int)puVar5) = 1;
        piVar10 = (int *)piVar8[1];
        *(int **)(*piVar8 + 4) = piVar10;
        *(int *)piVar8[1] = *piVar8;
        func_00676A44((int)(piVar8 + 2));
        func_003DA464(*(int **)(iVar4 + 0x1c),(int)piVar8,2);
        piVar8 = piVar10;
      }
      else {
        if (((char)piVar8[3] != '\x03') ||
           (iVar7 = func_0068FBAC((int)(piVar8 + 2),uVar11), iVar7 == 0)) goto LAB_003d912c;
        iVar7 = func_003D9888(piVar8 + 4,uVar11);
        if (iVar7 == 0) {
          return 0;
        }
        in_r3 = *(int **)(piVar8[2] + 0x14);
        *(undefined1 *)((int)in_r3 + (int)puVar5) = 1;
        if ((int *)piVar8[5] != piVar8 + 4) goto LAB_003d912c;
        piVar10 = (int *)piVar8[1];
        *(int **)(*piVar8 + 4) = piVar10;
        *(int *)piVar8[1] = *piVar8;
        func_00676A44((int)(piVar8 + 2));
        func_003DA464(*(int **)(iVar4 + 0x1c),(int)piVar8,2);
        piVar8 = piVar10;
      }
    }
    func_003D89CC((int)param_1,(int)puVar5);
    func_003D88D8(&local_34,param_1,puVar5,in_r3);
    if (local_34 == 0) {
      return 0;
    }
    func_003DA464((int *)*param_1,(int)puVar5,uVar1);
    piVar10 = (int *)(*local_28 + 8);
    piVar8 = (int *)func_003DA498(*(int **)(*local_28 + 0x10),2);
    if (piVar8 == (int *)0x0) {
      return 0;
    }
    if (piVar8 + 2 != (int *)0x0) {
      func_00676854(piVar8 + 2);
    }
    *piVar8 = *piVar10;
    piVar8[1] = (int)piVar10;
    *piVar10 = (int)piVar8;
    *(int **)(*piVar8 + 4) = piVar8;
    local_30 = local_34;
    func_0067683C(piVar8 + 2,&local_30,uVar2);
    piVar8 = (int *)piVar3[1];
    *(int **)(*piVar3 + 4) = piVar8;
    *(int *)piVar3[1] = *piVar3;
    func_00676A44((int)(piVar3 + 2));
    func_003DA464(*(int **)(iVar4 + 0x1c),(int)piVar3,2);
    piVar3 = piVar8;
  } while( true );
}

