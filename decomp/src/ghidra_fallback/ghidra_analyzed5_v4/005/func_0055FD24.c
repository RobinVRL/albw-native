#include "ghidra_types.h"

extern int func_0055F308(int *param_1,int param_2,int param_3);
extern int *DAT_0055fda8;
extern float DAT_0055fdac;
extern int *DAT_0055fdb0;
extern int DAT_0055fdb4;

// USA 0055FD24 <- EU 0055FCFC (Ghidra, non-matching)
// GLOBAL DAT_0055fda8 int *
// GLOBAL DAT_0055fdac float
// GLOBAL DAT_0055fdb0 int *
// GLOBAL DAT_0055fdb4 int

uint func_0055FD24(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  if (param_2 == 5 || param_2 == 10) {
    if (*(int *)(*DAT_0055fda8 + 0x44) == 0) {
      iVar1 = param_1[0x12];
      if (*(char *)(iVar1 + 0x936) != '\x02') {
        fVar3 = *(float *)(*(int *)(*DAT_0055fdb0 + 0x1c) + 4) - *(float *)(iVar1 + 0x3d4);
        if (fVar3 <= DAT_0055fdac) {
          fVar3 = -fVar3;
        }
        if (DAT_0055fdb4 < (int)ALBW_AS_U32(fVar3)) {
          return 0;
        }
      }
      iVar1 = (**(code **)(**(int **)(iVar1 + 0xbcc) + 0x1c))(*(int **)(iVar1 + 0xbcc));
      if (iVar1 != 0) goto LAB_0055fd94;
    }
    return 0;
  }
LAB_0055fd94:
  uVar2 = func_0055F308(param_1,param_2,param_3);
  return uVar2;
}

