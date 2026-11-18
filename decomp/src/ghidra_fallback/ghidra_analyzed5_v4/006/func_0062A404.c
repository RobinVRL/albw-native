#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);

// USA 0062A404 <- EU 0062A3DC (Ghidra, non-matching)

void func_0062A404(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((float *)(albw_frame + 0x8))
  #define local_10 (*(float *)(albw_frame + 0x10))
  piVar1 = param_1 + 0x200;
  if (param_3 == 0) {
    if (param_2 == 0) {
      *(undefined2 *)(param_1 + 0x213) = 0;
      param_1[0x204] = param_1[0xb3];
      return;
    }
    iVar2 = *(int *)(param_2 + 0x2cc);
  }
  else {
    if (param_2 != 0) {
      piVar1 = (int *)(uint)*(byte *)(param_1 + 0x216);
    }
    if (param_2 == 0 || piVar1 == (int *)0x1) {
      return;
    }
    *(undefined1 *)((int)param_1 + 0x85f) = 1;
    *(undefined2 *)(param_1 + 0x241) = 0xffff;
    *(undefined2 *)((int)param_1 + 0x906) = 0xffff;
    *(undefined2 *)(param_1 + 0x242) = 0xffff;
    *(undefined2 *)((int)param_1 + 0x90a) = 0xffff;
    *(undefined2 *)(param_1 + 0x243) = 0xffff;
    *(undefined2 *)((int)param_1 + 0x90e) = 0xffff;
    (**(code **)(*param_1 + 0xac))(param_1,(char)param_1[0x215],0xffffffff);
    func_00115C70(local_18,(float *)(param_2 + 0x3d0),(float *)(param_1 + 0xf4));
    iVar2 = func_004904CC(local_18[0],local_10);
    param_1[0x206] = iVar2;
    iVar2 = *(int *)(param_2 + 0x2cc);
  }
  param_1[0x204] = iVar2;
  return;
}

