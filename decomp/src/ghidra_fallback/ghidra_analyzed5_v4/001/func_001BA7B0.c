#include "ghidra_types.h"

extern int func_001B9D54(int param_1,float *param_2,float *param_3,undefined4 *param_4);
extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_00520F54(int param_1,float *param_2,undefined4 param_3);
extern int func_00520FA8(int param_1,int *param_2);
extern int func_0053B0D0(int *param_1,float *param_2,float *param_3,float *param_4);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_001ba8c0;

// USA 001BA7B0 <- EU 001BA7B0 (Ghidra, non-matching)
// GLOBAL DAT_001ba8c0 int *

void func_001BA7B0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  bool bVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_38 ((float *)(albw_frame + 0x8))
  #define local_2c ((float *)(albw_frame + 0x14))
  #define afStack_20 ((float *)(albw_frame + 0x20))
  if ((*(char *)((int)param_1 + 0x477) != '\0') &&
     (((param_1[0x11f] != 3 || ((short)param_1[0xe] == 0)) ||
      (bVar2 = func_00588BF0((int)param_1,1), !bVar2)))) {
    if (*(int *)param_1[0x105] != 0) {
      if ((char)param_1[0x106] == '\0') {
        (**(code **)(*param_1 + 0x4c))(param_1);
      }
      else if ((char)param_1[0x106] == '\x01') {
        (**(code **)(*param_1 + 0x50))(param_1);
      }
      func_0053B0D0((int *)param_1[0x105],afStack_38,local_2c,afStack_20);
      func_001B9D54((int)param_1,afStack_38,local_2c,afStack_20);
    }
    piVar1 = DAT_001ba8c0;
    if ((char)param_1[0x11d] != '\0') {
      func_00520F54((int)param_1,afStack_38,*(undefined4 *)(*DAT_001ba8c0 + 0x1c));
      local_2c[0] = 0.0;
      func_00520FA8((int)param_1,(int *)local_2c);
      func_003413DC(*piVar1,afStack_38,(int *)local_2c);
      *(undefined1 *)(param_1 + 0x11d) = 0;
    }
  }
  return;
}

