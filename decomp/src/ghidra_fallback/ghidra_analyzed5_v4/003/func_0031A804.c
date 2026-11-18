#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int DAT_0031a850;
extern char s_SE_TurtleBullied_JUMP_0031a838[];

// USA 0031A804 <- EU 0031A7E0 (Ghidra, non-matching)
// GLOBAL DAT_0031a850 int
// GLOBAL s_SE_TurtleBullied_JUMP_0031a838 string

undefined4 func_0031A804(int *param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define local_10 (*(int *)(albw_frame + 0x60))
  #define local_c (*(char * *)(albw_frame + 0x64))
  puVar1 = (uint *)func_002C11E8(aiStack_70,2,10,0);
  func_0016898C(param_1[0x111],puVar1);
  local_c = s_SE_TurtleBullied_JUMP_0031a838;
  local_10 = DAT_0031a850;
  return func_00150A84(param_1,&local_10,0);
}

