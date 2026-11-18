#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001E4090(int param_1,undefined4 param_2);
extern int func_003249B4(int param_1);
extern int func_00361458(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int DAT_001738b4;
extern int *DAT_001738b8;
extern char s_SE_DoorBoss_OPEN_001738a0[];

// USA 0017381C <- EU 0017381C (Ghidra, non-matching)
// GLOBAL DAT_001738b4 int
// GLOBAL DAT_001738b8 int *
// GLOBAL s_SE_DoorBoss_OPEN_001738a0 string

undefined4 func_0017381C(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_00588C14((int)param_1,1,1);
  *(undefined1 *)(param_1 + 0x126) = 1;
  *(undefined1 *)(param_1[0x121] + 0x44) = 0;
  *(undefined1 *)(param_1[0x127] + 0x44) = 1;
  func_003249B4((int)param_1);
  *(undefined1 *)(param_1 + 0x12f) = 1;
  func_001E4090((int)param_1,0);
  local_14 = s_SE_DoorBoss_OPEN_001738a0;
  local_18 = DAT_001738b4;
  func_00150A84(param_1,&local_18,0);
  func_00361458(*DAT_001738b8);
  return 2;
}

