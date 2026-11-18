#include "ghidra_types.h"

extern int func_00520FD4(void);
extern int func_0058E2B8(int *param_1);
extern float DAT_004c0d3c;
extern float DAT_004c0d40;
extern float DAT_004c0d44;

// USA 004C0CC4 <- EU 004C0C9C (Ghidra, non-matching)
// GLOBAL DAT_004c0d3c float
// GLOBAL DAT_004c0d40 float
// GLOBAL DAT_004c0d44 float

int func_004C0CC4(int param_1)

{
  bool bVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  bVar1 = func_00520FD4();
  if (bVar1) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x8ac) & 0x1000) == 0) {
    local_10 = *(int *)(param_1 + 0x824) + *(int *)(param_1 + 0x820) + *(int *)(param_1 + 1000);
    iVar2 = func_0058E2B8(&local_10);
    fVar4 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = DAT_004c0d3c - fVar4 * DAT_004c0d40;
    fVar4 = DAT_004c0d3c;
    if ((0x3f800000 < (int)ALBW_AS_U32(fVar3)) ||
       (in_fpscr = in_fpscr & 0xfffffff | (uint)(DAT_004c0d44 <= fVar3) << 0x1d,
       fVar4 = DAT_004c0d44, !SUB41(in_fpscr >> 0x1d,0))) {
      fVar3 = fVar4;
    }
    fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x8cc),(byte)(in_fpscr >> 0x15) & 3
                                      );
    return (int)(fVar3 * fVar3 * fVar4);
  }
  return 0;
}

