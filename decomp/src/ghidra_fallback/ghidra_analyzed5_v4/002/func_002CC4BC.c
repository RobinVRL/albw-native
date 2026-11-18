#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00583B1C(int param_1);
extern int func_00622780(int param_1,int param_2,undefined1 param_3);
extern int DAT_002cc528;
extern char s_SE_TurtleMother_DOCKING_FINISH_002cc508[];

// USA 002CC4BC <- EU 002CC498 (Ghidra, non-matching)
// GLOBAL DAT_002cc528 int
// GLOBAL s_SE_TurtleMother_DOCKING_FINISH_002cc508 string

void func_002CC4BC(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = func_00583B1C((int)param_1);
  if (iVar1 != 0) {
    local_c = s_SE_TurtleMother_DOCKING_FINISH_002cc508;
    local_10 = DAT_002cc528;
    func_00150A84(param_1,&local_10,0);
    (**(code **)(*param_1 + 0xac))(param_1,5,0xffffffff);
    func_00622780((int)param_1,7,0);
    *(undefined1 *)((int)param_1 + 0x9d1) = 1;
  }
  return;
}

