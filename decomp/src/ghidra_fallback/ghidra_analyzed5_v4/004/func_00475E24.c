#include "ghidra_types.h"

extern int func_00488234(undefined4 *param_1,uint param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_00475eb4;
extern int DAT_00475ecc;
extern undefined4 DAT_00475ed0;
extern int *DAT_00475ed4;
extern char s_npc_name_darkganon_00475eb8[];

// USA 00475E24 <- EU 00475DFC (Ghidra, non-matching)
// GLOBAL DAT_00475eb4 int
// GLOBAL DAT_00475ecc int
// GLOBAL DAT_00475ed0 undefined4
// GLOBAL DAT_00475ed4 int *
// GLOBAL s_npc_name_darkganon_00475eb8 string

int * func_00475E24(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_20 ((int *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x24))
  piVar1 = (int *)func_00488234(param_1,3);
  iVar2 = DAT_00475eb4 + 0xac;
  *piVar1 = DAT_00475eb4;
  piVar1[0xe] = iVar2;
  local_c = s_npc_name_darkganon_00475eb8;
  local_20[0] = 0;
  local_20[4] = DAT_00475ecc;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0xffffffff;
  local_30 = DAT_00475ecc;
  local_2c = DAT_00475ed0;
  iVar2 = func_005826A4(*DAT_00475ed4,local_20,&local_30,local_20 + 4);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 0x5c))(piVar1);
  }
  else {
    (**(code **)(*piVar1 + 0x54))(piVar1,local_20);
  }
  *(undefined1 *)(*(int *)piVar1[0x1d] + 0x20) = 1;
  return piVar1;
}

