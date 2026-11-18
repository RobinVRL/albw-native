#include "ghidra_types.h"

extern int func_0025BDA4(int *param_1,int *param_2);
extern int func_0029733C(int param_1);
extern int *DAT_004ec6e4;
extern int DAT_004ec70c;
extern char s_SE_S_TALK_START_004ec6e8[];
extern char s_SE_S_TALK_START_S_004ec6f8[];

// USA 004EC690 <- EU 004EC668 (Ghidra, non-matching)
// GLOBAL DAT_004ec6e4 int *
// GLOBAL DAT_004ec70c int
// GLOBAL s_SE_S_TALK_START_004ec6e8 string
// GLOBAL s_SE_S_TALK_START_S_004ec6f8 string

void func_004EC690(int param_1,int param_2,undefined2 param_3)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  func_0029733C(*(int *)(param_1 + 0x4c));
  *(undefined2 *)(param_1 + 0x76) = param_3;
  if ((*(short *)(param_1 + 0x74) != 0) && ((*(short *)(param_1 + 0x74) == 1 || (param_2 != 0)))) {
    if (*(char *)(param_1 + 0x7c) == '\0') {
      local_1c = s_SE_S_TALK_START_S_004ec6f8;
    }
    else {
      local_1c = s_SE_S_TALK_START_004ec6e8;
    }
    local_20 = DAT_004ec70c;
    func_0025BDA4(*(int **)(*DAT_004ec6e4 + 0x40),&local_20);
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}

