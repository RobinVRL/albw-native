#include "ghidra_types.h"

extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_00547B20(int param_1);
extern undefined4 DAT_0062f0bc;
extern char s_cf_0062f0ac[];
extern char s_pose_pose_loop_0062f0ac[];

// USA 0062F040 <- EU 0062F018 (Ghidra, non-matching)
// GLOBAL DAT_0062f0bc undefined4
// GLOBAL s_cf_0062f0ac string

void func_0062F040(int *param_1,int param_2)

{
  bool bVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  bVar1 = func_00547B20((int)(param_1 + 1));
  if (bVar1) {
    func_003521F0((int)(param_1 + 0xc9),param_2);
    (**(code **)(*param_1 + 0x70))(param_1);
    local_18 = DAT_0062f0bc;
    param_1[0xb8] = param_1[0xb8] | 2;
    pcStack_14 = s_pose_pose_loop_0062f0ac;
    (**(code **)(*param_1 + 0x5c))(param_1,&local_18);
    if (param_2 == 0) {
      param_1[0x206] = param_1[9];
      *(undefined1 *)((int)param_1 + 0x85f) = 1;
      *(char *)((int)param_1 + 0x853) = (char)param_1[0x22c];
      *(char *)((int)param_1 + 0x855) = (char)param_1[0x22c];
    }
  }
  return;
}

