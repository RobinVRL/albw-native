#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00512E74(int param_1);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern float DAT_005133cc;
extern undefined4 DAT_005133d0;
extern float DAT_005133d4;

// USA 0051335C <- EU 00513334 (Ghidra, non-matching)
// GLOBAL DAT_005133cc float
// GLOBAL DAT_005133d0 undefined4
// GLOBAL DAT_005133d4 float

void func_0051335C(int param_1)

{
  int iVar1;
  float fVar2;
  
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_005133cc;
  if (0x1e < *(int *)(param_1 + 0x48c)) {
    iVar1 = func_00512E74(param_1);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x3e0) = DAT_005133d0;
    }
  }
  fVar2 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x3d4);
  if (fVar2 <= DAT_005133d4) {
    fVar2 = -fVar2;
  }
  if ((*(float *)(param_1 + 0x3e0) < DAT_005133d4) && ((int)ALBW_AS_U32(fVar2) < 0x3f800000)) {
    func_0066B94C((undefined4 *)(param_1 + 0x48c),0xd);
  }
  return;
}

