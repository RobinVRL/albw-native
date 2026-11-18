#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0036C45C(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern float DAT_00228168;

// USA 00228098 <- EU 00228098 (Ghidra, non-matching)
// GLOBAL DAT_00228168 float

void func_00228098(int param_1)

{
  int iVar1;
  uint *puVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  iVar1 = *(int *)(*(int *)(param_1 + 0x68c) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_00228168) {
      if (DAT_00228168 < *(float *)(iVar1 + 8)) goto LAB_00228118;
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) goto LAB_00228118;
    puVar2 = (uint *)func_002C11E8(aiStack_68,0x11,10,0);
    func_0016898C(*(int *)(param_1 + 0x68c),puVar2);
  }
LAB_00228118:
  func_0036C45C(param_1 + 0x48c);
  if (*(uint *)(param_1 + 0x554) <= *(uint *)(param_1 + 0x550)) {
    func_004CF478(*(int *)(param_1 + 0x594),0);
    func_00151148(*(int *)(param_1 + 0x698),0);
  }
  if (*(int *)(param_1 + 0x578) == 6) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

