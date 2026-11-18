#include "ghidra_types.h"

extern int func_001E0B94(int param_1,undefined4 param_2,int param_3);
extern int func_00504D48(int param_1,int param_2);
extern int func_00689578(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_0016b400;
extern undefined4 DAT_0016b404;
extern undefined4 DAT_0016b408;
extern int *DAT_0016b430;
extern int *DAT_0016b434;
extern char s_World_Environment_LightSet_0016b40c[];
extern char s__s__s_0016b428[];
extern char s_cf_0016b40c[];
extern char s_cf_0016b428[];

// USA 0016B2E4 <- EU 0016B2E4 (Ghidra, non-matching)
// GLOBAL DAT_0016b400 int
// GLOBAL DAT_0016b404 undefined4
// GLOBAL DAT_0016b408 undefined4
// GLOBAL DAT_0016b430 int *
// GLOBAL DAT_0016b434 int *
// GLOBAL s_cf_0016b428 string
// GLOBAL s_cf_0016b40c string

undefined4 * func_0016B2E4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_f0 (*(int *)(albw_frame + 0x0))
  #define local_ec (*(undefined4 *)(albw_frame + 0x4))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_e4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_e0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_dc (*(undefined4 *)(albw_frame + 0x14))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_cc (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_c8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_c4 (*(int *)(albw_frame + 0x2c))
  #define local_c0 (*(char * *)(albw_frame + 0x30))
  #define local_bc (*(undefined1 *)(albw_frame + 0x34))
  #define local_bb (*(undefined1 *)(albw_frame + 0x35))
  #define local_ba (*(undefined1 *)(albw_frame + 0x36))
  #define local_b9 (*(undefined1 *)(albw_frame + 0x37))
  #define local_b8 (*(undefined1 *)(albw_frame + 0x38))
  #define local_b4 (*(int *)(albw_frame + 0x3c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_ac (*(undefined4 *)(albw_frame + 0x44))
  #define local_a8 (*(int * *)(albw_frame + 0x48))
  #define local_a4 (*(undefined1 *)(albw_frame + 0x4c))
  #define auStack_a0 ((undefined4 *)(albw_frame + 0x50))
  local_ec = DAT_0016b404;
  local_e8 = 0;
  local_f0 = DAT_0016b400;
  local_e4 = 0;
  uStack_e0 = 0x20;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  uStack_c8 = 0;
  local_c4 = DAT_0016b400;
  local_bc = 7;
  local_bb = 4;
  local_ba = 0;
  local_b9 = 0;
  local_b8 = 0;
  local_ac = 0;
  local_a8 = (int *)0x0;
  local_b4 = DAT_0016b400;
  local_c0 = s_World_Environment_LightSet_0016b40c;
  local_b0 = *(undefined4 *)(param_2 + 4);
  local_a4 = 0;
  (**(code **)(DAT_0016b400 + 8))(&local_b4);
  uVar1 = local_b0;
  (**(code **)(local_c4 + 8))(&local_c4);
  func_00689578(auStack_a0,s__s__s_0016b428,(uint)local_c0,uVar1);
  local_a8 = func_001E0B94(*DAT_0016b430,auStack_a0,-1);
  puVar2 = (undefined4 *)0x0;
  if (local_a8 != (int *)0x0) {
    local_b9 = 1;
    local_ba = 0xf;
    local_b8 = 1;
    puVar2 = func_00504D48(*DAT_0016b434,(int)&local_f0);
  }
  return puVar2;
}

