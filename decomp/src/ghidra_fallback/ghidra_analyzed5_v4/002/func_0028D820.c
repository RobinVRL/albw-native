#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010DBBC(int param_1,int *param_2,int param_3,float fparam_0);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_001692F8(int param_1,uint *param_2);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0028E064(uint param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float DAT_0028db70;
extern undefined4 DAT_0028db74;
extern float DAT_0028db78;
extern int DAT_0028db7c;
extern uint *DAT_0028db80;
extern int DAT_0028db84;
extern int *DAT_0028db88;
extern undefined4 DAT_0028db8c;
extern undefined4 DAT_0028db90;
extern int DAT_0028db94;
extern undefined4 DAT_0028db98;
extern undefined4 DAT_0028db9c;
extern undefined1 DAT_0028dba0;
extern float DAT_0028dd88;

// USA 0028D820 <- EU 0028D848 (Ghidra, non-matching)
// GLOBAL DAT_0028db70 float
// GLOBAL DAT_0028db74 undefined4
// GLOBAL DAT_0028db78 float
// GLOBAL DAT_0028db7c int
// GLOBAL DAT_0028db80 uint *
// GLOBAL DAT_0028db84 int
// GLOBAL DAT_0028db88 int *
// GLOBAL DAT_0028db8c undefined4
// GLOBAL DAT_0028db90 undefined4
// GLOBAL DAT_0028db94 int
// GLOBAL DAT_0028db98 undefined4
// GLOBAL DAT_0028db9c undefined4
// GLOBAL DAT_0028dba0 undefined1
// GLOBAL DAT_0028dd88 float

