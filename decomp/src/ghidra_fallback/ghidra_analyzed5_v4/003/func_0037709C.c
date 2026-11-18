#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_003771ec;
extern float DAT_003771f0;
extern int DAT_003771f4;
extern int DAT_003771f8;

// USA 0037709C <- EU 00377078 (Ghidra, non-matching)
// GLOBAL DAT_003771ec float
// GLOBAL DAT_003771f0 float
// GLOBAL DAT_003771f4 int
// GLOBAL DAT_003771f8 int

undefined4 func_0037709C(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((float *)(albw_frame + 0x0))
  #define local_18 (*(float *)(albw_frame + 0x8))
  if ((((*(char *)(param_1 + 0x30) == '\0') || ((*(ushort *)(param_2 + 0x20) & 0x7e0) != 0x260)) ||
      ((*(ushort *)(param_2 + 0x20) & 0x1f) == 2)) &&
     ((*(char *)(param_1 + 0x31) == '\0' ||
      (DAT_003771f4 <=
       (int)ALBW_AS_U32((*(float *)(param_2 + 4) * DAT_003771ec + *(float *)(param_2 + 8) * DAT_003771f0 +
            *(float *)(param_2 + 0xc) * DAT_003771ec)))))) {
    uVar1 = *(ushort *)(param_2 + 0x20);
    uVar2 = uVar1 & 0x7e0;
    bVar3 = uVar2 == 0x260;
    if (bVar3) {
      uVar2 = uVar1 & 0x1f;
    }
    if (bVar3 && uVar2 == 2) {
      if ((*(char *)(param_1 + 0x32) == '\0') ||
         (fVar4 = DAT_003771ec, func_004D80A4(local_20,*(uint *)(param_1 + 0x2c),DAT_003771f0),
         *(float *)(param_2 + 4) * local_20[0] + *(float *)(param_2 + 8) * fVar4 +
         *(float *)(param_2 + 0xc) * local_18 <= fVar4)) goto LAB_003771ac;
    }
    else {
      uVar1 = uVar1 & 0x1f;
      if (((uVar1 == 3 || uVar1 == 4) || (uVar1 == 6 || uVar1 == 5)) &&
         ((int)ALBW_AS_U32((*(float *)(param_2 + 4) * DAT_003771ec + *(float *)(param_2 + 8) * DAT_003771f0 +
               *(float *)(param_2 + 0xc) * DAT_003771ec)) <= DAT_003771f8)) {
LAB_003771ac:
        *(char *)(param_1 + 0x1c) = (char)((*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5);
        *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_2 + 0x20);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0xc);
        return 1;
      }
    }
  }
  return 0;
}

