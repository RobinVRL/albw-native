#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010C0B8(int param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010EEE0(int param_1);
extern int func_0048BAB8(int param_1,int param_2);
extern int func_0048BB48(int param_1,int *param_2,int param_3,int param_4);
extern int func_004929B8(undefined4 *param_1);
extern int func_00493250(undefined4 *param_1,int param_2,int param_3);
extern int func_004A1520();
extern int func_0058FA5C();
extern int DAT_001e14c0;
extern undefined4 DAT_001e14c4;
extern undefined4 DAT_001e14c8;
extern undefined4 DAT_001e14cc;
extern undefined4 DAT_001e14d0;
extern undefined4 DAT_001e14d4;
extern undefined4 *DAT_001e14d8;
extern int *DAT_001e14dc;
extern uint *DAT_001e14e8;
extern undefined4 *DAT_001e14ec;
extern undefined4 DAT_001e14f0;
extern undefined4 DAT_001e14f4;
extern char s_sharc_001e14e0[];

// USA 001E1228 <- EU 001E1228 (Ghidra, non-matching)
// GLOBAL DAT_001e14c0 int
// GLOBAL DAT_001e14c4 undefined4
// GLOBAL DAT_001e14c8 undefined4
// GLOBAL DAT_001e14cc undefined4
// GLOBAL DAT_001e14d0 undefined4
// GLOBAL DAT_001e14d4 undefined4
// GLOBAL DAT_001e14d8 undefined4 *
// GLOBAL DAT_001e14dc int *
// GLOBAL DAT_001e14e8 uint *
// GLOBAL DAT_001e14ec undefined4 *
// GLOBAL DAT_001e14f0 undefined4
// GLOBAL DAT_001e14f4 undefined4
// GLOBAL s_sharc_001e14e0 string

undefined4 * func_001E1228(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define local_108 (*(int *)(albw_frame + 0x8))
  #define local_104 (*(undefined4 *)(albw_frame + 0xc))
  #define local_100 (*(int * *)(albw_frame + 0x10))
  #define local_fc (*(undefined4 *)(albw_frame + 0x14))
  #define local_f8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_f0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_ec (*(undefined4 *)(albw_frame + 0x24))
  #define local_e8 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_e0 (*(undefined4 *)(albw_frame + 0x30))
  #define iStack_dc (*(int *)(albw_frame + 0x34))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_d4 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_d3 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_d2 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_d1 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_d0 (*(undefined1 *)(albw_frame + 0x40))
  #define auStack_cc ((undefined4 *)(albw_frame + 0x44))
  #define local_bc (*(undefined4 *)(albw_frame + 0x54))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x58))
  #define local_b4 (*(undefined4 * *)(albw_frame + 0x5c))
  #define uStack_b0 (*(undefined4 *)(albw_frame + 0x60))
  #define local_80 ((undefined4 *)(albw_frame + 0x90))
  #define local_28 (*(int *)(albw_frame + 0xe8))
  #define local_24 (*(char * *)(albw_frame + 0xec))
  iVar6 = DAT_001e14c0;
  local_108 = DAT_001e14c0;
  local_104 = *(undefined4 *)(param_2 + 4);
  uVar7 = 0x50000;
  local_100 = *(int **)(param_2 + 8);
  local_fc = *(undefined4 *)(param_2 + 0xc);
  local_f8 = *(undefined4 *)(param_2 + 0x10);
  local_f4 = *(undefined4 *)(param_2 + 0x14);
  local_f0 = *(undefined4 *)(param_2 + 0x18);
  local_ec = *(undefined4 *)(param_2 + 0x1c);
  local_e8 = *(undefined4 **)(param_2 + 0x20);
  local_e4 = *(undefined4 *)(param_2 + 0x24);
  uStack_e0 = *(undefined4 *)(param_2 + 0x28);
  iStack_dc = DAT_001e14c0;
  local_d8 = *(undefined4 *)(param_2 + 0x30);
  local_d4 = *(undefined1 *)(param_2 + 0x34);
  local_d3 = *(undefined1 *)(param_2 + 0x35);
  local_d2 = *(undefined1 *)(param_2 + 0x36);
  local_d1 = *(undefined1 *)(param_2 + 0x37);
  local_d0 = *(undefined1 *)(param_2 + 0x38);
  if (param_3 != (int *)0x0) {
    iVar2 = (**(code **)(*param_3 + 0x3c))(param_3,0x80);
    uVar3 = iVar2 - 0x381U & 0xffffff80;
    if (0x50000 < uVar3) {
      iVar2 = func_0010CEE0(uVar3,param_3,0xffffff80);
      uVar7 = uVar3;
      goto LAB_001e1328;
    }
  }
  iVar2 = func_0010CEE0(0x50000,local_100,0xffffff80);
LAB_001e1328:
  func_00493250(local_80,uVar7,iVar2);
  local_b4 = auStack_cc;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  puVar4 = func_0010CE7C(local_b4);
  *puVar4 = DAT_001e14c4;
  puVar4[9] = puVar4 + 0xb;
  puVar4[10] = 0x20;
  *(undefined1 *)(puVar4[9] + 0x1f) = 0;
  *(undefined1 *)puVar4[9] = 0;
  puVar4[8] = DAT_001e14d0;
  *puVar4 = DAT_001e14d4;
  local_e8 = auStack_cc;
  func_0010C0B8(param_1 + 0x1fb4);
  puVar4 = DAT_001e14d8;
  if (local_100 == (int *)0x0) {
    iVar8 = 1;
  }
  else {
    iVar8 = func_0010983C(*DAT_001e14d8,local_100);
  }
  piVar1 = DAT_001e14dc;
  local_24 = s_sharc_001e14e0;
  local_28 = iVar6;
  puVar5 = (undefined4 *)func_0048BB48(*DAT_001e14dc,&local_108,(int)&local_28,(int)local_80);
  if (((*DAT_001e14e8 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_001e14e8), iVar6 != 0)) {
    *DAT_001e14ec = DAT_001e14f0;
  }
  if ((puVar5 == (undefined4 *)0x0) ||
     (iVar6 = (**(code **)*puVar5)(puVar5,DAT_001e14ec), iVar6 == 0)) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar5 + -4;
  }
  func_0058FA5C(iVar2);
  if (iVar8 != 1) {
    func_0010983C(*puVar4,iVar8);
  }
  func_0010EEE0(param_1 + 0x1fb4);
  func_004929B8(auStack_cc);
  local_80[0] = DAT_001e14f4;
  if (*piVar1 != 0) {
    func_0048BAB8(*piVar1,(int)local_80);
  }
  func_004A1520(local_80);
  return puVar5;
}

