#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_001843B0(int param_1);
extern int func_004BC61C(int *param_1);
extern int func_00564A78(int param_1,int *param_2);
extern undefined DAT_00183794;
extern int DAT_0018379c;

// USA 00183738 <- EU 00183738 (Ghidra, non-matching)
// GLOBAL DAT_00183794 undefined
// GLOBAL DAT_0018379c int

void func_00183738(int *param_1)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined * *)(albw_frame + 0x4))
  func_004BC61C(param_1);
  if (2 < *(byte *)((int)param_1 + 0x9f9)) {
    local_c = &DAT_00183794;
    local_10 = DAT_0018379c;
    uVar1 = func_00564A78(param_1[0x1e8],&local_10);
    param_1[0x27b] = uVar1;
    func_001843B0((int)param_1);
    func_00168E9C((int *)param_1[0x265],param_1[0x264],(int *)0x0);
  }
  return;
}

