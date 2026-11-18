#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_002CEF40(int param_1,int param_2);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004DE3E0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004df118;
extern undefined4 *DAT_004df11c;
extern float DAT_004df120;
extern uint *DAT_004df124;
extern undefined4 DAT_004df128;
extern int *DAT_004df12c;
extern float DAT_004df130;
extern undefined4 *DAT_004df134;
extern int *DAT_004df138;

// USA 004DEE88 <- EU 004DEE60 (Ghidra, non-matching)
// GLOBAL DAT_004df118 int *
// GLOBAL DAT_004df11c undefined4 *
// GLOBAL DAT_004df120 float
// GLOBAL DAT_004df124 uint *
// GLOBAL DAT_004df128 undefined4
// GLOBAL DAT_004df12c int *
// GLOBAL DAT_004df130 float
// GLOBAL DAT_004df134 undefined4 *
// GLOBAL DAT_004df138 int *

undefined4 func_004DEE88(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  float in_s0;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_9c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x20))
  #define local_7c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x28))
  #define local_74 (*(uint *)(albw_frame + 0x2c))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define local_6c (*(undefined4 *)(albw_frame + 0x34))
  #define local_68 (*(undefined4 *)(albw_frame + 0x38))
  #define local_64 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x58))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_3c (*(uint *)(albw_frame + 0x64))
  #define local_38 (*(float *)(albw_frame + 0x68))
  #define local_34 (*(float *)(albw_frame + 0x6c))
  #define local_30 (*(float *)(albw_frame + 0x70))
  uVar2 = DAT_004df128;
  puVar1 = DAT_004df124;
  iVar7 = *DAT_004df118;
  iVar6 = *(int *)(param_1 + 0x990);
  if (iVar6 == 0) {
    iVar6 = *(int *)(*DAT_004df12c + 0x18);
    if (iVar6 == 0) {
      return 1;
    }
    local_70 = *(float *)(param_1 + 0x3d0);
    local_6c = *(undefined4 *)(param_1 + 0x3d4);
    local_68 = *(undefined4 *)(param_1 + 0x3d8);
    fparam_0 = DAT_004df120;
    piVar3 = (int *)func_005841A8(iVar7,*DAT_004df11c,*(int **)(iVar7 + 0x3dbc0));
    iVar7 = *piVar3;
    if (iVar7 != 0) {
      local_70 = *(float *)(iVar7 + 8);
      local_6c = *(undefined4 *)(iVar7 + 0xc);
      local_68 = *(undefined4 *)(iVar7 + 0x10);
    }
    func_004DE3E0(&local_64,param_1,7,fparam_0);
    local_9c = local_64;
    uStack_98 = uStack_60;
    uStack_94 = uStack_5c;
    uStack_90 = uStack_58;
    uStack_8c = uStack_54;
    uStack_88 = uStack_50;
    uStack_84 = uStack_4c;
    uStack_80 = uStack_48;
    local_7c = local_44;
    uStack_78 = uStack_40;
    local_74 = uStack_3c;
    local_38 = DAT_004df130;
    local_30 = DAT_004df130;
    local_34 = fparam_0;
    func_00120FBC(iVar6,(undefined4 *)(param_1 + 0x9d4),&local_70,&local_9c,uStack_3c & 0xffff,0,
                  &local_38);
  }
  else if (iVar6 == 1) {
    func_004DE3E0(&uStack_98,param_1,7,DAT_004df120);
    uVar4 = *(int *)(param_1 + 0x994) + 1;
    *(uint *)(param_1 + 0x994) = uVar4;
    if (uVar4 < ((uint)ALBW_AS_U32(local_70) & 0xffff)) {
      return 0;
    }
  }
  else {
    if (iVar6 != 2) {
      if (iVar6 != 3) {
        return 0;
      }
      puVar5 = (undefined4 *)func_005841A8(iVar7,*DAT_004df11c,*(int **)(iVar7 + 0x3dbc0));
      puVar5 = (undefined4 *)*puVar5;
      if (((*puVar1 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_004df124), iVar6 != 0)) {
        *DAT_004df134 = uVar2;
      }
      if ((puVar5 == (undefined4 *)0x0) || (iVar6 = (**(code **)*puVar5)(puVar5), iVar6 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5 == (undefined4 *)0x0) {
        return 1;
      }
      func_002CEF40((int)puVar5,1);
      return 1;
    }
    if (*(int *)(param_1 + 0x994) == 0) {
      puVar5 = (undefined4 *)func_005841A8(iVar7,*DAT_004df11c,*(int **)(iVar7 + 0x3dbc0));
      puVar5 = (undefined4 *)*puVar5;
      if (((*puVar1 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_004df124), iVar6 != 0)) {
        *DAT_004df134 = uVar2;
      }
      if ((puVar5 == (undefined4 *)0x0) || (iVar6 = (**(code **)*puVar5)(puVar5), iVar6 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5 != (undefined4 *)0x0) {
        func_002CEF40((int)puVar5,0);
      }
      func_004AD9E8(*DAT_004df138,10,0,1,in_s0);
    }
    uVar4 = *(int *)(param_1 + 0x994) + 1;
    *(uint *)(param_1 + 0x994) = uVar4;
    if (uVar4 < 0x78) {
      return 0;
    }
  }
  *(int *)(param_1 + 0x990) = *(int *)(param_1 + 0x990) + 1;
  return 0;
}

