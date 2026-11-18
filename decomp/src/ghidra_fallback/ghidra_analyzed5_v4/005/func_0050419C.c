#include "ghidra_types.h"

extern int func_001E0B94(int param_1,undefined4 param_2,int param_3);
extern int func_00504AEC(undefined4 *param_1);
extern int func_00504D48(int param_1,int param_2);
extern int func_00689578(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_00504450;
extern undefined4 DAT_00504454;
extern int *DAT_00504480;
extern int *DAT_00504484;
extern undefined4 DAT_00504488;
extern int DAT_0050448c;
extern char s_World_Environment_Fog_00504460[];
extern char s__s__s_00504478[];
extern char s_cf_00504460[];
extern char s_cf_00504478[];

// USA 0050419C <- EU 00504174 (Ghidra, non-matching)
// GLOBAL DAT_00504450 int
// GLOBAL DAT_00504454 undefined4
// GLOBAL DAT_00504480 int *
// GLOBAL DAT_00504484 int *
// GLOBAL DAT_00504488 undefined4
// GLOBAL DAT_0050448c int
// GLOBAL s_cf_00504478 string
// GLOBAL s_cf_00504460 string

undefined4 func_0050419C(int param_1,uint param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define iStack_100 (*(int *)(albw_frame + 0x0))
  #define uStack_fc (*(undefined4 *)(albw_frame + 0x4))
  #define local_f8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_f4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_f0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_ec (*(undefined4 *)(albw_frame + 0x14))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_dc (*(undefined4 *)(albw_frame + 0x24))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_d4 (*(int *)(albw_frame + 0x2c))
  #define local_d0 (*(char * *)(albw_frame + 0x30))
  #define local_cc (*(undefined1 *)(albw_frame + 0x34))
  #define local_cb (*(undefined1 *)(albw_frame + 0x35))
  #define local_ca (*(undefined1 *)(albw_frame + 0x36))
  #define local_c9 (*(undefined1 *)(albw_frame + 0x37))
  #define local_c8 (*(undefined1 *)(albw_frame + 0x38))
  #define local_c4 (*(int *)(albw_frame + 0x3c))
  #define local_c0 (*(int *)(albw_frame + 0x40))
  #define uStack_bc (*(undefined4 *)(albw_frame + 0x44))
  #define local_b8 (*(int * *)(albw_frame + 0x48))
  #define local_b4 (*(undefined1 *)(albw_frame + 0x4c))
  #define auStack_b0 ((undefined4 *)(albw_frame + 0x50))
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    do {
      if (uVar8 < *(uint *)(param_1 + 0x54)) {
        piVar3 = *(int **)(*(int *)(param_1 + 0x5c) + uVar8 * 4);
      }
      else {
        piVar3 = (int *)0x0;
      }
      iVar9 = *piVar3;
      piVar3 = (int *)(iVar9 + 0x24);
      (**(code **)(*piVar3 + 8))(piVar3);
      (**(code **)(*piVar3 + 8))(piVar3);
      iVar10 = *(int *)(iVar9 + 0x28);
      (**(code **)(*param_3 + 8))(param_3);
      if (iVar10 == param_3[1]) {
LAB_00504228:
        if (uVar8 < *(uint *)(param_1 + 0x54)) {
          iVar9 = *(int *)(*(int *)(param_1 + 0x5c) + uVar8 * 4);
        }
        else {
          iVar9 = 0;
        }
        if (*(byte *)(iVar9 + 0x70) == param_2) {
          if ((uVar8 < *(uint *)(param_1 + 0x54)) &&
             (puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x5c) + uVar8 * 4),
             puVar5 != (undefined4 *)0x0)) goto LAB_00504268;
          break;
        }
      }
      else {
        iVar10 = 0;
        do {
          cVar1 = *(char *)(*(int *)(iVar9 + 0x28) + iVar10);
          if (cVar1 != *(char *)(param_3[1] + iVar10)) break;
          if (cVar1 == '\0') goto LAB_00504228;
          iVar10 = iVar10 + 1;
        } while (iVar10 < 0x40001);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *(int *)(param_1 + 0x54));
  }
  iStack_100 = DAT_00504450;
  uStack_fc = DAT_00504454;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0x20;
  uStack_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = DAT_00504450;
  local_cc = 7;
  local_cb = 4;
  local_ca = 0;
  local_c9 = 0;
  local_c8 = 0;
  local_c4 = DAT_00504450;
  uStack_bc = 0;
  local_b8 = (int *)0x0;
  local_d0 = s_World_Environment_Fog_00504460;
  local_c0 = param_3[1];
  local_b4 = 0;
  (**(code **)(DAT_00504450 + 8))(&local_c4);
  iVar9 = local_c0;
  (**(code **)(local_d4 + 8))(&local_d4);
  func_00689578(auStack_b0,s__s__s_00504478,(uint)local_d0,iVar9);
  local_b8 = func_001E0B94(*DAT_00504480,auStack_b0,-1);
  if (local_b8 != (int *)0x0) {
    local_c9 = 1;
    local_ca = 0xf;
    local_c8 = 1;
    puVar4 = func_00504D48(*DAT_00504484,(int)&iStack_100);
    if (puVar4 != (undefined4 *)0x0) {
      if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x58)) {
        puVar6 = *(undefined4 **)(param_1 + 0x60);
        puVar5 = (undefined4 *)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0x60) = *puVar6;
          puVar5 = func_00504AEC(puVar6);
        }
        if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x58)) {
          *(undefined4 **)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x54) * 4) = puVar5;
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        }
      }
      else {
        puVar5 = (undefined4 *)0x0;
      }
      *puVar5 = puVar4;
      puVar5[1] = 0;
      uVar2 = DAT_00504488;
      iVar9 = **(int **)(*(int *)(puVar4[0x31] + 0x30) + 0x54);
      puVar5[1] = iVar9;
      *(char *)(puVar5 + 0x1c) = (char)param_2;
      *(undefined1 *)(puVar5 + 0x22) = 1;
      uVar7 = *(undefined4 *)(iVar9 + 0x38);
      puVar5[0x1e] = uVar7;
      puVar5[0x1d] = uVar7;
      puVar5[0x20] = 0;
      puVar5[0x21] = uVar2;
      puVar5[0x1f] = 0;
      puVar5[2] = *(undefined4 *)(puVar5[1] + 0x30);
      iVar9 = DAT_0050448c;
      puVar5[3] = *(undefined4 *)(puVar5[1] + 0x34);
      puVar5[5] = *(undefined4 *)(iVar9 + 8);
LAB_00504268:
      *(undefined4 **)(param_1 + 0x658) = puVar5;
      return 1;
    }
  }
  return 0;
}

