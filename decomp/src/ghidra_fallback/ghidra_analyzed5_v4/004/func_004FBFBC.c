#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);

// USA 004FBFBC <- EU 004FBF94 (Ghidra, non-matching)

undefined4 func_004FBFBC(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  iVar3 = 0;
  if (*(int *)(param_1 + 0x418) != 0) {
    iVar3 = **(int **)(*(int *)(param_1 + 0x418) + 0x14);
  }
  if (iVar3 == param_2) {
    if ((param_3 != 0) || (-1 < *(int *)(param_1 + 0x5a0) << 0x14)) {
      puVar2 = (ushort *)(*(int *)(param_1 + 0x510) + 0x38);
      *puVar2 = *puVar2 & 0xfffe;
    }
  }
  else if ((param_3 != 0) || (-1 < *(int *)(param_1 + 0x5a0) << 0x14)) {
    puVar1 = (uint *)func_002C11E8(aiStack_68,param_2,10,0);
    func_0016898C(*(int *)(param_1 + 0x418),puVar1);
    puVar2 = (ushort *)(*(int *)(param_1 + 0x510) + 0x38);
    *puVar2 = *puVar2 & 0xfffe;
    return 1;
  }
  return 0;
}

