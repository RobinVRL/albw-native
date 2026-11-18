#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00151150(int param_1,float *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_004918CC(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_002841c4;
extern float DAT_002841c8;
extern float *DAT_002841cc;
extern uint *DAT_002841d0;
extern float *DAT_002841d4;
extern float *DAT_002841d8;
extern float *DAT_00284478;
extern float *DAT_0028447c;
extern float DAT_00284480;
extern float DAT_00284484;

// USA 00283DD8 <- EU 00283E00 (Ghidra, non-matching)
// GLOBAL DAT_002841c4 float
// GLOBAL DAT_002841c8 float
// GLOBAL DAT_002841cc float *
// GLOBAL DAT_002841d0 uint *
// GLOBAL DAT_002841d4 float *
// GLOBAL DAT_002841d8 float *
// GLOBAL DAT_00284478 float *
// GLOBAL DAT_0028447c float *
// GLOBAL DAT_00284480 float
// GLOBAL DAT_00284484 float

undefined4 func_00283DD8(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_e0 (*(float *)(albw_frame + 0x0))
  #define local_dc (*(float *)(albw_frame + 0x4))
  #define local_d8 (*(float *)(albw_frame + 0x8))
  #define local_d4 (*(float *)(albw_frame + 0xc))
  #define local_d0 (*(float *)(albw_frame + 0x10))
  #define local_cc (*(float *)(albw_frame + 0x14))
  #define local_c8 (*(float *)(albw_frame + 0x18))
  #define local_c4 (*(float *)(albw_frame + 0x1c))
  #define local_c0 (*(float *)(albw_frame + 0x20))
  #define local_bc (*(float *)(albw_frame + 0x24))
  #define local_b8 (*(float *)(albw_frame + 0x28))
  #define local_b4 (*(float *)(albw_frame + 0x2c))
  #define local_b0 (*(float *)(albw_frame + 0x30))
  #define local_ac (*(float *)(albw_frame + 0x34))
  #define local_a8 (*(float *)(albw_frame + 0x38))
  #define local_a4 (*(float *)(albw_frame + 0x3c))
  #define local_a0 (*(float *)(albw_frame + 0x40))
  #define local_9c (*(float *)(albw_frame + 0x44))
  #define local_98 (*(float *)(albw_frame + 0x48))
  #define local_94 (*(float *)(albw_frame + 0x4c))
  #define local_90 (*(float *)(albw_frame + 0x50))
  #define local_8c (*(float *)(albw_frame + 0x54))
  #define local_88 (*(float *)(albw_frame + 0x58))
  #define local_84 (*(float *)(albw_frame + 0x5c))
  #define local_80 (*(float *)(albw_frame + 0x60))
  #define local_7c (*(undefined4 *)(albw_frame + 0x64))
  #define local_78 (*(undefined4 *)(albw_frame + 0x68))
  #define auStack_70 ((undefined4 *)(albw_frame + 0x70))
  #define local_64 (*(float *)(albw_frame + 0x7c))
  #define local_54 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_44 (*(undefined4 *)(albw_frame + 0x9c))
  #define afStack_40 ((float *)(albw_frame + 0xa0))
  #define local_2c (*(float *)(albw_frame + 0xb4))
  #define local_28 (*(undefined4 *)(albw_frame + 0xb8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xbc))
  if (*(short *)(param_1 + 0x2e) != 0) {
    return 0;
  }
  piVar4 = (int *)(param_1 + 0x7a4);
  if (*(char *)(param_1 + 0x9f1) == '\x01') {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x7a0) + 0x24) + 0x14) +
            *(int *)(param_1 + 0x9dc) * 0x30;
    local_a8 = *(float *)(iVar1 + 0xc);
    local_a4 = *(float *)(iVar1 + 0x1c);
    local_a0 = *(float *)(iVar1 + 0x2c);
    fVar8 = DAT_002841c4;
    if (*(uint *)(param_1 + 0x828) == 0) {
      func_004D8AEC(&local_e0,*(uint *)(param_1 + 1000),&local_a8);
    }
    else {
      func_004D7EB0(&local_e0,*(uint *)(param_1 + 0x828),*(uint *)(param_1 + 1000),&local_a8);
    }
    iVar1 = *(int *)(param_1 + 0x7a4);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    pfVar2 = DAT_002841d8;
    *(float *)(iVar1 + 0x80) = local_e0;
    *(float *)(iVar1 + 0x84) = local_dc;
    *(float *)(iVar1 + 0x88) = local_d8;
    fVar5 = *pfVar2;
    *(float *)(iVar1 + 0x8c) =
         local_dc * pfVar2[1] + local_d8 * pfVar2[2] + local_d4 + local_e0 * fVar5;
    *(float *)(iVar1 + 0x90) = local_d0;
    *(float *)(iVar1 + 0x94) = local_cc;
    *(float *)(iVar1 + 0x98) = local_c8;
    *(float *)(iVar1 + 0x9c) =
         local_cc * pfVar2[1] + local_c8 * pfVar2[2] + local_c4 + local_d0 * fVar5;
    *(float *)(iVar1 + 0xa0) = local_c0;
    *(float *)(iVar1 + 0xa4) = local_bc;
    *(float *)(iVar1 + 0xa8) = local_b8;
    *(float *)(iVar1 + 0xac) =
         local_bc * pfVar2[1] + local_b8 * pfVar2[2] + local_b4 + local_c0 * fVar5;
    iVar1 = *piVar4;
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_004918CC((float *)(iVar1 + 0x80),fVar8,fVar8,fVar8);
    func_004CEAF0(*piVar4);
    if (*(int *)(param_1 + 0x98c) != 0) {
      func_001512B4(*(int *)(param_1 + 0x98c),&local_a8);
      func_00151150(*(int *)(param_1 + 0x98c),DAT_00284478);
    }
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x7a0) + 0x24) + 0x14) +
            *(int *)(param_1 + 0x9e0) * 0x30;
    local_a8 = *(float *)(iVar1 + 0xc);
    local_a4 = *(float *)(iVar1 + 0x1c);
    local_a0 = *(float *)(iVar1 + 0x2c);
    if (*(uint *)(param_1 + 0x828) == 0) {
      func_004D8AEC(&local_e0,*(uint *)(param_1 + 1000),&local_a8);
    }
    else {
      func_004D7EB0(&local_e0,*(uint *)(param_1 + 0x828),*(uint *)(param_1 + 1000),&local_a8);
    }
    iVar1 = *(int *)(param_1 + 0x7a8);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(float *)(iVar1 + 0x80) = local_e0;
    *(float *)(iVar1 + 0x84) = local_dc;
    pfVar2 = DAT_0028447c;
    *(float *)(iVar1 + 0x88) = local_d8;
    fVar5 = *pfVar2;
    *(float *)(iVar1 + 0x8c) =
         local_dc * pfVar2[1] + local_d8 * pfVar2[2] + local_d4 + local_e0 * fVar5;
    *(float *)(iVar1 + 0x90) = local_d0;
    *(float *)(iVar1 + 0x94) = local_cc;
    *(float *)(iVar1 + 0x98) = local_c8;
    *(float *)(iVar1 + 0x9c) =
         local_cc * pfVar2[1] + local_c8 * pfVar2[2] + local_c4 + local_d0 * fVar5;
    *(float *)(iVar1 + 0xa0) = local_c0;
    *(float *)(iVar1 + 0xa4) = local_bc;
    *(float *)(iVar1 + 0xa8) = local_b8;
    *(float *)(iVar1 + 0xac) =
         local_bc * pfVar2[1] + local_b8 * pfVar2[2] + local_b4 + local_c0 * fVar5;
    iVar1 = *(int *)(param_1 + 0x7a8);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_004918CC((float *)(iVar1 + 0x80),fVar8,fVar8,fVar8);
    func_004CEAF0(*(int *)(param_1 + 0x7a8));
    if (*(int *)(param_1 + 0x990) == 0) {
      return 0;
    }
    func_001512B4(*(int *)(param_1 + 0x990),&local_a8);
    iVar1 = *(int *)(param_1 + 0x990);
    pfVar2 = DAT_00284478;
  }
  else {
    if (*(char *)(*(int *)(param_1 + 0x7a4) + 0x30) != '\x01') {
      return 0;
    }
    fVar8 = DAT_002841c4;
    if (*(char *)(param_1 + 0x9ef) == '\x01') {
      pfVar2 = (float *)(param_1 + 0x994);
      func_00115C54(pfVar2,pfVar2,(float *)(param_1 + 0x9a0));
      *(float *)(param_1 + 0x9a4) = *(float *)(param_1 + 0x9a4) - DAT_00284480;
      fVar5 = DAT_00284484;
      if (DAT_00284484 <= *(float *)(param_1 + 0x998)) {
        fVar5 = *(float *)(param_1 + 0x998);
      }
      *(float *)(param_1 + 0x998) = fVar5;
      iVar1 = *(int *)(param_1 + 0x828);
      iVar3 = *(int *)(param_1 + 0x7a4);
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      if (iVar1 == 0) {
        func_004D8AEC((float *)(iVar3 + 0x80),*(uint *)(param_1 + 1000),pfVar2);
      }
      else {
        func_004D7EB0((float *)(iVar3 + 0x80),*(uint *)(param_1 + 0x828),*(uint *)(param_1 + 1000),
                      pfVar2);
      }
    }
    else {
      func_001119F4(auStack_70,
                    (undefined4 *)
                    (*(int *)(*(int *)(*(int *)(param_1 + 0x7a0) + 0x24) + 0x14) +
                    *(int *)(param_1 + 0x9dc) * 0x30));
      local_2c = local_64;
      local_28 = local_54;
      local_24 = local_44;
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x7a0) + 0x24) + 0x14) +
              *(int *)(param_1 + 0x9e0) * 0x30;
      local_80 = *(float *)(iVar1 + 0xc);
      local_7c = *(undefined4 *)(iVar1 + 0x1c);
      local_78 = *(undefined4 *)(iVar1 + 0x2c);
      func_00115C54(afStack_40,&local_2c,&local_80);
      func_00115D70(afStack_40,afStack_40,DAT_002841c8);
      if (*(uint *)(param_1 + 0x828) == 0) {
        func_004D8AEC(&local_b0,*(uint *)(param_1 + 1000),afStack_40);
      }
      else {
        func_004D7EB0(&local_b0,*(uint *)(param_1 + 0x828),*(uint *)(param_1 + 1000),afStack_40);
      }
      local_e0 = local_b0;
      local_dc = local_ac;
      local_d8 = local_a8;
      fVar5 = DAT_002841cc[1];
      fVar7 = DAT_002841cc[2];
      fVar6 = *DAT_002841cc;
      local_d4 = local_ac * fVar5 + local_a8 * fVar7 + local_a4 + local_b0 * fVar6;
      local_d0 = local_a0;
      local_cc = local_9c;
      local_c8 = local_98;
      local_c4 = local_9c * fVar5 + local_98 * fVar7 + local_94 + local_a0 * fVar6;
      local_c0 = local_90;
      local_bc = local_8c;
      local_b8 = local_88;
      local_b4 = local_8c * fVar5 + local_88 * fVar7 + local_84 + local_90 * fVar6;
      func_00491E80(&local_b0,*DAT_002841d0,DAT_002841d0[1],DAT_002841d0[2]);
      iVar1 = *(int *)(param_1 + 0x7a4);
      *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
      func_001157FC((float *)(iVar1 + 0x80),&local_e0,&local_b0);
    }
    iVar1 = *(int *)(param_1 + 0x7a4);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_004918CC((float *)(iVar1 + 0x80),fVar8,fVar8,fVar8);
    func_004CEAF0(*piVar4);
    if (*(int *)(param_1 + 0x98c) == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x7a4);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    local_e0 = *(float *)(iVar1 + 0x8c);
    local_dc = *(float *)(iVar1 + 0x9c);
    local_d8 = *(float *)(iVar1 + 0xac);
    func_001512B4(*(int *)(param_1 + 0x98c),&local_e0);
    iVar1 = *(int *)(param_1 + 0x98c);
    pfVar2 = DAT_002841d4;
  }
  return func_00151150(iVar1,pfVar2);
}

