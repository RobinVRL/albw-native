#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_003525AC(int param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_003529C0(undefined4 *param_1);
extern int func_004A2650(int param_1,int param_2);
extern int func_004A6CCC(int param_1,int param_2);
extern undefined4 DAT_004c8d88;
extern int DAT_004c8d8c;
extern undefined4 DAT_004c8d90;
extern int *DAT_004c8da4;
extern undefined4 DAT_004c8db8;
extern undefined4 DAT_004c8dbc;
extern char s_Elink_Jack_bin_004c8d94[];
extern char s_Sound_Slink_bin_004c8da8[];
extern char s_cf_004c8d94[];
extern char s_cf_004c8da8[];

// USA 004C8C3C <- EU 004C8C14 (Ghidra, non-matching)
// GLOBAL DAT_004c8d88 undefined4
// GLOBAL DAT_004c8d8c int
// GLOBAL DAT_004c8d90 undefined4
// GLOBAL DAT_004c8da4 int *
// GLOBAL DAT_004c8db8 undefined4
// GLOBAL DAT_004c8dbc undefined4
// GLOBAL s_cf_004c8d94 string
// GLOBAL s_cf_004c8da8 string

void func_004C8C3C(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define iStack_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(char * *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 * *)(albw_frame + 0xc))
  #define puStack_50 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(int *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined1 *)(albw_frame + 0x34))
  #define local_2b (*(undefined1 *)(albw_frame + 0x35))
  #define local_2a (*(undefined1 *)(albw_frame + 0x36))
  #define local_29 (*(undefined1 *)(albw_frame + 0x37))
  #define local_28 (*(undefined1 *)(albw_frame + 0x38))
  piVar2 = DAT_004c8da4;
  iVar1 = DAT_004c8d8c;
  local_58 = 0;
  local_54 = (undefined4 *)0x0;
  puStack_50 = (undefined4 *)0x20;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  iStack_60 = DAT_004c8d8c;
  local_30 = DAT_004c8d90;
  local_34 = DAT_004c8d8c;
  local_2c = 7;
  local_2b = 4;
  local_5c = s_Elink_Jack_bin_004c8d94;
  local_29 = 0;
  local_28 = 0;
  local_2a = 0xb;
  puVar3 = func_001E1EDC(*DAT_004c8da4,&iStack_60);
  func_004A2650(*(int *)(param_1 + 0x10),puVar3[5]);
  local_58 = 0;
  local_54 = (undefined4 *)0x0;
  puStack_50 = (undefined4 *)0x20;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  iStack_60 = iVar1;
  local_34 = iVar1;
  local_2c = 7;
  local_30 = DAT_004c8d90;
  local_2b = 4;
  local_5c = s_Sound_Slink_bin_004c8da8;
  local_29 = 0;
  local_28 = 0;
  local_2a = 0xd;
  puVar3 = func_001E1EDC(*piVar2,&iStack_60);
  func_004A6CCC(*(int *)(param_1 + 0x30),puVar3[5]);
  puVar3 = (undefined4 *)func_0010BAB4(0x5c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = DAT_004c8db8;
    puVar4 = func_003529C0(puVar3 + 1);
    puVar3 = puVar4 + -1;
    func_003529A0(&iStack_60,DAT_004c8dbc,puVar3);
    local_54 = puVar4 + 0x10;
    puStack_50 = puVar4 + 0x13;
    local_58 = 0;
    func_003525AC((int)puVar4,&iStack_60,0);
  }
  *(undefined4 **)(param_1 + 0x2c) = puVar3;
  return;
}

