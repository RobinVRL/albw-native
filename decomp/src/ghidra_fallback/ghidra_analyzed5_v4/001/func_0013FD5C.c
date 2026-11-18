#include "ghidra_types.h"

extern int func_0013EF04(int *param_1);
extern int func_0013F1D0(int param_1,int param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00657580(undefined4 *param_1,undefined1 param_2);
extern float DAT_0013fe30;
extern int *DAT_0013fe34;
extern char s_Break_0013fe28[];

// USA 0013FD5C <- EU 0013FD5C (Ghidra, non-matching)
// GLOBAL DAT_0013fe30 float
// GLOBAL DAT_0013fe34 int *
// GLOBAL s_Break_0013fe28 string

undefined4 func_0013FD5C(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define iStack_c (*(int *)(albw_frame + 0x4))
  if (param_1[0xd1] == 0) {
    iStack_c = 0;
    local_10 = 0;
  }
  else {
    func_004A1B9C(&local_10,param_1[0xd1],(uint *)s_Break_0013fe28);
  }
  if ((local_10 != 0) && (*(int *)(local_10 + 0x1c) == iStack_c)) {
    func_004A2F38(local_10,param_1 + 0xf4);
  }
  func_0013F1D0((int)param_1,0);
  (**(code **)(param_1[200] + 0x30))(param_1 + 200);
  if ((*(short *)((int)param_1 + 0x2e) == 1) &&
     (iVar1 = func_0051E6D0(*DAT_0013fe34,(float *)(param_1 + 0xf4),DAT_0013fe30), iVar1 != 0)) {
    func_0013EF04(param_1);
    func_00588C14((int)param_1,0,1);
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    return 0;
  }
  return func_00657580(param_1 + 0x118,4);
}

