#include "ghidra_types.h"

extern int func_0028BF6C(int param_1,int param_2,int param_3);
extern int func_003525AC(int param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern char s_PlayerObject_001dbf44[];

// USA 001DBEE4 <- EU 001DBEE4 (Ghidra, non-matching)
// GLOBAL s_PlayerObject_001dbf44 string

undefined4 func_001DBEE4(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define auStack_30 ((undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  *(undefined2 *)(param_1 + 0x358) = 0x160;
  *(undefined2 *)(param_1 + 0x35a) = 0xb2;
  func_003529A0(auStack_30,s_PlayerObject_001dbf44,param_1 + 800);
  func_0028BF6C(*(int *)(param_1 + 0x600),param_1 + 0x324,(int)auStack_30);
  local_1c = 3;
  return func_003525AC(param_1 + 0x324,auStack_30,*(int *)(param_1 + 0x408));
}

