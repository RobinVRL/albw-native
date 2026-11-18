#include "ghidra_types.h"

extern int func_003840A0(int param_1,int param_2);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern float DAT_00383eec;

// USA 00383E8C <- EU 00383E68 (Ghidra, non-matching)
// GLOBAL DAT_00383eec float

undefined4 func_00383E8C(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = func_003840A0(param_1,0x4f);
  if ((bVar1) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14), *(char *)(iVar2 + 0x1c) == '\0')) {
    if (*(float *)(iVar2 + 0x10) < DAT_00383eec) {
      if (*(float *)(iVar2 + 8) <= DAT_00383eec) goto LAB_00383ed4;
    }
    else if (*(float *)(iVar2 + 8) == *(float *)(iVar2 + 0x14)) {
LAB_00383ed4:
      return func_003842C0(param_1,0x50,10,1);
    }
  }
  return 0;
}

