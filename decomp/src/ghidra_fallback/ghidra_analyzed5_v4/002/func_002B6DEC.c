#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_0068C690(float *param_1);
extern float DAT_002b6f8c;
extern float DAT_002b6f90;
extern int *DAT_002b6f94;
extern int DAT_002b6f98;
extern uint *DAT_002b6f9c;
extern undefined4 DAT_002b6fa0;
extern undefined4 *DAT_002b6fa4;

// USA 002B6DEC <- EU 002B6DC8 (Ghidra, non-matching)
// GLOBAL DAT_002b6f8c float
// GLOBAL DAT_002b6f90 float
// GLOBAL DAT_002b6f94 int *
// GLOBAL DAT_002b6f98 int
// GLOBAL DAT_002b6f9c uint *
// GLOBAL DAT_002b6fa0 undefined4
// GLOBAL DAT_002b6fa4 undefined4 *

undefined4 func_002B6DEC(int param_1,undefined4 param_2,uint *param_3,float fparam_0)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  local_50 = *(float *)(param_1 + 0x964);
  local_4c = *(float *)(param_1 + 0x968);
  local_48 = *(float *)(param_1 + 0x96c);
  func_004D80A4(&local_50,*param_3,DAT_002b6f8c);
  piVar1 = DAT_002b6f94;
  uVar8 = CONCAT44(DAT_002b6f90,fparam_0);
  local_4c = DAT_002b6f90;
  local_44 = DAT_002b6f90;
  local_40 = DAT_002b6f90;
  local_3c = DAT_002b6f90;
  puVar4 = (undefined4 *)
           func_005841A8(*DAT_002b6f94,param_2,*(int **)(DAT_002b6f98 + *DAT_002b6f94));
  uVar3 = DAT_002b6fa0;
  puVar2 = DAT_002b6f9c;
  if (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar4) {
    do {
      puVar7 = (undefined4 *)*puVar4;
      if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_002b6f9c), iVar5 != 0)) {
        *DAT_002b6fa4 = uVar3;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar5 = (**(code **)*puVar7)(puVar7,DAT_002b6fa4), iVar5 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if (((puVar7 != (undefined4 *)0x0) &&
          (func_00115C70(&local_38,(float *)(puVar7 + 0xf4),(float *)(param_1 + 0x3d0)),
          local_38 * local_38 + local_30 * local_30 < ALBW_AS_F32(uVar8) * ALBW_AS_F32(uVar8))) &&
         (ALBW_AS_F32(((ulonglong)uVar8 >> 0x20)) <=
          local_50 * local_38 + local_4c * local_34 + local_48 * local_30)) {
        local_44 = -*(float *)(param_1 + 0x3d0);
        local_40 = -*(float *)(param_1 + 0x3d4);
        local_3c = -*(float *)(param_1 + 0x3d8);
        uVar6 = func_0068C690(&local_44);
        *param_3 = uVar6;
        return 1;
      }
      puVar4 = (undefined4 *)func_005841A8(*piVar1,param_2,puVar4 + 1);
    } while (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar4);
  }
  return 0;
}

