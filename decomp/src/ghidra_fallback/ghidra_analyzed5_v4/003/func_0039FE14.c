#include "ghidra_types.h"

extern int func_002709CC(int param_1);
extern float DAT_0039feec;
extern int *DAT_0039fef0;

// USA 0039FE14 <- EU 0039FDF0 (Ghidra, non-matching)
// GLOBAL DAT_0039feec float
// GLOBAL DAT_0039fef0 int *

undefined4 func_0039FE14(int *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  fVar3 = DAT_0039feec;
  if (*(char *)((int)param_1 + 0x16) == '\0') {
    if ((short)param_1[4] == 0) {
      if (*(short *)((int)param_1 + 0x12) == 0) {
        if ((short)param_1[5] != 0) {
          uVar1 = (short)param_1[5] - 1;
          *(ushort *)(param_1 + 5) = uVar1;
          fVar3 = (float)VectorUnsignedToFloat((uint)uVar1,(byte)(in_fpscr >> 0x15) & 3);
          param_1[0xb] = (int)ALBW_AS_U32((fVar3 * ALBW_AS_F32(param_1[7])));
          if (uVar1 == 0) {
            (**(code **)(*param_1 + 0x10))(param_1);
            uVar2 = 1;
            goto LAB_0039fea8;
          }
        }
      }
      else {
        param_1[0xb] = (int)ALBW_AS_U32(DAT_0039feec);
        *(short *)((int)param_1 + 0x12) = *(short *)((int)param_1 + 0x12) + -1;
      }
    }
    else {
      uVar1 = (short)param_1[4] - 1;
      *(ushort *)(param_1 + 4) = uVar1;
      fVar4 = (float)VectorUnsignedToFloat((uint)uVar1,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0xb] = (int)ALBW_AS_U32((fVar3 - fVar4 * ALBW_AS_F32(param_1[6])));
      if (uVar1 == 0) {
        (**(code **)(*param_1 + 0xc))(param_1);
      }
    }
  }
  uVar2 = 0;
LAB_0039fea8:
  if (((short)param_1[4] == 0) && (*(short *)((int)param_1 + 0x12) != 0)) {
    func_002709CC(*DAT_0039fef0);
  }
  return uVar2;
}

