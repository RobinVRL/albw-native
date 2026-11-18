#include "ghidra_types.h"

extern int func_0015C274(void);
extern int func_0015C580(void);
extern int func_00160398(float fparam_0);
extern int func_002CF114(int param_1,undefined4 *param_2);
extern int func_004BC7BC(int param_1);
extern int func_004BCAE0(int param_1,int param_2);
extern int func_0050F444(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern void func_00583BC8(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00687E28(undefined4 *param_1);
extern int *DAT_0050eeb8;
extern undefined4 *DAT_0050eebc;
extern int DAT_0050eec0;

// USA 0050ECC8 <- EU 0050ECA0 (Ghidra, non-matching)
// GLOBAL DAT_0050eeb8 int *
// GLOBAL DAT_0050eebc undefined4 *
// GLOBAL DAT_0050eec0 int

void func_0050ECC8(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *extraout_r1;
  int iVar8;
  int *piVar9;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  piVar1 = DAT_0050eeb8;
  local_18 = param_4;
  switch(param_1[0x284]) {
  case 0:
    iVar7 = func_0015C580();
    if ((iVar7 != 0) && (iVar7 = func_0015C274(), iVar7 != 0)) {
      iVar4 = *(int *)(iVar7 + 0x3d4);
      iVar8 = *(int *)(iVar7 + 0x3d8);
      param_1[0xda] = *(int *)(iVar7 + 0x3d0);
      param_1[0xdb] = iVar4;
      param_1[0xdc] = iVar8;
      iVar4 = *(int *)(iVar7 + 0x3d0);
      iVar8 = *(int *)(iVar7 + 0x3d4);
      param_1[0xf6] = *(int *)(iVar7 + 0x3d8);
      iVar7 = 1;
      param_1[0xf4] = iVar4;
      param_1[0xf5] = iVar8;
LAB_0050eeb0:
      param_1[0x284] = iVar7;
      return;
    }
    break;
  case 3:
    func_00583BC8(param_1);
    iVar7 = func_00160398(fparam_0);
    if (iVar7 != 0) {
      func_004BC7BC((int)param_1);
      iVar7 = 4;
      goto LAB_0050eeb0;
    }
    break;
  case 4:
    bVar3 = func_00588BF0((int)param_1,0);
    if (((bVar3) && (iVar7 = func_0015C274(), iVar7 != 0)) && (iVar4 = func_0015C580(), iVar4 != 0))
    {
      func_004BCAE0((int)param_1,1);
      iVar4 = *(int *)(iVar7 + 0x3d4);
      iVar8 = *(int *)(iVar7 + 0x3d8);
      param_1[0xda] = *(int *)(iVar7 + 0x3d0);
      param_1[0xdb] = iVar4;
      param_1[0xdc] = iVar8;
      iVar4 = *(int *)(iVar7 + 0x3d4);
      iVar8 = *(int *)(iVar7 + 0x3d8);
      param_1[0xf4] = *(int *)(iVar7 + 0x3d0);
      param_1[0xf5] = iVar4;
      param_1[0xf6] = iVar8;
      iVar7 = *(int *)(iVar7 + 1000);
      param_1[0x284] = 5;
      param_1[0xfa] = iVar7;
      *(undefined1 *)((int)param_1 + 0x855) = 10;
      (**(code **)(*param_1 + 0xac))(param_1,10,0);
      puVar2 = DAT_0050eebc;
      piVar5 = (int *)func_005841A8(*piVar1,*DAT_0050eebc,*(int **)(DAT_0050eec0 + *piVar1));
      puVar6 = (undefined4 *)(*piVar1 + 0x3dbc8);
      piVar9 = (int *)*puVar6;
      while( true ) {
        if (piVar5 != piVar9) {
          puVar6 = (undefined4 *)*piVar5;
        }
        if (piVar5 == piVar9 || puVar6 == (undefined4 *)0x0) break;
        puVar6[0xb8] = puVar6[0xb8] | 2;
        piVar5 = (int *)func_005841A8(*piVar1,*puVar2,piVar5 + 1);
        puVar6 = extraout_r1;
      }
    }
    break;
  case 7:
    if (*(char *)((int)param_1 + 0x852) == '\b') {
      if (param_1[0x282] == 0) {
        func_0050F444((int)param_1);
      }
      local_18 = param_1[0x282];
      puVar6 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,local_18);
      puVar6 = func_00687E28(puVar6);
      if (puVar6 != (undefined4 *)0x0) {
        local_18 = param_1[0xb3];
        func_002CF114((int)puVar6,&local_18);
        iVar7 = 8;
        goto LAB_0050eeb0;
      }
    }
  }
  return;
}

