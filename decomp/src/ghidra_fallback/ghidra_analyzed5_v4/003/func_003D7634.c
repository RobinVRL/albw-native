#include "ghidra_types.h"

extern int func_003D6E80(int *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_003DA498(int *param_1,int param_2);
extern int func_006769C4(undefined4 *param_1,undefined4 *param_2);
extern int func_00676A20(undefined4 *param_1);
extern int DAT_003d7878;

// USA 003D7634 <- EU 003D7614 (Ghidra, non-matching)
// GLOBAL DAT_003d7878 int

uint func_003D7634(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  code *in_r3;
  int iVar6;
  code *in_r12;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_64 ((int * *)(albw_frame + 0xc))
  #define local_58 ((int * *)(albw_frame + 0x18))
  #define local_50 ((int * *)(albw_frame + 0x20))
  #define local_48 (*(int * *)(albw_frame + 0x28))
  #define local_44 ((int *)(albw_frame + 0x2c))
  #define local_3c (*(int * *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define piStack_30 (*(int * *)(albw_frame + 0x40))
  #define local_2c (*(int * *)(albw_frame + 0x44))
  #define piStack_28 (*(int * *)(albw_frame + 0x48))
  local_48 = (int *)0x0;
  local_44[0] = *param_3;
  piStack_30 = param_1;
  local_2c = param_2;
  piStack_28 = param_3;
  uVar2 = func_003D6E80(param_1,&local_48,local_44);
  if (uVar2 == 0) {
    if (*(char *)(*param_1 + 8) == '\x01') {
      piVar4 = param_1 + 1;
      piVar3 = (int *)func_003DA498((int *)param_1[3],2);
      if (piVar3 == (int *)0x0) {
        return 2;
      }
      piVar5 = piVar3 + 2;
      if (piVar5 != (int *)0x0) {
        piVar3[4] = 0;
        *piVar5 = (int)piVar5;
        piVar3[5] = 0;
        piVar3[3] = (int)piVar5;
      }
      *piVar3 = *piVar4;
      piVar3[1] = (int)piVar4;
      *piVar4 = (int)piVar3;
      *(int **)(*piVar3 + 4) = piVar3;
      piVar3[4] = param_1[5];
      piVar5 = local_48 + 2;
      piVar4 = (int *)func_003DA498((int *)local_48[4],2);
      if (piVar4 == (int *)0x0) {
        return 2;
      }
      if (piVar4 + 2 != (int *)0x0) {
        func_00676A20(piVar4 + 2);
      }
      *piVar4 = *piVar5;
      piVar4[1] = (int)piVar5;
      *piVar5 = (int)piVar4;
      *(int **)(*piVar4 + 4) = piVar4;
      local_58[0] = piVar3;
      func_006769C4(piVar4 + 2,local_58);
      iVar1 = DAT_003d7878;
      iVar6 = DAT_003d7878 + 0x98;
      while (*(char *)(*param_1 + 8) == '\x01') {
        *param_1 = *(int *)(*param_1 + 4);
        local_50[0] = (int *)*param_3;
        local_38 = 0;
        local_3c = (int *)0x0;
        while( true ) {
          piVar4 = (int *)(iVar1 + (uint)*(byte *)(*param_1 + 8) * 8);
          bVar7 = (piVar4[1] & 1U) == 0;
          if (bVar7) {
            in_r3 = (code *)*piVar4;
          }
          piVar5 = (int *)((int)param_1 + (piVar4[1] >> 1));
          if (!bVar7) {
            in_r3 = *(code **)(*piVar5 + *piVar4);
          }
          local_64[0] = local_50[0];
          uVar2 = (*in_r3)(piVar5,&local_38,local_64);
          if (uVar2 == 1) break;
          if (uVar2 != 0) {
            return uVar2;
          }
          piVar4 = (int *)(iVar6 + (uint)*(byte *)(*param_1 + 8) * 8);
          bVar7 = (piVar4[1] & 1U) == 0;
          if (bVar7) {
            in_r12 = (code *)*piVar4;
          }
          piVar5 = (int *)((int)param_1 + (piVar4[1] >> 1));
          if (!bVar7) {
            in_r12 = *(code **)(*piVar5 + *piVar4);
          }
          in_r3 = (code *)&local_34;
          local_64[0] = local_50[0];
          local_34 = local_38;
          uVar2 = (*in_r12)(piVar5,&local_3c,local_64);
          if (1 < uVar2) {
            return uVar2;
          }
          local_50[0] = local_3c;
        }
        piVar5 = local_50[0] + 2;
        local_48 = local_50[0];
        piVar4 = (int *)func_003DA498((int *)local_50[0][4],2);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          if (piVar4 + 2 != (int *)0x0) {
            func_00676A20(piVar4 + 2);
          }
          *piVar4 = *piVar5;
          piVar4[1] = (int)piVar5;
          *piVar5 = (int)piVar4;
          *(int **)(*piVar4 + 4) = piVar4;
        }
        if (piVar4 == (int *)0x0) {
          return 2;
        }
        local_50[0] = piVar3;
        func_006769C4(piVar4 + 2,local_50);
      }
      *local_2c = (int)piVar3;
    }
    else {
      *local_2c = (int)local_48;
    }
    uVar2 = 0;
  }
  return uVar2;
}

