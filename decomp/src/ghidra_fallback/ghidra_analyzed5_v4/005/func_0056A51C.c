#include "ghidra_types.h"

extern float DAT_0056a560;

// USA 0056A51C <- EU 0056A4F4 (Ghidra, non-matching)
// GLOBAL DAT_0056a560 float

float func_0056A51C(uint *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = false;
  iVar2 = 0;
  uVar3 = 0;
  iVar4 = 2;
  do {
    if (((*param_1 & 1 << (uVar3 & 0xff)) != 0) && (iVar2 = iVar2 + 1, uVar3 == 1)) {
      bVar1 = true;
    }
    iVar4 = iVar4 + -1;
    uVar3 = uVar3 + 1;
  } while (iVar4 != 0);
  if ((bVar1) && (iVar2 != 0)) {
    return ALBW_AS_F32(param_1[iVar2]);
  }
  return DAT_0056a560;
}

