#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568E8(int param_1);
extern float DAT_003bf740;
extern float DAT_003bf744;
extern int *DAT_003bf748;
extern uint *DAT_003bf74c;
extern undefined4 DAT_003bf750;
extern undefined4 *DAT_003bf754;
extern int *DAT_003bf758;
extern float DAT_003bf75c;

// USA 003BF4F8 <- EU 003BF4D4 (Ghidra, non-matching)
// GLOBAL DAT_003bf740 float
// GLOBAL DAT_003bf744 float
// GLOBAL DAT_003bf748 int *
// GLOBAL DAT_003bf74c uint *
// GLOBAL DAT_003bf750 undefined4
// GLOBAL DAT_003bf754 undefined4 *
// GLOBAL DAT_003bf758 int *
// GLOBAL DAT_003bf75c float

void func_003BF4F8(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  fVar8 = DAT_003bf740;
  *(float *)(param_1 + 0x90) = DAT_003bf740;
  *(float *)(param_1 + 0x94) = fVar8;
  *(float *)(param_1 + 0x98) = fVar8;
  if (*(char *)(*(int *)(param_1 + 0x48) + 0xe02) != '\0') {
    func_004D80A4(&local_48,*(uint *)(*(int *)(param_1 + 0x48) + 1000),DAT_003bf744);
    piVar1 = DAT_003bf748;
    local_44 = fVar8;
    puVar4 = (undefined4 *)
             func_0052FBA0(*DAT_003bf748 + 0x3dbbc,*(uint *)(*(int *)(param_1 + 0x48) + 0xdf8));
    uVar3 = DAT_003bf750;
    puVar2 = DAT_003bf74c;
    if (((*DAT_003bf74c & 1) == 0) && (iVar5 = func_00100174((int *)DAT_003bf74c), iVar5 != 0)) {
      *DAT_003bf754 = uVar3;
    }
    if ((puVar4 == (undefined4 *)0x0) ||
       (iVar5 = (**(code **)*puVar4)(puVar4,DAT_003bf754), iVar5 == 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 == (undefined4 *)0x0) {
      iVar5 = *(int *)(param_1 + 0x48);
      *(float *)(iVar5 + 0x3dc) = local_48;
      *(float *)(iVar5 + 0x3e0) = local_44;
      *(float *)(iVar5 + 0x3e4) = local_40;
    }
    else {
      uVar6 = puVar4[0x14];
      if (uVar6 == 0) {
        uVar6 = func_005568E8(*DAT_003bf758);
      }
      puVar7 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,uVar6);
      if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_003bf74c), iVar5 != 0)) {
        *DAT_003bf754 = uVar3;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar5 = (**(code **)*puVar7)(puVar7,DAT_003bf754), iVar5 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar7 != (undefined4 *)0x0) {
        puVar4 = puVar7;
      }
      func_00115C70(&local_30,(float *)(*(int *)(param_1 + 0x48) + 0x3d0),(float *)(puVar4 + 0xf4));
      local_3c = local_30;
      local_38 = local_2c;
      local_34 = local_28;
      if (local_30 * local_48 + local_2c * local_44 + local_28 * local_40 <= fVar8) {
        iVar5 = *(int *)(param_1 + 0x48);
        *(float *)(iVar5 + 0x3dc) = local_48;
        *(float *)(iVar5 + 0x3e0) = local_44;
        *(float *)(iVar5 + 0x3e4) = local_40;
      }
      else {
        func_00115DC8(&local_3c);
        func_00115D70(&local_3c,&local_3c,DAT_003bf75c);
        local_48 = local_3c;
        local_40 = local_34;
        iVar5 = *(int *)(param_1 + 0x48);
        *(float *)(iVar5 + 0x3dc) = local_3c;
        *(float *)(iVar5 + 0x3e0) = local_38;
        *(float *)(iVar5 + 0x3e4) = local_34;
      }
    }
    *(float *)(param_1 + 0x90) = local_48;
    *(float *)(param_1 + 0x94) = fVar8;
    *(float *)(param_1 + 0x98) = local_40;
    local_44 = fVar8;
  }
  *(undefined4 *)(param_1 + 0x4c) = 10;
  func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x15,10,1);
  *(undefined2 *)(*(int *)(param_1 + 0x48) + 0xaf4) = 2;
  return;
}

