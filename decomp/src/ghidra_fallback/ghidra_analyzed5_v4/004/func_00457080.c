#include "ghidra_types.h"

extern int func_00166620(int param_1,int param_2);
extern int func_00297298(int param_1,int param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int DAT_004570bc;
extern int *DAT_004570c0;
extern int *DAT_004570c4;
extern char s_SE_S_GAME_START_004570ac[];

// USA 00457080 <- EU 00457058 (Ghidra, non-matching)
// GLOBAL DAT_004570bc int
// GLOBAL DAT_004570c0 int *
// GLOBAL DAT_004570c4 int *
// GLOBAL s_SE_S_GAME_START_004570ac string

undefined4 func_00457080(int param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_004570c0;
  local_18 = DAT_004570bc;
  local_14 = s_SE_S_GAME_START_004570ac;
  func_00587F74(*DAT_004570c0,&local_18,0);
  func_00297298(*piVar1,0xf);
  return func_00166620(*DAT_004570c4,param_1);
}

