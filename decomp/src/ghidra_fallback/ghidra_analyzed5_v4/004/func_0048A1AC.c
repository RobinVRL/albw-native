#include "ghidra_types.h"

extern int func_00489F74(int *param_1,int *param_2,int param_3,int param_4,uint param_5);

// USA 0048A1AC <- EU 0048A184 (Ghidra, non-matching)

int func_0048A1AC(int param_1,int param_2,uint param_3)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_c (*(int *)(albw_frame + 0x4))
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    local_c = 0;
  }
  else {
    local_c = 0;
    func_00489F74(*(int **)(param_1 + 0x10),&local_c,param_1,param_2,param_3);
  }
  return local_c;
}

