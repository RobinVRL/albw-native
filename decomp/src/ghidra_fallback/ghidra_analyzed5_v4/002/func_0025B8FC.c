#include "ghidra_types.h"

extern int func_0025BDA4(int *param_1,int *param_2);
extern int DAT_0025b994;
extern char s_SE_S_HEART_RECOVER_0025b980[];

// USA 0025B8FC <- EU 0025B924 (Ghidra, non-matching)
// GLOBAL DAT_0025b994 int
// GLOBAL s_SE_S_HEART_RECOVER_0025b980 string

void func_0025B8FC(int param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1[0x1c] == 0 || (piVar1[0x1c] & 3U) == 0) {
    pcStack_c = s_SE_S_HEART_RECOVER_0025b980;
    iStack_10 = DAT_0025b994;
    func_0025BDA4(piVar1,&iStack_10);
  }
  piVar1[0x1a] = 0x1e;
  piVar1[0x1c] = piVar1[0x1c] + 1;
  return;
}

