#include "ghidra_types.h"

extern int func_004CF478(int param_1,int param_2);
extern float func_0051D588(int param_1,float *param_2);
extern int func_00520FC0(void);
extern int func_005841D8(int param_1,undefined4 param_2);
extern int func_00584B1C(int param_1,uint param_2);
extern int iRam0024e1e4;
extern int *piRam0024e1ec;
extern undefined4 *puRam0024e1e8;
extern int *DAT_0024e1dc;
extern int DAT_0024e1e0;
extern int *DAT_004eceb0;

// USA 0024E128 <- EU 0024E128 (Ghidra, non-matching)
// GLOBAL DAT_0024e1dc int *
// GLOBAL DAT_0024e1e0 int
// GLOBAL DAT_004eceb0 int *
// GLOBAL UNK_0024e1e4 int
// GLOBAL UNK_0024e1e8 undefined4 *
// GLOBAL UNK_0024e1ec int *

undefined4 func_0024E128(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = func_0051D588(*(int *)(*DAT_0024e1dc + 0x18),(float *)(param_1 + 0x3d0));
  iVar3 = 0;
  func_004CF478(*(int *)(param_1 + 0x40c),(uint)((int)ALBW_AS_U32(fVar4) <= DAT_0024e1e0));
  iVar2 = func_00520FC0();
  *(bool *)(param_1 + 0x709) =
       iRam0024e1e4 <= (int)ALBW_AS_U32((*(float *)(param_1 + 0x3d4) - *(float *)(iVar2 + 4)));
  piVar1 = piRam0024e1ec;
  if (*(char *)(param_1 + 0x70a) == '\0') {
    iVar3 = func_005841D8(*piRam0024e1ec,*puRam0024e1e8);
    iVar3 = iVar3 + 1;
    *(int *)(*(int *)(*piVar1 + 0x3dbe8) + 4) = iVar3;
    *(undefined1 *)(param_1 + 0x70a) = 1;
  }
  iVar2 = *DAT_004eceb0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x44);
  }
  if (iVar2 != 0 && iVar3 != 0) {
    return func_00584B1C(iVar2,param_1);
  }
  return 0;
}

