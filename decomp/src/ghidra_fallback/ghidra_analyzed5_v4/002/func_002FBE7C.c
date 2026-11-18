#include "ghidra_types.h"

extern int func_004FCDF4(int param_1,int param_2);
extern int func_006644B8(undefined4 *param_1,undefined1 param_2);
extern float DAT_002fbec8;
extern int DAT_002fbecc;

// USA 002FBE7C <- EU 002FBE58 (Ghidra, non-matching)
// GLOBAL DAT_002fbec8 float
// GLOBAL DAT_002fbecc int

void func_002FBE7C(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = DAT_002fbecc;
  fVar1 = DAT_002fbec8;
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 0x8e0);
  fVar3 = *(float *)(param_1 + 0x8e0);
  fVar3 = fVar3 + -fVar3 * fVar1;
  *(float *)(param_1 + 0x8e0) = fVar3;
  if ((int)ALBW_AS_U32(fVar3) < iVar2) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffc;
    func_004FCDF4(param_1 + 0x5a8,0);
    func_006644B8((undefined4 *)(param_1 + 0x8bc),0);
  }
  return;
}

