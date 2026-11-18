#include "ghidra_types.h"


// USA 004A2828 <- EU 004A2800 (Ghidra, non-matching)

void func_004A2828(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(int * *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define iStack_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(int *)(albw_frame + 0x1c))
  uVar3 = *(uint *)(param_1 + 0x3c);
  if ((uVar3 & 0x10) != 0 || (uVar3 & 0x20) != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    local_20 = *(int **)(param_1 + 0xc);
    if (iVar1 != 0) {
      if ((uVar3 & 0x10) != 0) {
        fVar5 = ALBW_AS_F32(local_20[0x17]);
        fVar6 = ALBW_AS_F32(local_20[0x18]);
        fVar7 = *(float *)(param_1 + 0x2c);
        fVar8 = *(float *)(param_1 + 0x30);
        *(float *)(iVar1 + 0x22c) = ALBW_AS_F32(local_20[0x16]) * *(float *)(param_1 + 0x28);
        *(float *)(iVar1 + 0x230) = fVar5 * fVar7;
        *(float *)(iVar1 + 0x234) = fVar6 * fVar8;
      }
      if ((*(uint *)(param_1 + 0x3c) & 0x20) != 0) {
        *(float *)(iVar1 + 0x238) = ALBW_AS_F32(local_20[0x19]) * *(float *)(param_1 + 0x34);
      }
      if ((*(uint *)(param_1 + 0x3c) & 0x10) != 0) {
        piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 0x18) + 8) + 0x38);
        if (piVar4 != (int *)0x0) {
          piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x18) + 0xc) + 0xc);
          local_28 = piVar2[3] + *local_20 * *(int *)(*piVar2 + 0x18) * 4;
          iStack_18 = param_1 + 0x20;
          local_24 = *(undefined4 *)(*piVar2 + 0x18);
          local_1c = *(undefined4 *)(param_1 + 0x18);
          local_14 = param_1;
          (**(code **)(*piVar4 + 0xc))(piVar4,&local_28);
        }
      }
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffffcf;
    }
  }
  return;
}

