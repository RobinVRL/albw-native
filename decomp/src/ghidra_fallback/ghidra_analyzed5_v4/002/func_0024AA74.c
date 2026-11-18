#include "ghidra_types.h"

extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0065F7E8(undefined4 *param_1,undefined1 param_2);
extern float DAT_0024ab0c;
extern int *DAT_0024ab10;
extern int DAT_0024ab14;

// USA 0024AA74 <- EU 0024AA74 (Ghidra, non-matching)
// GLOBAL DAT_0024ab0c float
// GLOBAL DAT_0024ab10 int *
// GLOBAL DAT_0024ab14 int

void func_0024AA74(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (*(uint *)(param_1 + 0x458) < *(uint *)(param_1 + 0x45c)) {
    *(uint *)(param_1 + 0x458) = *(uint *)(param_1 + 0x458) + 1;
  }
  else {
    pfVar1 = (float *)func_00520FC0();
    fVar3 = *(float *)(param_1 + 8) - *pfVar1;
    fVar4 = *(float *)(param_1 + 0x10) - pfVar1[2];
    fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
    iVar2 = func_0051E6D0(*DAT_0024ab10,(float *)(param_1 + 0x3d0),DAT_0024ab0c);
    if ((iVar2 == 0) && (DAT_0024ab14 <= (int)ALBW_AS_U32(fVar3))) {
      func_0065F7E8((undefined4 *)(param_1 + 0x41c),6);
    }
  }
  return;
}

