#include "ghidra_types.h"

extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00583794(int *param_1,int *param_2);
extern undefined4 DAT_004686f0;
extern int DAT_004686f4;
extern int *DAT_004686f8;
extern int *DAT_004687f0;
extern int DAT_004687f4;
extern char s_LocationNameUpper_004687dc[];
extern char s_loc_name_Boss_004687cc[];
extern char s_loc_name_dark_00468744[];
extern char s_loc_name_dokuro_00468764[];
extern char s_loc_name_east_004686fc[];
extern char s_loc_name_ganon_004687bc[];
extern char s_loc_name_hagure_ajito_00468774[];
extern char s_loc_name_hera_0046871c[];
extern char s_loc_name_ice_0046878c[];
extern char s_loc_name_inside_castle_0046872c[];
extern char s_loc_name_kame_004687ac[];
extern char s_loc_name_sand_0046879c[];
extern char s_loc_name_water_00468754[];
extern char s_loc_name_wind_0046870c[];

// USA 004684B0 <- EU 00468488 (Ghidra, non-matching)
// GLOBAL DAT_004686f0 undefined4
// GLOBAL DAT_004686f4 int
// GLOBAL DAT_004686f8 int *
// GLOBAL DAT_004687f0 int *
// GLOBAL DAT_004687f4 int
// GLOBAL s_LocationNameUpper_004687dc string
// GLOBAL s_loc_name_Boss_004687cc string
// GLOBAL s_loc_name_dark_00468744 string
// GLOBAL s_loc_name_dokuro_00468764 string
// GLOBAL s_loc_name_east_004686fc string
// GLOBAL s_loc_name_ganon_004687bc string
// GLOBAL s_loc_name_hagure_ajito_00468774 string
// GLOBAL s_loc_name_hera_0046871c string
// GLOBAL s_loc_name_ice_0046878c string
// GLOBAL s_loc_name_inside_castle_0046872c string
// GLOBAL s_loc_name_kame_004687ac string
// GLOBAL s_loc_name_sand_0046879c string
// GLOBAL s_loc_name_water_00468754 string
// GLOBAL s_loc_name_wind_0046870c string

void func_004684B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(int *)(albw_frame + 0x0))
  #define local_9c (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x8))
  #define local_94 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_75 (*(undefined1 *)(albw_frame + 0x2b))
  #define local_74 (*(int *)(albw_frame + 0x2c))
  #define local_70 (*(undefined2 * *)(albw_frame + 0x30))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x34))
  #define local_68 ((undefined2 *)(albw_frame + 0x38))
  #define local_2a (*(undefined2 *)(albw_frame + 0x76))
  #define local_28 ((int *)(albw_frame + 0x78))
  #define local_14 (*(char * *)(albw_frame + 0x8c))
  uVar1 = DAT_004686f0;
  if (*(int *)(param_1 + 0x104) != 0) {
    local_28[3] = 0xffffffff;
    local_9c = local_94;
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    uStack_98 = 0x20;
    uStack_75 = 0;
    local_94[0] = 0;
    local_a0 = DAT_004686f4;
    if (*DAT_004686f8 != 0) {
      switch(*(undefined1 *)(*DAT_004686f8 + 0x18)) {
      case 9:
        func_004994B0((int)&local_a0,s_loc_name_east_004686fc,param_3,param_4);
        break;
      case 10:
        func_004994B0((int)&local_a0,s_loc_name_wind_0046870c,param_3,param_4);
        break;
      case 0xb:
        func_004994B0((int)&local_a0,s_loc_name_hera_0046871c,param_3,param_4);
        break;
      case 0xc:
        func_004994B0((int)&local_a0,s_loc_name_inside_castle_0046872c,param_3,param_4);
        break;
      case 0xd:
        func_004994B0((int)&local_a0,s_loc_name_dark_00468744,param_3,param_4);
        break;
      case 0xe:
        func_004994B0((int)&local_a0,s_loc_name_water_00468754,param_3,param_4);
        break;
      case 0xf:
        func_004994B0((int)&local_a0,s_loc_name_dokuro_00468764,param_3,param_4);
        break;
      case 0x10:
        func_004994B0((int)&local_a0,s_loc_name_hagure_ajito_00468774,param_3,param_4);
        break;
      case 0x11:
        func_004994B0((int)&local_a0,s_loc_name_ice_0046878c,param_3,param_4);
        break;
      case 0x12:
        func_004994B0((int)&local_a0,s_loc_name_sand_0046879c,param_3,param_4);
        break;
      case 0x13:
        func_004994B0((int)&local_a0,s_loc_name_kame_004687ac,param_3,param_4);
        break;
      case 0x14:
        func_004994B0((int)&local_a0,s_loc_name_ganon_004687bc,param_3,param_4);
        break;
      case 0x15:
        func_004994B0((int)&local_a0,s_loc_name_Boss_004687cc,param_3,param_4);
      }
    }
    local_14 = s_LocationNameUpper_004687dc;
    local_28[4] = uVar1;
    iVar2 = func_005826A4(*DAT_004687f0,local_28,local_28 + 4,&local_a0);
    if (iVar2 != 0) {
      local_70 = local_68;
      uStack_6c = 0x20;
      local_2a = 0;
      local_74 = DAT_004687f4;
      local_68[0] = 0;
      uVar3 = func_00583794(local_28,&local_74);
      (**(code **)(local_74 + 8))(&local_74);
      (**(code **)(**(int **)(param_1 + 0x104) + 0x60))
                (*(int **)(param_1 + 0x104),local_70,0,uVar3 & 0xffff);
    }
  }
  return;
}

