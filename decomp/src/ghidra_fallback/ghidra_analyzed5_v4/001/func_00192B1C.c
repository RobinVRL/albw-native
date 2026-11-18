#include "ghidra_types.h"

extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int DAT_00192b84;
extern int *DAT_00192b88;
extern char s_SE_S_GET_KEY_SMALL_00192b70[];

// USA 00192B1C <- EU 00192B1C (Ghidra, non-matching)
// GLOBAL DAT_00192b84 int
// GLOBAL DAT_00192b88 int *
// GLOBAL s_SE_S_GET_KEY_SMALL_00192b70 string

undefined4 func_00192B1C(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_S_GET_KEY_SMALL_00192b70;
  local_10 = DAT_00192b84;
  func_00587F74(*DAT_00192b88,&local_10,0);
  *(undefined1 *)(param_1 + 0x444) = 0;
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return func_00588C14(param_1,1,1);
}

