#include "ghidra_types.h"


// USA 00260FA4 <- EU 00260FCC (Ghidra, non-matching)

undefined4 func_00260FA4(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
    puVar2 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = *puVar2;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
    }
    if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
      *(undefined4 **)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10) * 4) = puVar2;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  *puVar2 = *(undefined4 *)(param_2 + 0x4c);
  puVar2[1] = *(undefined4 *)(param_2 + 4);
  puVar2[2] = *(undefined4 *)(param_3 + 2);
  puVar2[3] = *(undefined4 *)(param_3 + 4);
  puVar2[4] = *(undefined4 *)(param_3 + 6);
  puVar2[5] = *(undefined4 *)(param_3 + 8);
  puVar2[6] = ALBW_AS_U32(*(float *)(param_3 + 8) * *(float *)(param_3 + 8));
  puVar2[7] = (uint)*param_3;
  uVar1 = param_3[1];
  puVar2[8] = (uint)uVar1;
  if ((uVar1 == 0) && (*(int *)(param_1 + 0x524) < *(int *)(param_1 + 0x528))) {
    *(undefined4 **)(*(int *)(param_1 + 0x52c) + *(int *)(param_1 + 0x524) * 4) = puVar2;
    *(int *)(param_1 + 0x524) = *(int *)(param_1 + 0x524) + 1;
  }
  return (undefined4)param_1;
}

