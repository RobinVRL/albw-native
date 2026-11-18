#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00587CE8(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
extern undefined4 DAT_003a0aec;
extern int DAT_003a0af0;
extern int *DAT_003a0af4;

// USA 003A0A94 <- EU 003A0A70 (Ghidra, non-matching)
// GLOBAL DAT_003a0aec undefined4
// GLOBAL DAT_003a0af0 int
// GLOBAL DAT_003a0af4 int *

void func_003A0A94(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  if (*(int *)(param_1 + 0x394) < 0x2e) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x20);
    *(undefined2 *)(param_1 + 0x32) = 0;
    *(undefined2 *)(param_1 + 0x30) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x30),*(float *)(param_1 + 0x3a0));
    local_10 = DAT_003a0af0;
    *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
    local_c = DAT_003a0aec;
    func_00587CE8(*DAT_003a0af4,&local_10,*(undefined4 *)(**(int **)(param_1 + 0x20) + 0x10),0);
  }
  return;
}

