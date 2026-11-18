#include "ghidra_types.h"

extern int func_001E1EDC(int param_1,int *param_2);
extern int func_00689578(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_00503e04;
extern int DAT_00503e08;
extern undefined4 DAT_00503e0c;
extern undefined4 DAT_00503e10;
extern int *DAT_00503e28;
extern char s__Archive_00503e14[];
extern char s__s_arc_00503e20[];
extern char s_cf_00503e14[];
extern char s_cf_00503e20[];

// USA 00503CA4 <- EU 00503C7C (Ghidra, non-matching)
// GLOBAL DAT_00503e04 int
// GLOBAL DAT_00503e08 int
// GLOBAL DAT_00503e0c undefined4
// GLOBAL DAT_00503e10 undefined4
// GLOBAL DAT_00503e28 int *
// GLOBAL s_cf_00503e20 string
// GLOBAL s_cf_00503e14 string

void func_00503CA4(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_e0 (*(int *)(albw_frame + 0x0))
  #define local_dc (*(undefined4 *)(albw_frame + 0x4))
  #define local_d8 (*(int *)(albw_frame + 0x8))
  #define local_d4 (*(int *)(albw_frame + 0xc))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_c0 (*(int *)(albw_frame + 0x20))
  #define local_bc (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_b8 (*(undefined4 *)(albw_frame + 0x28))
  #define iStack_b4 (*(int *)(albw_frame + 0x2c))
  #define local_b0 (*(char * *)(albw_frame + 0x30))
  #define local_ac (*(undefined1 *)(albw_frame + 0x34))
  #define local_ab (*(undefined1 *)(albw_frame + 0x35))
  #define local_aa (*(undefined1 *)(albw_frame + 0x36))
  #define local_a9 (*(undefined1 *)(albw_frame + 0x37))
  #define local_a8 (*(undefined1 *)(albw_frame + 0x38))
  #define auStack_a4 ((undefined4 *)(albw_frame + 0x3c))
  piVar4 = (int *)(DAT_00503e04 + param_2 * 8);
  if (*(char *)piVar4[1] != '\0') {
    local_dc = DAT_00503e0c;
    local_d8 = 0;
    local_e0 = DAT_00503e08;
    local_d4 = 0;
    local_d0 = 0x20;
    puVar1 = &uStack_b8;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_bc = 0;
    uStack_b8 = 0;
    iStack_b4 = DAT_00503e08;
    local_ac = 7;
    local_aa = 0;
    local_a9 = 1;
    local_a8 = 1;
    local_c0 = param_1 + 0x120;
    local_b0 = s__Archive_00503e14;
    local_ab = 0xff;
    (**(code **)(*piVar4 + 8))(piVar4);
    puVar1 = func_00689578(auStack_a4,s__s_arc_00503e20,piVar4[1],puVar1);
    local_dc = puVar1[1];
    local_cc = 0x80;
    local_d0 = 0x80;
    local_aa = 0xc;
    if (param_3 != 0) {
      local_ac = 7;
      local_d8 = param_3;
      local_d4 = param_3;
    }
    puVar1 = func_001E1EDC(*DAT_00503e28,&local_e0);
    puVar2 = (undefined4 *)(param_1 + 0x10);
    if (param_2 < 0x11) {
      puVar2 = puVar2 + param_2;
    }
    *puVar2 = puVar1;
    piVar4 = (int *)(param_1 + 0x10);
    if (param_2 < 0x11) {
      piVar4 = piVar4 + param_2;
    }
    *(int *)(param_1 + 0xac + param_2 * 4) = *piVar4 + 0xb4;
    iVar3 = *(int *)(param_1 + 100);
    if (iVar3 < *(int *)(param_1 + 0x5c)) {
      *(int *)(param_1 + 100) = iVar3 + 1;
      iVar3 = iVar3 + *(int *)(param_1 + 0x60);
      if (*(int *)(param_1 + 0x5c) <= iVar3) {
        iVar3 = iVar3 - *(int *)(param_1 + 0x5c);
      }
      *(uint *)(*(int *)(param_1 + 0x58) + iVar3 * 4) = param_2;
    }
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x10);
  if (param_2 < 0x11) {
    puVar1 = puVar1 + param_2;
  }
  *puVar1 = *(undefined4 *)(param_1 + 0x18);
  return;
}

