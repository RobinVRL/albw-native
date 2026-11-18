#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001DE378(int param_1,undefined4 *param_2,undefined4 param_3);
extern int func_0028F7B0(int param_1,uint param_2);
extern int func_003425C4(int param_1);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_005373A0(int param_1,float *param_2);
extern int func_00581D48(int param_1,float *param_2);
extern int func_00581D60(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_001dc7cc;
extern int *DAT_001dc7d0;
extern undefined4 *DAT_001dc7d4;
extern int DAT_001dc7d8;
extern uint *DAT_001dc7dc;
extern undefined4 DAT_001dc7e0;
extern undefined4 DAT_001dc7e4;
extern undefined4 DAT_001dc7e8;
extern undefined4 *DAT_001dc7ec;
extern undefined4 DAT_001dc7f0;
extern undefined4 *DAT_001dc7f4;
extern undefined4 DAT_001dc7f8;
extern float DAT_001dc7fc;
extern int *DAT_001dc800;

// USA 001DC4C8 <- EU 001DC4C8 (Ghidra, non-matching)
// GLOBAL DAT_001dc7cc int *
// GLOBAL DAT_001dc7d0 int *
// GLOBAL DAT_001dc7d4 undefined4 *
// GLOBAL DAT_001dc7d8 int
// GLOBAL DAT_001dc7dc uint *
// GLOBAL DAT_001dc7e0 undefined4
// GLOBAL DAT_001dc7e4 undefined4
// GLOBAL DAT_001dc7e8 undefined4
// GLOBAL DAT_001dc7ec undefined4 *
// GLOBAL DAT_001dc7f0 undefined4
// GLOBAL DAT_001dc7f4 undefined4 *
// GLOBAL DAT_001dc7f8 undefined4
// GLOBAL DAT_001dc7fc float
// GLOBAL DAT_001dc800 int *

undefined4 func_001DC4C8(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  float *pfVar8;
  float *in_r3;
  undefined4 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_8c (*(undefined4 * *)(albw_frame + 0x14))
  #define local_88 (*(int *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 (*(float *)(albw_frame + 0x20))
  #define local_7c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_78 (*(int *)(albw_frame + 0x28))
  #define local_74 (*(undefined4 * *)(albw_frame + 0x2c))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define local_6c (*(undefined4 *)(albw_frame + 0x34))
  #define pfStack_68 (*(float * *)(albw_frame + 0x38))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x40))
  #define local_5c (*(float * *)(albw_frame + 0x44))
  #define local_58 (*(float * *)(albw_frame + 0x48))
  #define local_54 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_50 (*(undefined1 *)(albw_frame + 0x50))
  #define local_4f (*(undefined1 *)(albw_frame + 0x51))
  #define local_48 (*(undefined4 *)(albw_frame + 0x58))
  #define local_44 (*(int *)(albw_frame + 0x5c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x64))
  #define local_38 (*(float *)(albw_frame + 0x68))
  #define fStack_34 (*(float *)(albw_frame + 0x6c))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0x70))
  local_88 = func_00581D60(*DAT_001dc7cc);
  puVar2 = DAT_001dc7d4;
  piVar1 = DAT_001dc7d0;
  iVar5 = *(int *)(param_1 + 0x604);
  local_8c = *(undefined4 **)(iVar5 + 0x70);
  local_94 = *(float *)(iVar5 + 0x68);
  local_90 = *(float *)(iVar5 + 0x6c);
  uVar10 = 0;
  puVar6 = (undefined4 *)
           func_005841A8(*DAT_001dc7d0,*DAT_001dc7d4,*(int **)(DAT_001dc7d8 + *DAT_001dc7d0));
  uVar4 = DAT_001dc7e8;
  puVar3 = DAT_001dc7dc;
  if (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar6) {
    uVar11 = CONCAT44(DAT_001dc7e4,DAT_001dc7e0);
    do {
      puVar9 = (undefined4 *)*puVar6;
      if (((*puVar3 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_001dc7dc), iVar5 != 0)) {
        *DAT_001dc7ec = uVar4;
      }
      if ((puVar9 == (undefined4 *)0x0) ||
         (iVar5 = (**(code **)*puVar9)(puVar9,DAT_001dc7ec), iVar5 == 0)) {
        puVar9 = (undefined4 *)0x0;
      }
      if (puVar9 != (undefined4 *)0x0) {
        local_7c = (undefined4 *)uVar11;
        local_78 = (int)((ulonglong)uVar11 >> 0x20);
        local_74 = local_7c;
        func_00115C54(&local_70,&local_94,(float *)&local_7c);
        in_r3 = &local_64;
        local_64 = local_70;
        local_60 = local_6c;
        local_5c = pfStack_68;
        uVar7 = func_005373A0((int)puVar9,&local_64);
        uVar10 = uVar10 | uVar7;
      }
      puVar6 = (undefined4 *)func_005841A8(*piVar1,*puVar2,puVar6 + 1);
      puVar9 = DAT_001dc7f4;
    } while (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar6);
    if (uVar10 != 0) {
      *(undefined4 *)(param_1 + 0x720) = DAT_001dc7f0;
      local_48 = DAT_001dc7f8;
      local_40 = *puVar9;
      uStack_3c = puVar9[1];
      local_84 = local_94;
      local_7c = local_8c;
      local_38 = local_94;
      fStack_34 = local_90;
      puStack_30 = local_8c;
      local_80 = local_90 + DAT_001dc7fc;
      pfStack_68 = (float *)((uint)in_r3 & 0xffff0000 | 0xffff);
      local_78 = 0;
      local_70 = 0.0;
      local_6c = 0;
      local_60 = 0;
      local_54 = (undefined4)uVar11;
      local_50 = 0;
      local_58 = &local_84;
      local_5c = &local_38;
      local_74 = &local_48;
      local_4f = 1;
      local_64 = ALBW_NAN_NEG;
      local_44 = param_1;
      iVar5 = func_004A8030(*DAT_001dc800,&local_78,2);
      if (iVar5 != 0) {
        local_90 = *(float *)(param_1 + 0x720);
        if ((*(char *)(param_1 + 0x598) == '\0') &&
           (iVar5 = func_00581D48(*DAT_001dc7cc,&local_94), iVar5 != local_88)) {
          func_0028F7B0(*(int *)(param_1 + 0x614),0x29);
        }
        return func_001DE378(param_1,&local_94,param_2);
      }
    }
  }
  pfVar8 = (float *)func_003425C4(*(int *)(param_1 + 0x604));
  if (*(char *)(pfVar8 + 9) != '\0') {
    func_0028F7B0(*(int *)(param_1 + 0x614),0x3f);
  }
  if ((*(char *)(param_1 + 0x598) == '\0') &&
     (iVar5 = func_00581D48(*DAT_001dc7cc,pfVar8), iVar5 != local_88)) {
    func_0028F7B0(*(int *)(param_1 + 0x614),0x29);
  }
  return func_001DE378(param_1,pfVar8,param_2);
}

