#include "ghidra_types.h"

extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_00547B20(int param_1);
extern undefined4 DAT_00634c64;
extern char s_cf_00634c54[];
extern char s_pose_pose_loop_00634c54[];

// USA 00634BE8 <- EU 00634BC0 (Ghidra, non-matching)
// GLOBAL DAT_00634c64 undefined4
// GLOBAL s_cf_00634c54 string

void func_00634BE8(int *param_1,int param_2)

{
  bool bVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  bVar1 = func_00547B20((int)(param_1 + 1));
  if (bVar1) {
    func_003521F0((int)(param_1 + 0xc9),param_2);
    (**(code **)(*param_1 + 0x70))(param_1);
    local_18 = DAT_00634c64;
    param_1[0xb8] = param_1[0xb8] | 2;
    pcStack_14 = s_pose_pose_loop_00634c54;
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

