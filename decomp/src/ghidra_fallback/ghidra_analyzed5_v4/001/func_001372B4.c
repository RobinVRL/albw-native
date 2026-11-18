#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001E4090(int param_1,undefined4 param_2);
extern int func_003249B4(int param_1);
extern int func_00361554(int param_1);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern undefined4 *DAT_00137338;
extern int DAT_0013734c;
extern int *DAT_00137350;
extern char s_SE_DoorKey_OPEN_0013733c[];

// USA 001372B4 <- EU 001372B4 (Ghidra, non-matching)
// GLOBAL DAT_00137338 undefined4 *
// GLOBAL DAT_0013734c int
// GLOBAL DAT_00137350 int *
// GLOBAL s_SE_DoorKey_OPEN_0013733c string

undefined4 func_001372B4(int *param_1)

{
  undefined4 *puVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_00588C14((int)param_1,1,1);
  puVar1 = DAT_00137338;
  *(undefined1 *)(param_1 + 0x125) = 1;
  *(undefined1 *)(param_1 + 0x126) = 1;
  func_004A8304(*puVar1,param_1[0x121]);
  func_003249B4((int)param_1);
  *(undefined1 *)(param_1 + 0x12e) = 1;
  func_001E4090((int)param_1,0);
  local_14 = s_SE_DoorKey_OPEN_0013733c;
  local_18 = DAT_0013734c;
  func_00150A84(param_1,&local_18,0);
  func_00361554(*DAT_00137350);
  return 2;
}

