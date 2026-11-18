#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_0058A8F0(int param_1);
extern void func_0065E398();
extern int *DAT_0021f99c;
extern float DAT_0021f9a0;
extern float DAT_0021f9a4;

// USA 0021F88C <- EU 0021F88C (Ghidra, non-matching)
// GLOBAL DAT_0021f99c int *
// GLOBAL DAT_0021f9a0 float
// GLOBAL DAT_0021f9a4 float

void func_0021F88C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  uint in_fpscr;
  float in_s0;
  float fVar5;
  float fVar6;
  
  func_0036BE78(param_1 + 0x8e8);
  if ((*(int *)(*DAT_0021f99c + 0x18) == 0) ||
     (*(int *)(*(int *)(*DAT_0021f99c + 0x18) + 0x10c) < 0)) {
    uVar3 = *(uint *)(param_1 + 0xa6c);
    if (*(uint *)(param_1 + 0xa68) < uVar3) {
      *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) + 1;
    }
    else {
      iVar2 = func_0058A8F0(param_1);
      uVar3 = extraout_r1;
      if (iVar2 != 0) {
        func_0065E398((undefined4 *)(param_1 + 0x8c0),0x16,in_s0);
        uVar3 = extraout_r1_00;
      }
    }
    uVar4 = *(uint *)(param_1 + 0xa6c);
    if (uVar4 != 0) {
      uVar3 = *(uint *)(param_1 + 0xa68);
    }
    fVar5 = DAT_0021f9a0;
    if ((uVar4 != 0 && uVar3 != 0) && (fVar5 = DAT_0021f9a4, uVar3 < uVar4)) {
      fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = fVar5 * *(float *)(param_1 + 0xa70);
    }
    uVar3 = in_fpscr & 0xfffffff | (uint)(fVar5 < DAT_0021f9a0) << 0x1f |
            (uint)(fVar5 == DAT_0021f9a0) << 0x1e;
    uVar4 = uVar3 | (uint)(NAN(fVar5) || NAN(DAT_0021f9a0)) << 0x1c;
    bVar1 = (byte)(uVar3 >> 0x18);
    fVar5 = DAT_0021f9a4;
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar4 >> 0x1c) & 1)) {
      func_004FB4E0(param_1,DAT_0021f9a4);
    }
    iVar2 = *(int *)(param_1 + 0xa6c) - *(int *)(param_1 + 0xa68);
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    fVar6 = (float)VectorSignedToFloat(iVar2,(byte)(uVar4 >> 0x15) & 3);
    *(float *)(param_1 + 0x3d4) =
         *(float *)(param_1 + 0x3d4) +
         (*(float *)(param_1 + 0xa54) - *(float *)(param_1 + 0x3d4)) * (fVar5 / fVar6);
  }
  return;
}

