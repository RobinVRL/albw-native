#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0012D8DC(int param_1);
extern int func_001329B4(int param_1);
extern int func_002FE9A8(int param_1);
extern int func_002FE9CC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_002FEA3C(int param_1,int param_2);
extern int func_00403F18(int *param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern int func_0041F7CC(void);
extern int func_0041F7DC(void *param_1);
extern int func_00492604(float *param_1,float *param_2,float *param_3);
extern int func_0057D5C4(int *param_1);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);
extern int *DAT_0012e444;

// USA 0012E048 <- EU 0012E048 (Ghidra, non-matching)
// GLOBAL DAT_0012e444 int *

void func_0012E048(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint in_r3;
  uint uVar10;
  uint in_r12;
  bool bVar11;
  _Alignas(8) unsigned char albw_frame[0x250];
  #define local_250 (*(uint *)(albw_frame + 0x0))
  #define local_24c (*(uint *)(albw_frame + 0x4))
  #define local_248 (*(uint *)(albw_frame + 0x8))
  #define auStack_244 ((undefined1 *)(albw_frame + 0xc))
  #define local_144 (*(uint *)(albw_frame + 0x10c))
  #define local_140 (*(uint *)(albw_frame + 0x110))
  #define local_13c (*(int *)(albw_frame + 0x114))
  #define auStack_138 ((undefined1 *)(albw_frame + 0x118))
  #define local_38 (*(uint * *)(albw_frame + 0x218))
  #define local_34 (*(int * *)(albw_frame + 0x21c))
  #define local_30 (*(float * *)(albw_frame + 0x220))
  #define local_2c (*(float * *)(albw_frame + 0x224))
  local_250 = 0;
  local_24c = 0;
  local_248 = 0;
  func_0010B3EC(&local_250,0x40,(int)auStack_244);
  local_144 = 0;
  local_140 = 0;
  local_13c = 0;
  func_0010B3EC(&local_144,0x40,(int)auStack_138);
  piVar2 = *(int **)(param_1 + 0xe18);
  piVar3 = piVar2 + *(int *)(param_1 + 0xe10);
  for (; piVar2 != piVar3; piVar2 = piVar2 + 1) {
    in_r3 = *(uint *)(*piVar2 + 0x68);
    if ((in_r3 & 3) != 0) {
      if (((in_r3 & 1) != 0) && (in_r12 = local_140, (int)local_144 < (int)local_140)) {
        *(int *)(local_13c + local_144 * 4) = *piVar2;
        in_r12 = local_144;
        local_144 = local_144 + 1;
      }
      bVar11 = (*(uint *)(*piVar2 + 0x68) & 2) != 0;
      in_r3 = 0;
      if (bVar11) {
        in_r3 = local_250;
        in_r12 = local_24c;
      }
      if (bVar11 && (int)in_r3 < (int)in_r12) {
        *(int *)(local_248 + local_250 * 4) = *piVar2;
        in_r3 = local_248;
        in_r12 = local_250;
        local_250 = local_250 + 1;
      }
    }
  }
  local_38 = (uint *)(uint)(local_250 != 0);
  bVar11 = local_144 != 0;
  piVar2 = (int *)(param_1 + 0x1824);
  func_002FE9A8(*piVar2);
  func_002FE9A8(*(int *)(param_1 + 0x1828));
  if (local_38 != (uint *)0x0 || bVar11) {
    local_34 = (int *)(param_1 + 0x6b4);
    if (bVar11) {
      piVar3 = (int *)func_001329B4(*DAT_0012e444);
      iVar4 = (**(code **)(*piVar3 + 0x18))(piVar3,1);
      local_30 = (float *)(iVar4 + 4);
      iVar4 = (**(code **)(*piVar3 + 0x18))(piVar3,0);
      local_2c = (float *)(iVar4 + 4);
      piVar5 = (int *)(**(code **)(*piVar3 + 0x20))(piVar3,1);
      pfVar6 = (float *)func_0057D5C4(piVar5);
      piVar3 = (int *)(**(code **)(*piVar3 + 0x20))(piVar3,0);
      pfVar7 = (float *)func_0057D5C4(piVar3);
      func_00492604((float *)(param_1 + 0x169c),pfVar6,local_30);
      pfVar6 = local_2c;
      func_00492604((float *)(param_1 + 0x16dc),pfVar7,local_2c);
      puVar8 = (undefined4 *)func_002FE9CC(*piVar2,extraout_r1,(uint)pfVar6,in_r3);
      *(undefined4 *)(param_1 + 0x184c) = *puVar8;
      func_006003D8(0x208,(int *)&local_30);
      uVar1 = *(int *)(param_1 + 0x1830) << 2;
      func_0010E3C4((uint *)local_30,*(uint **)(param_1 + 0x182c),uVar1);
      func_00601378(uVar1);
      uVar9 = func_0041F7CC();
      piVar3 = local_34;
      uVar9 = (**(code **)(*(int *)(param_1 + 0x20) + 0x20))(param_1 + 0x20,uVar9,local_34,1);
      func_0041F7DC(uVar9);
      uVar1 = local_144;
      uVar10 = 0;
      if (0 < (int)local_144) {
        do {
          if (uVar10 < local_144) {
            piVar5 = *(int **)(local_13c + uVar10 * 4);
          }
          else {
            piVar5 = (int *)0x0;
          }
          if ((piVar5[6] & 2U) != 0) {
            (**(code **)(*piVar5 + 0x10))(piVar5,param_1 + 0x20,piVar3);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar1);
      }
      uVar9 = func_0041F7CC();
      in_r3 = 1;
      uVar9 = func_00403F18((int *)(param_1 + 0x20),uVar9,(int)piVar3,1);
      func_0041F7DC(uVar9);
      func_002FEA3C(*piVar2,0);
    }
    if (local_38 != (uint *)0x0) {
      func_0012D8DC(param_1);
      puVar8 = (undefined4 *)
               func_002FE9CC(*(int *)(param_1 + 0x1828),extraout_r1_00,(uint)piVar3,in_r3);
      *(undefined4 *)(param_1 + 0x184c) = *puVar8;
      func_006003D8(0x208,(int *)&local_38);
      uVar1 = *(int *)(param_1 + 0x1838) << 2;
      func_0010E3C4(local_38,*(uint **)(param_1 + 0x1834),uVar1);
      func_00601378(uVar1);
      uVar9 = func_0041F7CC();
      piVar2 = local_34;
      uVar9 = (**(code **)(*(int *)(param_1 + 0x20) + 0x20))(param_1 + 0x20,uVar9,local_34,1);
      func_0041F7DC(uVar9);
      uVar1 = local_250;
      uVar10 = 0;
      if (0 < (int)local_250) {
        do {
          if (uVar10 < local_250) {
            piVar3 = *(int **)(local_248 + uVar10 * 4);
          }
          else {
            piVar3 = (int *)0x0;
          }
          if ((piVar3[6] & 2U) != 0) {
            (**(code **)(*piVar3 + 0x10))(piVar3,param_1 + 0x20,piVar2);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar1);
      }
      uVar9 = func_0041F7CC();
      uVar9 = func_00403F18((int *)(param_1 + 0x20),uVar9,(int)piVar2,1);
      func_0041F7DC(uVar9);
      func_002FEA3C(*(int *)(param_1 + 0x1828),0);
    }
  }
  return;
}

