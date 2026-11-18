#include "ghidra_types.h"

extern int func_00521098(undefined4 param_1,int *param_2);
extern float func_00528734(int param_1,float *param_2,int param_3);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_001a7254;

// USA 001A71A8 <- EU 001A71A8 (Ghidra, non-matching)
// GLOBAL DAT_001a7254 int *

undefined4 func_001A71A8(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  if ((*(int *)(param_2 + 0x34) == 0) || (*(short *)(*(int *)(param_2 + 0x34) + 10) != 4)) {
    if (*(char *)(param_1 + 0x937) == '\0') {
      return 1;
    }
    bVar1 = func_00521098(param_1,(int *)(param_2 + 0x28));
    if (!bVar1) {
      return 1;
    }
  }
  else {
    uVar2 = func_0055696C(*DAT_001a7254,1);
    if (uVar2 < 3) {
      return 0;
    }
    fVar4 = func_00528734(param_1,param_2 + 0x10,(int)*(char *)(param_1 + 0x937));
    fVar3 = fVar4;
    if (0x3e7fffff < (int)ALBW_AS_U32(fVar4)) {
      fVar3 = ALBW_AS_F32((param_1 + 0x800));
    }
    if (0x3e7fffff < (int)ALBW_AS_U32(fVar4)) {
      *(float *)((int)ALBW_AS_U32(fVar3) + 0x15c) = fVar4;
      return 1;
    }
  }
  *(undefined1 *)(param_1 + 0x938) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x8e4) + 0x61) = 0;
  return 1;
}

