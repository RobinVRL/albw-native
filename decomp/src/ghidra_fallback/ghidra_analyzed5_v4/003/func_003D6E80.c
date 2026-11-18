#include "ghidra_types.h"

extern int DAT_003d6f54;

// USA 003D6E80 <- EU 003D6E60 (Ghidra, non-matching)
// GLOBAL DAT_003d6f54 int

uint func_003D6E80(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  code *in_r3;
  int iVar5;
  code *in_r12;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  iVar1 = DAT_003d6f54;
  iVar5 = DAT_003d6f54 + 0x98;
  local_24 = 0;
  local_20 = 0;
  while( true ) {
    piVar4 = (int *)(iVar1 + (uint)*(byte *)(*param_1 + 8) * 8);
    bVar6 = (piVar4[1] & 1U) == 0;
    if (bVar6) {
      in_r3 = (code *)*piVar4;
    }
    piVar2 = (int *)((int)param_1 + (piVar4[1] >> 1));
    if (!bVar6) {
      in_r3 = *(code **)(*piVar2 + *piVar4);
    }
    local_28 = *param_3;
    uVar3 = (*in_r3)(piVar2,&local_20,&local_28);
    if (uVar3 == 1) {
      *param_2 = *param_3;
      return 0;
    }
    if (uVar3 != 0) {
      return uVar3;
    }
    piVar4 = (int *)(iVar5 + (uint)*(byte *)(*param_1 + 8) * 8);
    bVar6 = (piVar4[1] & 1U) == 0;
    if (bVar6) {
      in_r12 = (code *)*piVar4;
    }
    piVar2 = (int *)((int)param_1 + (piVar4[1] >> 1));
    if (!bVar6) {
      in_r12 = *(code **)(*piVar2 + *piVar4);
    }
    local_28 = *param_3;
    in_r3 = (code *)&local_1c;
    local_1c = local_20;
    uVar3 = (*in_r12)(piVar2,&local_24,&local_28);
    if (1 < uVar3) break;
    *param_3 = local_24;
  }
  return uVar3;
}

