#include "ghidra_types.h"

extern int func_00150CD0(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5);
extern int *DAT_001c6648;
extern int DAT_001c6660;
extern char s_SE_TrapFloat_MOVE_001c664c[];

// USA 001C65DC <- EU 001C65DC (Ghidra, non-matching)
// GLOBAL DAT_001c6648 int *
// GLOBAL DAT_001c6660 int
// GLOBAL s_SE_TrapFloat_MOVE_001c664c string

undefined4 func_001C65DC(int param_1)

{
  char cVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  *(int *)(param_1 + 1000) = *DAT_001c6648 + *(int *)(param_1 + 1000);
  cVar1 = *(char *)(*(int *)(param_1 + 0x438) + 0x68);
  if ((cVar1 != '\x01' && cVar1 != '\x02') && (*(char *)(*(int *)(param_1 + 0x438) + 0x39) == '\0'))
  {
    return 0;
  }
  local_c = s_SE_TrapFloat_MOVE_001c664c;
  local_10 = DAT_001c6660;
  return func_00150CD0(param_1,&local_10,param_1 + 0x3d0,0,0);
}

