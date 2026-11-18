// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_004A3700(int param_1);
extern int func_00556B54(int param_1);
extern int func_0066B43C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00507ca0;
extern float DAT_00507ca4;
extern undefined4 DAT_00507ca8;
extern undefined4 DAT_00507cac;

// USA 00507AE0 <- EU 00507AB8 (Ghidra, non-matching)
// GLOBAL DAT_00507ca0 int *
// GLOBAL DAT_00507ca4 float
// GLOBAL DAT_00507ca8 undefined4
// GLOBAL DAT_00507cac undefined4

undefined4 func_00507AE0(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  float fparam_0;
  
  uVar3 = DAT_00507ca8;
  piVar2 = DAT_00507ca0;
  if ((*(int *)(param_2 + 0x2c) != 0) && (*(uint *)(param_1 + 0x4a4) <= *(uint *)(param_1 + 0x4a0)))
  {
    cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
    iVar5 = *DAT_00507ca0;
    if (cVar1 == '\x05') {
      fparam_0 = DAT_00507ca4;
      bVar4 = func_00556B54(iVar5);
      if (bVar4) {
        *(uint *)(*(int *)(param_1 + 0x41c) + 0x2c) =
             *(uint *)(*(int *)(param_1 + 0x41c) + 0x2c) | 0x10;
        return 0;
      }
      func_002917A4(*piVar2,param_1 + 0x3d0,0,fparam_0);
      *(uint *)(*(int *)(param_1 + 0x41c) + 0x2c) =
           *(uint *)(*(int *)(param_1 + 0x41c) + 0x2c) & 0xffffffef;
    }
    else if (cVar1 == '\b') {
      func_00291A38(iVar5,param_1 + 0x3d0,DAT_00507ca4);
    }
    else if (cVar1 == '\x0e') {
      func_00291FE0(iVar5,param_1 + 0x3d0,DAT_00507ca4);
    }
    else if (cVar1 == '\x02') {
      *(undefined1 *)(*(int *)(param_1 + 0x424) + 0x61) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x410) + 0x158) = uVar3;
      iVar5 = *(int *)(param_1 + 0x4f8);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == *(int *)(param_1 + 0x4fc))) {
        *(uint *)(iVar5 + 0x3c) = *(uint *)(iVar5 + 0x3c) & 0xffffffbb | 8;
        func_004A3700(iVar5);
      }
      iVar5 = *(int *)(param_1 + 0x500);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == *(int *)(param_1 + 0x504))) {
        *(uint *)(iVar5 + 0x3c) = *(uint *)(iVar5 + 0x3c) & 0xffffffbb | 8;
        func_004A3700(iVar5);
      }
      iVar5 = *(int *)(param_1 + 0x508);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == *(int *)(param_1 + 0x50c))) {
        *(uint *)(iVar5 + 0x3c) = *(uint *)(iVar5 + 0x3c) & 0xffffffbb | 8;
        func_004A3700(iVar5);
      }
      func_0066B43C((undefined4 *)(param_1 + 0x510),4);
    }
    uVar3 = DAT_00507cac;
    *(undefined4 *)(param_1 + 0x4a4) = 0x1e;
    *(undefined4 *)(param_1 + 0x4a8) = uVar3;
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    return 1;
  }
  return 0;
}

