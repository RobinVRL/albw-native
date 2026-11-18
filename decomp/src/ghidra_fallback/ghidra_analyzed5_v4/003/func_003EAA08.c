#include "ghidra_types.h"

extern int *DAT_003eaa60;
extern float DAT_003eaa64;

// USA 003EAA08 <- EU 003EA9E8 (Ghidra, non-matching)
// GLOBAL DAT_003eaa60 int *
// GLOBAL DAT_003eaa64 float

void func_003EAA08(int param_1,undefined4 *param_2)

{
  int iVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  fVar3 = (float)VectorSignedToFloat(*param_2,(byte)(in_fpscr >> 0x15) & 3);
  pfVar2 = (float *)(iVar1 + (uint)*(ushort *)(iVar1 + 0x558));
  fVar3 = DAT_003eaa64 -
          *(float *)(*DAT_003eaa60 +
                    (param_2[0x54] * (int)ALBW_AS_U32(pfVar2[2]) + (int)(fVar3 * pfVar2[1]) & 0x7fU) * 4) *
          *pfVar2;
  if ((*(ushort *)(iVar1 + 0x54e) & 2) != 0) {
    param_2[0x2a] = ALBW_AS_U32(fVar3);
  }
  if ((*(ushort *)(iVar1 + 0x54e) & 4) != 0) {
    param_2[0x2b] = ALBW_AS_U32(fVar3);
  }
  return;
}

