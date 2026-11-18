#include "ghidra_types.h"

extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_00547B20(int param_1);
extern undefined4 DAT_0062e228;
extern char s_cf_0062e218[];
extern char s_pose_pose_loop_0062e218[];

// USA 0062E1AC <- EU 0062E184 (Ghidra, non-matching)
// GLOBAL DAT_0062e228 undefined4
// GLOBAL s_cf_0062e218 string

void func_0062E1AC(int *param_1,int param_2)

{
  bool bVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  bVar1 = func_00547B20((int)(param_1 + 1));
  if (bVar1) {
    func_003521F0((int)(param_1 + 0xc9),param_2);
    (**(code **)(*param_1 + 0x70))(param_1);
    local_18 = DAT_0062e228;
    param_1[0xb8] = param_1[0xb8] | 2;
    pcStack_14 = s_pose_pose_loop_0062e218;
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

