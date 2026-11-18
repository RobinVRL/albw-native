#include "ghidra_types.h"

extern int func_0025BDA4(int *param_1,int *param_2);
extern int DAT_0025b994;
extern char s_SE_S_HEART_RECOVER_0025b980[];

// USA 0025B904 <- EU 0025B92C (Ghidra, non-matching)
// GLOBAL DAT_0025b994 int
// GLOBAL s_SE_S_HEART_RECOVER_0025b980 string

void func_0025B904(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (param_1[0x1c] == 0 || (param_1[0x1c] & 3U) == 0) {
    local_c = s_SE_S_HEART_RECOVER_0025b980;
    local_10 = DAT_0025b994;
    func_0025BDA4(param_1,&local_10);
  }
  param_1[0x1a] = 0x1e;
  param_1[0x1c] = param_1[0x1c] + 1;
  return;
}