void func_0028D820(int param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar6;
  int iVar7;
  uint unaff_r6;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define local_108 ((uint *)(albw_frame + 0x8))
  #define local_100 (*(int * *)(albw_frame + 0x10))
  #define local_fc (*(int *)(albw_frame + 0x14))
  #define local_f8 (*(float *)(albw_frame + 0x18))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_f0 (*(float *)(albw_frame + 0x20))
  #define local_ec (*(undefined4 *)(albw_frame + 0x24))
  #define local_e8 (*(uint *)(albw_frame + 0x28))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_b0 (*(undefined1 *)(albw_frame + 0x60))
  #define local_ac ((uint *)(albw_frame + 0x64))
  #define local_a4 (*(undefined4 * *)(albw_frame + 0x6c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x70))
  #define local_9c (*(float *)(albw_frame + 0x74))
  #define local_98 (*(undefined4 *)(albw_frame + 0x78))
  #define local_94 (*(float *)(albw_frame + 0x7c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x80))
  #define local_8c (*(uint *)(albw_frame + 0x84))
  #define local_58 (*(undefined4 *)(albw_frame + 0xb8))
  #define local_54 (*(undefined1 *)(albw_frame + 0xbc))
  #define local_50 (*(int *)(albw_frame + 0xc0))
  #define local_48 (*(int *)(albw_frame + 0xc8))
  #define local_44 (*(uint * *)(albw_frame + 0xcc))
  #define local_40 (*(int *)(albw_frame + 0xd0))
  #define local_3c (*(int *)(albw_frame + 0xd4))
  #define aiStack_38 ((int *)(albw_frame + 0xd8))
  #define iStack_30 (*(int *)(albw_frame + 0xe0))
  #define local_2c (*(int *)(albw_frame + 0xe4))
  #define iStack_28 (*(int *)(albw_frame + 0xe8))
  piVar10 = aiStack_38;
  fVar11 = DAT_0028db70;
  local_50 = param_3;
  iStack_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  if ((*(char *)(param_1 + 5) == '\0') &&
     ((iVar5 = param_2, *(short *)(param_1 + 0x14) == -2 ||
      (iVar5 = (int)*(short *)(param_1 + 0x16), *(short *)(param_1 + 0x14) == iVar5)))) {
    bVar1 = false;
  }
  else {
    if (*(short *)(param_1 + 0x14) == -1) {
      param_4 = *(int **)(param_1 + 0x10);
      local_ac[1] = 3;
      local_a4 = &local_a0;
      iVar7 = 1;
      local_a0 = 0xffffffff;
      local_58 = 10;
      local_54 = 0;
      local_ac[0] = 1;
      local_9c = DAT_0028db70;
      local_98 = DAT_0028db74;
      local_94 = DAT_0028db78;
      local_8c = unaff_r6 | 0xff;
      local_90 = DAT_0028db74;
      func_001692F8((int)param_4,local_ac);
      iVar5 = extraout_r1_00;
    }
    else {
      local_100 = &local_fc;
      local_108[1] = 3;
      local_b0 = 0;
      local_b4 = *(undefined4 *)(param_1 + 8);
      local_fc = (int)*(short *)(param_1 + 0x14);
      iVar7 = (int)*(char *)(param_1 + 6);
      iVar5 = DAT_0028db7c + local_fc * 0x18;
      local_f4 = *(undefined4 *)(iVar5 + 0xc);
      local_f8 = DAT_0028db70;
      if (DAT_0028db70 <= *(float *)(iVar5 + 0x10)) {
        local_f8 = *(float *)(iVar5 + 0x10);
      }
      local_e8 = (uint)*(byte *)(iVar5 + 8) | (uint)param_4 & 0xffffff00;
      param_4 = (int *)0x1;
      local_108[0] = 1;
      local_f0 = DAT_0028db78;
      if (DAT_0028db70 <= *(float *)(iVar5 + 0x14)) {
        local_f0 = *(float *)(iVar5 + 0x14);
      }
      local_ec = DAT_0028db74;
      if (iVar7 == 0) {
        local_b4 = 0;
      }
      func_001692F8(*(int *)(param_1 + 0x10),local_108);
      iVar3 = DAT_0028db84;
      iVar5 = extraout_r1;
      if (*(int *)(param_1 + 0x1c) != 0) {
        iVar5 = DAT_0028db84;
        if (((*DAT_0028db80 & 1) == 0) &&
           (iVar7 = func_00100174((int *)DAT_0028db80), piVar2 = DAT_0028db88, iVar7 != 0)) {
          DAT_0028db88[1] = (int)(DAT_0028db88 + 3);
          piVar2[2] = 0x40;
          *(undefined1 *)(piVar2[1] + 0x3f) = 0;
          *(undefined1 *)piVar2[1] = 0;
          *piVar2 = DAT_0028db94;
        }
        piVar2 = DAT_0028db88;
        if (*(char *)(param_1 + 4) == '\0') {
          local_44 = (uint *)&DAT_0028dba0;
          local_48 = iVar3;
          puVar9 = (uint *)DAT_0028db88[1];
          (**(code **)(iVar3 + 8))(&local_48);
          uVar6 = 0;
          do {
            if (*(char *)((int)local_44 + uVar6) == '\0') {
              if ((int)uVar6 < 0x40001) goto LAB_0028daf4;
              break;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < 0x40001);
          uVar6 = 0;
LAB_0028daf4:
          if (piVar2[2] <= (int)uVar6) {
            uVar6 = piVar2[2] - 1;
          }
          (**(code **)(local_48 + 8))(&local_48);
          func_0010E3C4(puVar9,local_44,uVar6);
          *(undefined1 *)((int)puVar9 + uVar6) = 0;
          piVar2 = DAT_0028db88;
          piVar4 = (int *)func_0028E064((int)*(short *)(param_1 + 0x14));
          iVar3 = piVar2[1];
          (**(code **)(*piVar2 + 8))(piVar2);
          iVar7 = 0;
          do {
            if (*(char *)(piVar2[1] + iVar7) == '\0') {
              if (iVar7 < 0x40001) goto LAB_0028dbb4;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 0x40001);
          iVar7 = 0;
LAB_0028dbb4:
          iVar8 = iVar7;
          if (iVar7 < 0) {
            iVar8 = 0;
          }
          (**(code **)(*piVar4 + 8))(piVar4);
          uVar6 = 0;
          do {
            if (*(char *)(piVar4[1] + uVar6) == '\0') {
              if ((int)uVar6 < 0x40001) goto LAB_0028dc04;
              break;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < 0x40001);
          uVar6 = 0;
LAB_0028dc04:
          if (piVar2[2] - iVar8 <= (int)uVar6) {
            uVar6 = (piVar2[2] - iVar8) - 1;
          }
          if (0 < (int)uVar6) {
            (**(code **)(*piVar4 + 8))(piVar4);
            func_0010E3C4((uint *)(iVar3 + iVar8),(uint *)piVar4[1],uVar6);
            if (iVar7 < (int)(iVar8 + uVar6)) {
              *(undefined1 *)(iVar3 + iVar8 + uVar6) = 0;
            }
          }
          piVar2 = DAT_0028db88;
          (**(code **)(*DAT_0028db88 + 8))(DAT_0028db88);
          local_3c = piVar2[1];
          iVar3 = *(int *)(param_1 + 0x1c);
          iVar7 = 1;
          local_40 = iVar5;
        }
        else {
          piVar10 = &local_40;
          piVar2 = (int *)func_0028E064((int)*(short *)(param_1 + 0x14));
          (**(code **)(*piVar2 + 8))(piVar2);
          local_44 = (uint *)piVar2[1];
          local_48 = iVar3;
          iVar3 = *(int *)(param_1 + 0x1c);
          iVar7 = 0;
        }
        func_0010DBBC(iVar3,piVar10 + -2,iVar7,0.0);
        iVar5 = extraout_r1_01;
      }
    }
    bVar1 = true;
    *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_1 + 0x14);
    param_3 = iVar7;
  }
  if (local_50 == 0) {
    func_00169A80(*(int **)(param_1 + 0x10),iVar5,param_3,param_4);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_00352210(*(int *)(param_1 + 0x1c),(uint)(*(char *)(param_1 + 4) == '\0'),
                  *(float *)(*(int *)(*(int *)(param_1 + 0x10) + 0x14) + 8));
  }
  iVar5 = *(int *)(param_1 + 0x10);
  fVar12 = *(float *)(*(int *)(iVar5 + 0x14) + 0x10);
  if (*(float *)(local_2c + 4) == fVar11) {
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar6;
      if ((uVar6 & 1) == 0) {
        *(float *)(*(int *)(iVar5 + 0x14) + 0x10) = fVar12 * DAT_0028dd88;
      }
      else {
        *(float *)(*(int *)(iVar5 + 0x14) + 0x10) = fVar11;
      }
    }
  }
  *(undefined2 *)(param_1 + 0x14) = 0xfffe;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  func_00168E9C(*(int **)(param_1 + 0x10),*(int *)(param_1 + 0xc),(int *)0x0);
  *(float *)(*(int *)(*(int *)(param_1 + 0x10) + 0x14) + 0x10) = fVar12;
  return;
}

