#include "ghidra_types.h"

extern int func_0025BDA4(int *param_1,int *param_2);
extern int func_0029740C(int param_1);
extern int func_005471B4(int param_1,int *param_2);
extern int DAT_004ec94c;
extern char s_SE_S_TALK_DECIDE_004ec938[];
extern char s_SE_S_TALK_END_004ec950[];

// USA 004EC8E8 <- EU 004EC8C0 (Ghidra, non-matching)
// GLOBAL DAT_004ec94c int
// GLOBAL s_SE_S_TALK_DECIDE_004ec938 string
// GLOBAL s_SE_S_TALK_END_004ec950 string

void func_004EC8E8(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_0029740C(*(int *)(param_1 + 0x4c));
  local_18 = DAT_004ec94c;
  if (*(short *)(param_1 + 0x76) != 0) {
    local_1c = s_SE_S_TALK_DECIDE_004ec938;
    local_20 = DAT_004ec94c;
    iVar1 = func_005471B4(*(int *)(param_1 + 0x3c),&local_20);
    if (iVar1 != 1) {
      local_14 = s_SE_S_TALK_END_004ec950;
      func_0025BDA4(*(int **)(param_1 + 0x40),&local_18);
    }
  }
  *(undefined2 *)(param_1 + 0x74) = 0xffff;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x76) = 0xffff;
  return;
}

