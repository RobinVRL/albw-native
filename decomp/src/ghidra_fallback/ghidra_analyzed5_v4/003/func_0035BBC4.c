#include "ghidra_types.h"

extern int func_001696F8(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);

// USA 0035BBC4 <- EU 0035BBA0 (Ghidra, non-matching)

void func_0035BBC4(int param_1)

{
  uint *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  if (*(int *)(param_1 + 0x410) != 0) {
    puVar1 = (uint *)func_002C11E8(aiStack_68,0,10,0);
    iVar2 = func_001696F8(*(int *)(param_1 + 0x410),puVar1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
      if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
        *(float *)(iVar2 + 8) = *(float *)(iVar2 + 0x14);
        *(undefined1 *)(iVar2 + 0x26) = 1;
      }
    }
  }
  if (*(int *)(param_1 + 0x44c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x44c) + 0x44) = 1;
  }
  *(undefined1 *)(param_1 + 0x448) = 1;
  return;
}

