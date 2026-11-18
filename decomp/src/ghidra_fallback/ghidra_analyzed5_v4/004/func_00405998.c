#include "ghidra_types.h"

extern int func_00100910(short *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);

// USA 00405998 <- EU 00405978 (Ghidra, non-matching)

uint func_00405998(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int extraout_r1;
  int iVar3;
  bool bVar4;
  
  uVar1 = func_00100910((short *)param_2);
  bVar4 = *(int *)(param_1 + 0xb4) != 0;
  iVar3 = extraout_r1;
  if (bVar4) {
    iVar3 = *(int *)(param_1 + 0xa4);
  }
  if (bVar4 && iVar3 != 0) {
    uVar2 = 0;
    if (*(short *)(param_1 + 0xcc) != 0) {
      uVar2 = (uint)(ushort)(*(short *)(param_1 + 0xcc) - 1);
    }
    if (param_3 < uVar2) {
      if (uVar2 - param_3 < uVar1) {
        uVar1 = uVar2 - param_3;
      }
      func_0010E3C4((uint *)(iVar3 + param_3 * 2),param_2,uVar1 << 1);
      if (**(short **)(param_1 + 0xa4) == 0) {
        *(undefined2 *)(param_1 + 0xce) = 0;
      }
      else {
        *(short *)(param_1 + 0xce) = (short)param_3 + (short)uVar1;
      }
      *(undefined2 *)(*(int *)(param_1 + 0xa4) + (uint)*(ushort *)(param_1 + 0xce) * 2) = 0;
      *(byte *)(param_1 + 0xf4) = *(byte *)(param_1 + 0xf4) | 4;
      return uVar1 & 0xffff;
    }
  }
  return 0;
}

