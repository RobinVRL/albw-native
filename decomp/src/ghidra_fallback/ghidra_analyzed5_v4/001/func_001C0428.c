#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_00169678(int param_1,uint param_2,int *param_3);
extern int func_001BFE64(undefined4 *param_1,uint *param_2);
extern int func_001E3FD8(int param_1);
extern int func_001E4090(int param_1,undefined4 param_2);
extern int func_001E40F4(int param_1,int param_2);
extern void func_001E4378(int param_1);
extern int func_001E43F8(int param_1,float fparam_0);
extern int func_002BE9D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_00435ED0(int param_1,float *param_2);
extern int func_0043610C(int param_1,float *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065B668(undefined4 *param_1,undefined1 param_2);
extern int DAT_001c06b8;
extern float DAT_001c06bc;
extern uint DAT_001c06c0;
extern undefined4 DAT_001c06c4;
extern float DAT_001c06dc;
extern int *DAT_001c06e0;
extern undefined DAT_001c06e4;
extern undefined4 DAT_001c0718;
extern char s_Actor_DoorGanon_kcl_001c06c8[];
extern char s_DoorHyrule_LockKey_00_001c0700[];
extern char s_cf_001c06c8[];

// USA 001C0428 <- EU 001C0428 (Ghidra, non-matching)
// GLOBAL DAT_001c06b8 int
// GLOBAL DAT_001c06bc float
// GLOBAL DAT_001c06c0 uint
// GLOBAL DAT_001c06c4 undefined4
// GLOBAL DAT_001c06dc float
// GLOBAL DAT_001c06e0 int *
// GLOBAL DAT_001c06e4 undefined
// GLOBAL DAT_001c0718 undefined4
// GLOBAL s_cf_001c06c8 string
// GLOBAL s_DoorHyrule_LockKey_00_001c0700 string

/* WARNING: Variable defined which should be unmapped: objStack_e0 */

int * func_001C0428(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define objStack_e0 ((uint *)(albw_frame + 0x0))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_d4 (*(uint * *)(albw_frame + 0xc))
  #define local_d0 (*(int *)(albw_frame + 0x10))
  #define local_cc ((uint *)(albw_frame + 0x14))
  #define uStack_8d (*(undefined1 *)(albw_frame + 0x53))
  #define local_8c (*(float *)(albw_frame + 0x54))
  #define local_88 (*(float *)(albw_frame + 0x58))
  #define local_84 (*(float *)(albw_frame + 0x5c))
  #define local_80 (*(float *)(albw_frame + 0x60))
  #define local_7c (*(float *)(albw_frame + 0x64))
  #define local_78 (*(float *)(albw_frame + 0x68))
  #define local_74 (*(float *)(albw_frame + 0x6c))
  #define local_70 (*(float *)(albw_frame + 0x70))
  #define local_6c (*(float *)(albw_frame + 0x74))
  #define local_64 (*(uint *)(albw_frame + 0x7c))
  #define local_60 (*(uint *)(albw_frame + 0x80))
  #define local_5c (*(undefined * *)(albw_frame + 0x84))
  #define afStack_58 ((float *)(albw_frame + 0x88))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0xb4))
  #define local_28 (*(uint * *)(albw_frame + 0xb8))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar3 = (int *)func_001BFE64(param_1,param_2);
  iVar4 = DAT_001c06b8 + 0x5c;
  *piVar3 = DAT_001c06b8;
  piVar3[200] = iVar4;
  bVar2 = func_00588BF0((int)piVar3,0);
  if (bVar2) {
    *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
  }
  else {
    func_001E3FD8((int)piVar3);
    puVar5 = (undefined4 *)func_0010BAB4(0x48);
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = func_004EDC9C(puVar5);
    }
    uVar1 = DAT_001c06c0;
    fparam_0 = DAT_001c06bc;
    piVar7 = piVar3 + 0x121;
    piVar3[0x121] = (int)puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      local_d0 = 0x40;
      uStack_8d = 0;
      (*(undefined1 *)((char *)&local_cc[0] + 0)) = 0;
      objStack_e0[0] = uVar1;
      local_d8 = DAT_001c06c4;
      objStack_e0[1] = (uint)s_Actor_DoorGanon_kcl_001c06c8;
      local_d4 = local_cc;
      (**(code **)(uVar1 + 8))(objStack_e0);
      uVar8 = 0;
      do {
        if (*(char *)(objStack_e0[1] + uVar8) == '\0') {
          if ((int)uVar8 < 0x40001) goto LAB_001c0518;
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x40001);
      uVar8 = 0;
LAB_001c0518:
      if (local_d0 <= (int)uVar8) {
        uVar8 = local_d0 - 1;
      }
      (**(code **)(objStack_e0[0] + 8))(objStack_e0);
      func_0010E3C4(local_cc,(uint *)objStack_e0[1],uVar8);
      *(undefined1 *)((int)local_cc + uVar8) = 0;
      func_004EDB28(piVar3[0x121],(int)&local_d8);
      local_8c = DAT_001c06dc;
      local_7c = DAT_001c06dc;
      local_6c = DAT_001c06dc;
      local_88 = fparam_0;
      local_84 = fparam_0;
      local_80 = fparam_0;
      local_78 = fparam_0;
      local_74 = fparam_0;
      local_70 = fparam_0;
      func_00491624(afStack_58,0,piVar3[0xfa],0);
      func_0011549C(&local_8c,&local_8c,afStack_58);
      func_00435ED0(*(int *)(*piVar7 + 0x14),&local_8c);
      func_0043625C(*(int **)(*piVar7 + 0x14),piVar3 + 0xf4);
      func_0043610C(*(int *)(*piVar7 + 0x14),(float *)(local_28 + 4));
      local_64 = piVar3[0xb3];
      func_004EDAD0(*piVar7,&local_64);
      *(short *)(*piVar7 + 0x2c) = (short)piVar3[0x15];
      func_004ED9C8(*piVar7);
      func_004A879C(*DAT_001c06e0,*piVar7,0);
    }
    puVar6 = (undefined4 *)func_0010BAB4(0x2cc);
    iVar4 = 0;
    if (puVar6 != (undefined4 *)0x0) {
      local_5c = &DAT_001c06e4;
      local_60 = uVar1;
      objStack_e0[0] = 1;
      iVar4 = func_002BE9D4(puVar6,&local_60,0,0,1);
    }
    piVar3[0x131] = iVar4;
    piVar3[0x130] = (int)s_DoorHyrule_LockKey_00_001c0700;
    func_001E40F4((int)piVar3,1);
    func_00169678((int)piVar3,0,DAT_001c0718);
    func_001E4378((int)piVar3);
    func_001E4090((int)piVar3,0);
    func_001E43F8((int)piVar3,fparam_0);
    func_0065B668(piVar3 + 0x126,3);
  }
  return piVar3;
}

