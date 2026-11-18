#include "ghidra_types.h"

extern int func_004EB578(int param_1);
extern float DAT_002d6314;
extern float DAT_002d6318;
extern float DAT_002d631c;
extern int *DAT_002d6320;

// USA 002D62BC <- EU 002D6298 (Ghidra, non-matching)
// GLOBAL DAT_002d6314 float
// GLOBAL DAT_002d6318 float
// GLOBAL DAT_002d631c float
// GLOBAL DAT_002d6320 int *

bool func_002D62BC(int param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  
  bVar4 = (uint)ALBW_AS_U32((*(float *)(param_2 + 4) * DAT_002d6314 + *(float *)(param_2 + 8) * DAT_002d6318 +
                *(float *)(param_2 + 0xc) * DAT_002d6314)) < (uint)ALBW_AS_U32(DAT_002d631c);
  if (bVar4) {
    uVar5 = *(undefined4 *)(param_2 + 0x28);
    uVar1 = *(ushort *)(param_2 + 0x20);
    iVar3 = *(int *)(param_1 + 0x50);
    *(int *)(iVar3 + 0x328) = 1 << (uVar1 & 0x1f);
    piVar2 = DAT_002d6320;
    *(undefined4 *)(iVar3 + 0x338) = uVar5;
    *(char *)(iVar3 + 0x33c) = (char)((uVar1 & 0x7e0) >> 5);
    func_004EB578(*piVar2);
  }
  return bVar4;
}

