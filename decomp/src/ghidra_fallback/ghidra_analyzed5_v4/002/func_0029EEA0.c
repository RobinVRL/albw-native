#include "ghidra_types.h"

extern float func_0051D588(int param_1,float *param_2);
extern int func_00581C9C(int param_1,int param_2);
extern float DAT_0014f7f8;
extern int *DAT_0014f7fc;
extern int *DAT_0014f800;

// USA 0029EEA0 <- EU 0029EE7C (Ghidra, non-matching)
// GLOBAL DAT_0014f7f8 float
// GLOBAL DAT_0014f7fc int *
// GLOBAL DAT_0014f800 int *

undefined4 func_0014F794(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (DAT_0014f7f8 <= *(float *)(param_1 + 0x3ac)) {
    fVar2 = func_0051D588(*(int *)(*DAT_0014f7fc + 0x18),(float *)(param_1 + 0x3d0));
    if (*(float *)(param_1 + 0x3ac) < fVar2) {
      return 0;
    }
    iVar1 = func_00581C9C(*DAT_0014f800,(int)*(short *)(param_1 + 0x54));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

