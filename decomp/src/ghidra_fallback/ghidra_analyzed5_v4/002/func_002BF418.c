#include "ghidra_types.h"

extern int func_00532F70(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00662B58(undefined4 *param_1,undefined1 param_2);
extern int DAT_002bf494;
extern char s_SE_S_DECIDE_002bf488[];

// USA 002BF418 <- EU 002BF3F4 (Ghidra, non-matching)
// GLOBAL DAT_002bf494 int
// GLOBAL s_SE_S_DECIDE_002bf488 string

void func_002BF418(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = (**(code **)(*param_1 + 0x54))(param_1);
  if (iVar1 == 0) {
    if (((*(ushort *)(param_1[5] + 0x16) & 8) != 0) && (*(int *)(param_1[5] + 8) == 0)) {
      func_00662B58(param_1 + 0xe,1);
    }
    if ((*(ushort *)(param_1[5] + 0x16) & 4) != 0) {
      *(undefined1 *)((int)param_1 + 0x5e) = 1;
      *(undefined1 *)((int)param_1 + 0x5f) = 1;
      local_10 = DAT_002bf494;
      local_c = s_SE_S_DECIDE_002bf488;
      func_00532F70((int)param_1,&local_10,0,0);
    }
  }
  return;
}

