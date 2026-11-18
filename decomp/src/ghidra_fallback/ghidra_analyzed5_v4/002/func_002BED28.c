#include "ghidra_types.h"

extern int func_00532F70(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int DAT_002beda4;
extern char s_SE_S_CANCEL_002bedb4[];
extern char s_SE_S_DECIDE_002beda8[];

// USA 002BED28 <- EU 002BED04 (Ghidra, non-matching)
// GLOBAL DAT_002beda4 int
// GLOBAL s_SE_S_CANCEL_002bedb4 string
// GLOBAL s_SE_S_DECIDE_002beda8 string

undefined4 func_002BED28(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_002beda4;
  *(ushort *)(param_1[5] + 0x16) = *(ushort *)(param_1[5] + 0x16) & 0xffbf;
  if (*(char *)((int)param_1 + 0x5d) != '\0') {
    (**(code **)(*param_1 + 0x48))(param_1);
    local_14 = s_SE_S_DECIDE_002beda8;
    local_18 = iVar1;
    func_00532F70((int)param_1,&local_18,0,0);
    *(undefined1 *)((int)param_1 + 0x5e) = 1;
    return 0;
  }
  (**(code **)(*param_1 + 0x4c))(param_1);
  local_14 = s_SE_S_CANCEL_002bedb4;
  local_18 = iVar1;
  return func_00532F70((int)param_1,&local_18,0,0);
}

