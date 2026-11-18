#include "ghidra_types.h"

extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00583794(int *param_1,int *param_2);
extern undefined4 DAT_0043b888;
extern int DAT_0043b88c;
extern int *DAT_0043b890;
extern int *DAT_0043b988;
extern int DAT_0043b98c;
extern char s_LocationNameUpper_0043b974[];
extern char s_loc_name_Boss_0043b964[];
extern char s_loc_name_dark_0043b8dc[];
extern char s_loc_name_dokuro_0043b8fc[];
extern char s_loc_name_east_0043b894[];
extern char s_loc_name_ganon_0043b954[];
extern char s_loc_name_hagure_ajito_0043b90c[];
extern char s_loc_name_hera_0043b8b4[];
extern char s_loc_name_ice_0043b924[];
extern char s_loc_name_inside_castle_0043b8c4[];
extern char s_loc_name_kame_0043b944[];
extern char s_loc_name_sand_0043b934[];
extern char s_loc_name_water_0043b8ec[];
extern char s_loc_name_wind_0043b8a4[];

// USA 0043B640 <- EU 0043B620 (Ghidra, non-matching)
// GLOBAL DAT_0043b888 undefined4
// GLOBAL DAT_0043b88c int
// GLOBAL DAT_0043b890 int *
// GLOBAL DAT_0043b988 int *
// GLOBAL DAT_0043b98c int
// GLOBAL s_LocationNameUpper_0043b974 string
// GLOBAL s_loc_name_Boss_0043b964 string
// GLOBAL s_loc_name_dark_0043b8dc string
// GLOBAL s_loc_name_dokuro_0043b8fc string
// GLOBAL s_loc_name_east_0043b894 string
// GLOBAL s_loc_name_ganon_0043b954 string
// GLOBAL s_loc_name_hagure_ajito_0043b90c string
// GLOBAL s_loc_name_hera_0043b8b4 string
// GLOBAL s_loc_name_ice_0043b924 string
// GLOBAL s_loc_name_inside_castle_0043b8c4 string
// GLOBAL s_loc_name_kame_0043b944 string
// GLOBAL s_loc_name_sand_0043b934 string
// GLOBAL s_loc_name_water_0043b8ec string
// GLOBAL s_loc_name_wind_0043b8a4 string

void func_0043B640(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

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
  uVar1 = DAT_0043b888;
  if (*(int *)(param_1 + 0x80) != 0) {
    local_28[3] = 0xffffffff;
    local_9c = local_94;
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    uStack_98 = 0x20;
    uStack_75 = 0;
    local_94[0] = 0;
    local_a0 = DAT_0043b88c;
    if (*DAT_0043b890 != 0) {
      switch(*(undefined1 *)(*DAT_0043b890 + 0x18)) {
      case 9:
        func_004994B0((int)&local_a0,s_loc_name_east_0043b894,param_3,param_4);
        break;
      case 10:
        func_004994B0((int)&local_a0,s_loc_name_wind_0043b8a4,param_3,param_4);
        break;
      case 0xb:
        func_004994B0((int)&local_a0,s_loc_name_hera_0043b8b4,param_3,param_4);
        break;
      case 0xc:
        func_004994B0((int)&local_a0,s_loc_name_inside_castle_0043b8c4,param_3,param_4);
        break;
      case 0xd:
        func_004994B0((int)&local_a0,s_loc_name_dark_0043b8dc,param_3,param_4);
        break;
      case 0xe:
        func_004994B0((int)&local_a0,s_loc_name_water_0043b8ec,param_3,param_4);
        break;
      case 0xf:
        func_004994B0((int)&local_a0,s_loc_name_dokuro_0043b8fc,param_3,param_4);
        break;
      case 0x10:
        func_004994B0((int)&local_a0,s_loc_name_hagure_ajito_0043b90c,param_3,param_4);
        break;
      case 0x11:
        func_004994B0((int)&local_a0,s_loc_name_ice_0043b924,param_3,param_4);
        break;
      case 0x12:
        func_004994B0((int)&local_a0,s_loc_name_sand_0043b934,param_3,param_4);
        break;
      case 0x13:
        func_004994B0((int)&local_a0,s_loc_name_kame_0043b944,param_3,param_4);
        break;
      case 0x14:
        func_004994B0((int)&local_a0,s_loc_name_ganon_0043b954,param_3,param_4);
        break;
      case 0x15:
        func_004994B0((int)&local_a0,s_loc_name_Boss_0043b964,param_3,param_4);
      }
    }
    local_14 = s_LocationNameUpper_0043b974;
    local_28[4] = uVar1;
    iVar2 = func_005826A4(*DAT_0043b988,local_28,local_28 + 4,&local_a0);
    if (iVar2 != 0) {
      local_70 = local_68;
      uStack_6c = 0x20;
      local_2a = 0;
      local_74 = DAT_0043b98c;
      local_68[0] = 0;
      uVar3 = func_00583794(local_28,&local_74);
      (**(code **)(local_74 + 8))(&local_74);
      (**(code **)(**(int **)(param_1 + 0x80) + 0x60))
                (*(int **)(param_1 + 0x80),local_70,0,uVar3 & 0xffff);
    }
  }
  return;
}

