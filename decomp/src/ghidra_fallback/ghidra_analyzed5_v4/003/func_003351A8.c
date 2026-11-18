#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_003351ec;
extern int DAT_003351fc;
extern char s_SE_OBJ_FALL_003351f0[];

// USA 003351A8 <- EU 00335184 (Ghidra, non-matching)
// GLOBAL DAT_003351ec int
// GLOBAL DAT_003351fc int
// GLOBAL s_SE_OBJ_FALL_003351f0 string

void func_003351A8(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = DAT_003351ec;
  param_1[0xf9] = DAT_003351ec;
  param_1[0xf7] = iVar1;
  param_1[0xb8] = param_1[0xb8] & 0xfffffffd;
  if ((char)param_1[0x14c] != '\0') {
    local_c = s_SE_OBJ_FALL_003351f0;
    local_10 = DAT_003351fc;
    func_00150A84(param_1,&local_10,0);
    *(undefined1 *)(param_1 + 0x14c) = 0;
    *(undefined1 *)((int)param_1 + 0x531) = 1;
  }
  return;
}

