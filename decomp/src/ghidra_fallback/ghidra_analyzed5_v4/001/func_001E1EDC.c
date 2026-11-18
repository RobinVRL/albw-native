#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010C0B8(int param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0010EEE0(int param_1);
extern int func_001E1064(int param_1,undefined4 param_2,uint param_3);
extern int func_00489CE0(int *param_1,int param_2,undefined4 param_3);
extern int func_0048BA30(int param_1,int *param_2);
extern int func_004929B8(undefined4 *param_1);
extern int func_00689650(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_001e235c;
extern undefined4 DAT_001e2368;
extern undefined4 DAT_001e236c;
extern undefined4 DAT_001e2370;
extern undefined4 DAT_001e2374;
extern undefined4 DAT_001e2378;
extern undefined4 *DAT_001e237c;
extern int *DAT_001e2380;
extern uint *DAT_001e2384;
extern undefined4 *DAT_001e2388;
extern undefined4 DAT_001e238c;
extern char s__s__s_001e2360[];
extern char s_cf_001e2360[];

// USA 001E1EDC <- EU 001E1EDC (Ghidra, non-matching)
// GLOBAL DAT_001e235c int
// GLOBAL DAT_001e2368 undefined4
// GLOBAL DAT_001e236c undefined4
// GLOBAL DAT_001e2370 undefined4
// GLOBAL DAT_001e2374 undefined4
// GLOBAL DAT_001e2378 undefined4
// GLOBAL DAT_001e237c undefined4 *
// GLOBAL DAT_001e2380 int *
// GLOBAL DAT_001e2384 uint *
// GLOBAL DAT_001e2388 undefined4 *
// GLOBAL DAT_001e238c undefined4
// GLOBAL s_cf_001e2360 string

undefined4 * func_001E1EDC(int param_1,int *param_2)

{
  _Alignas(8) unsigned char albw_frame[0x210]; /* entry_sp - 0x1d0 .. entry_sp + 0x40 */
#define stack0x00000000 (*(undefined4 *)(albw_frame + 0x1d0))
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  #define local_1c4 (*(char *)(albw_frame + 0xc))
  #define local_1c0 (*(int *)(albw_frame + 0x10))
  #define local_1bc (*(int *)(albw_frame + 0x14))
  #define local_1b8 (*(int *)(albw_frame + 0x18))
  #define local_1b4 (*(int *)(albw_frame + 0x1c))
  #define local_1b0 (*(int *)(albw_frame + 0x20))
  #define local_1ac (*(int *)(albw_frame + 0x24))
  #define local_1a8 (*(int *)(albw_frame + 0x28))
  #define local_1a4 (*(int *)(albw_frame + 0x2c))
  #define local_1a0 (*(undefined4 * *)(albw_frame + 0x30))
  #define local_19c (*(int * *)(albw_frame + 0x34))
  #define local_198 (*(int *)(albw_frame + 0x38))
  #define local_194 (*(int *)(albw_frame + 0x3c))
  #define local_190 (*(int *)(albw_frame + 0x40))
  #define local_18c (*(char *)(albw_frame + 0x44))
  #define local_18b (*(undefined1 *)(albw_frame + 0x45))
  #define local_18a (*(undefined1 *)(albw_frame + 0x46))
  #define local_189 (*(char *)(albw_frame + 0x47))
  #define local_188 (*(char *)(albw_frame + 0x48))
  #define auStack_184 ((undefined4 *)(albw_frame + 0x4c))
  #define local_174 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_170 (*(undefined4 *)(albw_frame + 0x60))
  #define local_16c (*(undefined4 * *)(albw_frame + 0x64))
  #define uStack_168 (*(undefined4 *)(albw_frame + 0x68))
  #define auStack_138 ((undefined4 *)(albw_frame + 0x98))
  #define local_2c ((char *)(albw_frame + 0x1a4))
  puVar12 = (undefined4 *)(param_1 + 0x1fa4);
  local_1c0 = DAT_001e235c;
  local_1bc = param_2[1];
  local_1b8 = param_2[2];
  local_1b4 = param_2[3];
  local_1b0 = param_2[4];
  local_1ac = param_2[5];
  local_1a8 = param_2[6];
  local_1a4 = param_2[7];
  local_1a0 = (undefined4 *)param_2[8];
  local_19c = (int *)param_2[9];
  local_198 = param_2[10];
  local_194 = DAT_001e235c;
  local_190 = param_2[0xc];
  local_18c = (char)param_2[0xd];
  local_18b = *(undefined1 *)((int)param_2 + 0x35);
  local_18a = *(undefined1 *)((int)param_2 + 0x36);
  local_189 = *(char *)((int)param_2 + 0x37);
  local_188 = (char)param_2[0xe];
  if ((local_189 != '\0' || local_188 != '\0') ||
     (puVar3 = (undefined4 *)func_001E1064(param_1,&local_1c0,(int)(char)*puVar12),
     puVar3 == (undefined4 *)0x0)) {
    (**(code **)(*param_2 + 8))(param_2);
    iVar8 = param_2[1];
    (**(code **)(param_2[0xb] + 8))(param_2 + 0xb);
    puVar3 = func_00689650(auStack_138,s__s__s_001e2360,param_2[0xc],iVar8);
    local_1bc = puVar3[1];
    piVar9 = (int *)(param_1 + 0x1fd0);
    local_1c4 = *(char *)((int)param_2 + 0x35);
    iVar8 = (int)local_1c4;
    if (local_19c == (int *)0x0) {
      if (iVar8 < 0) {
        local_19c = (int *)*piVar9;
      }
      else {
        do {
          if (*(int *)(param_1 + 0x1fd4 + iVar8 * 4) != 0) {
            piVar4 = (int *)(*(int *)(param_1 + iVar8 * 4 + 0x1fd4) + 0xe4);
            local_2c[0] = '\0';
            iVar10 = func_00489CE0(piVar4,(int)local_2c,&local_1c0);
            cVar2 = '\0';
            if (iVar10 != 0) {
              cVar2 = local_2c[0];
            }
            if (iVar10 != 0 && cVar2 != '\0') {
              if (&stack0x00000000 != (undefined1 *)0x1c4) {
                local_1c4 = (char)iVar8;
              }
              goto LAB_001e20d0;
            }
          }
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
        piVar4 = (int *)0x0;
LAB_001e20d0:
        local_19c = piVar4;
        if (piVar4 == (int *)0x0) {
          local_19c = (int *)*piVar9;
          local_1c4 = -1;
        }
      }
    }
    else {
      iVar8 = 0;
      do {
        if ((*(int *)(param_1 + iVar8 * 4 + 0x1fd4) != 0) &&
           (local_19c == (int *)(*(int *)(param_1 + 0x1fd4 + iVar8 * 4) + 0xe4))) {
          local_1c4 = (char)iVar8;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 7);
    }
    bVar1 = true;
    uVar6 = (uint)local_18c;
    if (local_19c == (int *)*piVar9) {
      local_1c4 = -1;
    }
    if ((int)uVar6 < 7) {
      piVar4 = (int *)(param_1 + 0x10);
      if (uVar6 < 7) {
        piVar4 = piVar4 + uVar6 * 0xca;
      }
      local_1b4 = *piVar4;
      piVar4 = (int *)(param_1 + 0x10);
      if (uVar6 < 7) {
        piVar4 = piVar4 + uVar6 * 0xca;
      }
      local_1b8 = *piVar4;
    }
    else {
      uVar6 = 7;
      if (local_1b4 == 0) {
        local_1b4 = *(int *)(param_1 + 0x1fa8);
        uVar6 = (uint)(char)*puVar12;
      }
      if (local_1b8 == 0) {
        local_1b8 = *(int *)(param_1 + 0x1fa8);
        uVar6 = (uint)(char)*puVar12;
      }
    }
    if ((local_19c != (int *)*piVar9) && (local_189 == '\0')) {
      bVar1 = false;
      local_1b4 = 0;
      local_1a8 = 0;
    }
    local_16c = auStack_184;
    local_174 = 0;
    local_170 = 0;
    uStack_168 = 0;
    puVar12 = func_0010CE7C(local_16c);
    *puVar12 = DAT_001e2368;
    puVar12[9] = puVar12 + 0xb;
    puVar12[10] = 0x20;
    *(undefined1 *)(puVar12[9] + 0x1f) = 0;
    *(undefined1 *)puVar12[9] = 0;
    puVar12[8] = DAT_001e2374;
    *puVar12 = DAT_001e2378;
    if (local_1a0 == (undefined4 *)0x0) {
      local_1a0 = auStack_184;
    }
    iVar8 = 0;
    if (bVar1) {
      func_0010C0B8(param_1 + 0x1fb4);
      iVar8 = param_1 + 0x1fb4;
    }
    puVar12 = DAT_001e237c;
    if (local_1b8 == 0) {
      iVar10 = 1;
    }
    else {
      iVar10 = func_0010983C(*DAT_001e237c,local_1b8);
    }
    puVar3 = (undefined4 *)func_0048BA30(*DAT_001e2380,&local_1c0);
    if (((*DAT_001e2384 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_001e2384), iVar5 != 0)) {
      *DAT_001e2388 = DAT_001e238c;
    }
    if ((puVar3 == (undefined4 *)0x0) ||
       (iVar5 = (**(code **)*puVar3)(puVar3,DAT_001e2388), iVar5 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    if (iVar10 != 1) {
      func_0010983C(*puVar12,iVar10);
    }
    if (iVar8 != 0) {
      func_0010EEE0(iVar8);
    }
    if (puVar3 != (undefined4 *)0x0) {
      puVar11 = (uint *)puVar3[10];
      (**(code **)(*param_2 + 8))(param_2);
      uVar7 = 0;
      do {
        if (*(char *)(param_2[1] + uVar7) == '\0') {
          if ((int)uVar7 < 0x40001) goto LAB_001e239c;
          break;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0x40001);
      uVar7 = 0;
LAB_001e239c:
      if ((int)puVar3[0xb] <= (int)uVar7) {
        uVar7 = puVar3[0xb] - 1;
      }
      (**(code **)(*param_2 + 8))(param_2);
      func_0010E3C4(puVar11,(uint *)param_2[1],uVar7);
      *(undefined1 *)((int)puVar11 + uVar7) = 0;
      *(char *)(puVar3 + 0x2c) = (char)uVar6;
      *(char *)((int)puVar3 + 0xb1) = local_1c4;
      if (((local_188 == '\0') && (-2 < local_1c4)) && ((int)uVar6 < 7)) {
        iVar8 = param_1 + 0x10;
        if (uVar6 < 7) {
          iVar8 = iVar8 + uVar6 * 0x328;
        }
        if (*(int *)(iVar8 + 0xc) < *(int *)(iVar8 + 0x10)) {
          *(undefined4 **)(*(int *)(iVar8 + 0x14) + *(int *)(iVar8 + 0xc) * 4) = puVar3;
          *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + 1;
        }
      }
    }
    func_004929B8(auStack_184);
  }
  return puVar3;
}

