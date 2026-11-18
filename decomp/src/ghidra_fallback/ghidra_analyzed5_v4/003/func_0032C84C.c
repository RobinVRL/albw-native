#include "ghidra_types.h"

extern int func_00248344(int param_1);
extern int func_0032C920(int param_1,float *param_2);
extern int func_004356B4(int *param_1);
extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern undefined4 DAT_0032c8f4;
extern int *DAT_0032c8f8;

// USA 0032C84C <- EU 0032C828 (Ghidra, non-matching)
// GLOBAL DAT_0032c8f4 undefined4
// GLOBAL DAT_0032c8f8 int *

undefined4 func_0032C84C(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define iStack_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  func_0032C920(param_1,&local_20);
  piVar1 = DAT_0032c8f8;
  uStack_28 = DAT_0032c8f4;
  iStack_24 = param_1;
  piVar2 = func_0052FCA4(*DAT_0032c8f8 + 0x3dbbc,&uStack_28,*(int **)(*DAT_0032c8f8 + 0x3dbc0));
  piVar4 = *(int **)(*piVar1 + 0x3dbc8);
  for (; piVar2 != piVar4; piVar2 = func_0052FCA4(*piVar1 + 0x3dbbc,&uStack_28,piVar2 + 1)) {
    if (*piVar2 != 0) {
      func_00248344(*piVar2);
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0xa8) + 0x61) = 1;
  *(uint *)(*(int *)(param_1 + 0xa4) + 0x2c) = *(uint *)(*(int *)(param_1 + 0xa4) + 0x2c) | 0x8000;
  iVar3 = *(int *)(param_1 + 0xa4);
  *(float *)(iVar3 + 4) = local_20;
  *(undefined4 *)(iVar3 + 8) = local_1c;
  *(undefined4 *)(iVar3 + 0xc) = local_18;
  return func_004356B4(*(int **)(param_1 + 0xa4));
}

