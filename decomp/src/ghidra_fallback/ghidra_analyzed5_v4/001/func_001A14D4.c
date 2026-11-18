#include "ghidra_types.h"

extern int func_004F4A68();
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float DAT_001a1594;
extern int DAT_001a1598;

// USA 001A14D4 <- EU 001A14D4 (Ghidra, non-matching)
// GLOBAL DAT_001a1594 float
// GLOBAL DAT_001a1598 int

undefined4 func_001A14D4(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_r3;
  bool bVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  uVar1 = *(ushort *)(param_2 + 0x20) & 0x1f;
  bVar5 = uVar1 == 6;
  if (bVar5) {
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0xa05) = 1;
  }
  if (!bVar5) {
    uVar1 = 0;
  }
  if (*(char *)(param_1 + 0xa04) == '\0' || uVar1 == 0) {
    fVar6 = *(float *)(param_2 + 8);
    if (fVar6 <= DAT_001a1594) {
      fVar6 = -fVar6;
    }
    local_18 = in_r3;
    if ((int)ALBW_AS_U32(fVar6) < DAT_001a1598) {
      uVar2 = func_0068C690((float *)(param_2 + 4));
      local_18 = uVar2 - (*(int *)(param_1 + 1000) + -0x80000000);
      iVar3 = func_0058E2B8(&local_18);
      if (iVar3 < 0x60000000) {
        *(int *)(param_1 + 0x1174) = *(int *)(param_1 + 0x1174) + (uVar2 >> 0x10);
        *(char *)(param_1 + 0x121c) = *(char *)(param_1 + 0x121c) + '\x01';
      }
    }
    uVar4 = func_004F4A68(param_1,param_2);
    return uVar4;
  }
  return 0;
}

