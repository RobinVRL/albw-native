#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int DAT_004a5170;
extern char s_FullEffects_004a5164[];

// USA 004A50E8 <- EU 004A50C0 (Ghidra, non-matching)
// GLOBAL DAT_004a5170 int
// GLOBAL s_FullEffects_004a5164 string

void func_004A50E8(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if (*(int *)(param_1 + 0x1c) == 0) {
    puVar1 = (undefined4 *)func_0010BAB4(0x74);
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = func_00168434(puVar1);
    }
    func_00168100(piVar2,param_2,param_3);
    *(int **)(param_1 + 0x1c) = piVar2;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
    func_0016773C((int)piVar2,1);
    local_1c = s_FullEffects_004a5164;
    local_20 = DAT_004a5170;
    func_00166C20(piVar2,0,&local_20,0);
    *(int **)(param_1 + 0x28) = piVar2;
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined2 *)(param_1 + 0x20) = 0;
  }
  return;
}

