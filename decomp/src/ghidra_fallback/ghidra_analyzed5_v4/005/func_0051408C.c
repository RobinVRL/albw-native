#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern float DAT_005140ec;

// USA 0051408C <- EU 00514064 (Ghidra, non-matching)
// GLOBAL DAT_005140ec float

void func_0051408C(int param_1)

{
  int iVar1;
  uint *puVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  iVar1 = *(int *)(*(int *)(param_1 + 0x4b0) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_005140ec) {
      if (DAT_005140ec < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    puVar2 = (uint *)func_002C11E8(aiStack_68,0,6,0);
    func_0016898C(*(int *)(param_1 + 0x4b0),puVar2);
  }
  return;
}

