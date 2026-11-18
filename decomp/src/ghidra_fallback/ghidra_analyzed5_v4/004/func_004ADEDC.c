#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_00490724(int param_1,int param_2,int *param_3);
extern undefined4 DAT_004adfa4;
extern int DAT_004adfa8;
extern undefined4 DAT_004adfac;
extern undefined4 DAT_004adfb0;
extern int DAT_004adfb4;
extern int *DAT_004adfb8;

// USA 004ADEDC <- EU 004ADEB4 (Ghidra, non-matching)
// GLOBAL DAT_004adfa4 undefined4
// GLOBAL DAT_004adfa8 int
// GLOBAL DAT_004adfac undefined4
// GLOBAL DAT_004adfb0 undefined4
// GLOBAL DAT_004adfb4 int
// GLOBAL DAT_004adfb8 int *

undefined4 func_004ADEDC(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define iStack_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(int * *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define iStack_1c (*(int *)(albw_frame + 0x34))
  #define local_18 (*(int *)(albw_frame + 0x38))
  #define local_14 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_13 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_12 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_11 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_10 (*(undefined1 *)(albw_frame + 0x40))
  puVar2 = (undefined4 *)func_0010BAB4(0x24);
  uVar1 = DAT_004adfa4;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = uVar1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar2;
  iStack_48 = DAT_004adfa8;
  local_40 = 0;
  uStack_38 = 0x20;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  iStack_1c = DAT_004adfa8;
  local_14 = 7;
  local_11 = 0;
  local_13 = 0;
  local_18 = DAT_004adfb4;
  local_44 = DAT_004adfb4 + -0x10;
  local_12 = 0xe;
  local_10 = 1;
  local_3c = param_2;
  puVar2 = func_001E1EDC(*DAT_004adfb8,&iStack_48);
  return func_00490724(*(int *)(param_1 + 0x18),puVar2[5],param_2);
}

