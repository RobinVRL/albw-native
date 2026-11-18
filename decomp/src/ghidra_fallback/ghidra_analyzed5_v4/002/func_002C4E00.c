#include "ghidra_types.h"

extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_00662F24(undefined4 *param_1,undefined1 param_2);
extern float DAT_002c4eac;
extern int DAT_002c4eb0;

// USA 002C4E00 <- EU 002C4DDC (Ghidra, non-matching)
// GLOBAL DAT_002c4eac float
// GLOBAL DAT_002c4eb0 int

undefined4 func_002C4E00(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar3);
  fVar3 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 8);
  puVar1 = (undefined4 *)(param_1 + 0x8bc);
  if (*(short *)(param_1 + 0x2e) == 0) {
    if ((DAT_002c4eac < fVar3) || (*(int *)(param_1 + 0x8e0) + 0x20000000U >> 0x1e != 3)) {
      if ((int)ALBW_AS_U32(fVar3) < DAT_002c4eb0) {
        return puVar1;
      }
      if (*(int *)(param_1 + 0x8e0) + 0x20000000U >> 0x1e != 1) {
        return puVar1;
      }
    }
  }
  else if (((uint)ALBW_AS_U32(fVar3) < 0xc0400000) || (*(int *)(param_1 + 0x8e0) + 0x20000000U >> 0x1e != 3)) {
    if (fVar3 < DAT_002c4eac) {
      return puVar1;
    }
    if (*(int *)(param_1 + 0x8e0) + 0x20000000U >> 0x1e != 1) {
      return puVar1;
    }
  }
  uVar2 = func_00662F24(puVar1,0);
  return uVar2;
}

