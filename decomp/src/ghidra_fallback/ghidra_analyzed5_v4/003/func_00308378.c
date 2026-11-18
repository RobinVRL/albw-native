#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00664B0C(undefined4 *param_1,undefined1 param_2);
extern int DAT_003083c8;
extern char s_SE_Barrier_EXIST_003083b4[];

// USA 00308378 <- EU 00308354 (Ghidra, non-matching)
// GLOBAL DAT_003083c8 int
// GLOBAL s_SE_Barrier_EXIST_003083b4 string

void func_00308378(int param_1)

{
  bool bVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_003083c8;
  local_c = s_SE_Barrier_EXIST_003083b4;
  func_001507D8(param_1,&local_10,0);
  bVar1 = func_00588BF0(param_1,0);
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x560) = 3;
    func_00664B0C((undefined4 *)(param_1 + 0x40c),1);
  }
  return;
}

