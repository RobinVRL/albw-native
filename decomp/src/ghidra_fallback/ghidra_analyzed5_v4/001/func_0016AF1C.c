#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016B2E4(undefined4 param_1,int param_2);
extern int func_001B78E0(int param_1,uint param_2,undefined4 param_3,undefined4 *param_4);
extern int func_00270C14(int *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_00270DFC(undefined4 *param_1);
extern int func_0048C320(int *param_1,int param_2,int param_3);
extern undefined4 DAT_0016b098;
extern int *DAT_0016b09c;
extern undefined4 *DAT_0016b0e0;
extern char s_cf_0016b088[];
extern char s_cf_0016b0a0[];
extern char s_cf_0016b0b4[];
extern char s_cf_0016b0cc[];
extern char s_cross_info_f_bch_0016b0cc[];
extern char s_gt_common_bch_0016b088[];
extern char s_staffroll_picture_bch_0016b0b4[];
extern char s_title_triforce_bch_0016b0a0[];

// USA 0016AF1C <- EU 0016AF1C (Ghidra, non-matching)
// GLOBAL DAT_0016b098 undefined4
// GLOBAL DAT_0016b09c int *
// GLOBAL DAT_0016b0e0 undefined4 *
// GLOBAL s_cf_0016b0cc string
// GLOBAL s_cf_0016b088 string
// GLOBAL s_cf_0016b0b4 string
// GLOBAL s_cf_0016b0a0 string

undefined4 func_0016AF1C(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  *(undefined1 *)(param_1 + 0xfa7) = 1;
  *(undefined1 *)(param_1 + 0xfa8) = 1;
  uVar4 = DAT_0016b098;
  local_1c = s_gt_common_bch_0016b088;
  local_20 = DAT_0016b098;
  if (*(char *)(*DAT_0016b09c + 0x25) == '\x02') {
    local_1c = s_title_triforce_bch_0016b0a0;
  }
  else if (*(char *)(*DAT_0016b09c + 0x25) == '\x03') {
    local_1c = s_staffroll_picture_bch_0016b0b4;
  }
  iVar1 = func_0016B2E4(param_1,(int)&local_20);
  puVar2 = (undefined4 *)func_0010BAB4(0x54);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00270DFC(puVar2);
  }
  *(int **)(param_1 + 0xf6c) = piVar3;
  func_00270C14(piVar3,iVar1,(int *)0x0,0);
  local_1c = s_cross_info_f_bch_0016b0cc;
  local_20 = uVar4;
  iVar1 = func_0016B2E4(param_1,(int)&local_20);
  puVar2 = (undefined4 *)func_0010BAB4(0x54);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00270DFC(puVar2);
  }
  *(int **)(param_1 + 0xf70) = piVar3;
  func_00270C14(piVar3,iVar1,(int *)0x0,0);
  *(undefined2 *)(param_1 + 0xf38) = 8;
  *(undefined2 *)(param_1 + 0xf3a) = 0xfffe;
  func_001B78E0(param_1 + 0xf34,0,*(undefined4 *)(param_1 + 0xf6c),DAT_0016b0e0);
  uVar4 = func_001B78E0(param_1 + 0xf34,2,*(undefined4 *)(param_1 + 0xf70),DAT_0016b0e0);
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 != 0) {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x84) + iVar5 * 4);
        iVar5 = iVar5 + 1;
        *puVar2 = *(undefined4 *)(param_1 + 0x88);
        *(undefined4 **)(param_1 + 0x88) = puVar2;
      } while (iVar5 < iVar1);
    }
    uVar4 = func_0048C320((int *)(param_1 + 0x7c),0,iVar1);
  }
  *(undefined1 *)(param_1 + 0xfa7) = 0;
  return uVar4;
}

