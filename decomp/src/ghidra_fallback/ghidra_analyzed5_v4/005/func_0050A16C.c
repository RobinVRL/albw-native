#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int *DAT_0050a26c;
extern float DAT_0050a270;
extern undefined4 DAT_0050a274;

// USA 0050A16C <- EU 0050A144 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_0050a26c int *
// GLOBAL DAT_0050a270 float
// GLOBAL DAT_0050a274 undefined4

void func_0050A16C(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_80 ((int *)(albw_frame + 0x0))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  if ((*(char *)(param_1 + 0x468) == '\0') || (param_2 != 0)) {
    puVar3 = (uint *)func_002C11E8(aiStack_80,0,10,0);
    func_0016898C(*(int *)(param_1 + 0x414),puVar3);
    piVar1 = DAT_0050a26c;
    fVar8 = *(float *)(*(int *)(*(int *)(param_1 + 0x414) + 0x14) + 0x14);
    uVar4 = func_00111A64((uint *)(*DAT_0050a26c + 0x660));
    fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    iVar5 = *(int *)(*(int *)(param_1 + 0x414) + 0x14);
    fVar8 = fVar7 * DAT_0050a270 * fVar8;
    if (*(float *)(iVar5 + 8) != fVar8) {
      *(float *)(iVar5 + 8) = fVar8;
      *(undefined1 *)(iVar5 + 0x26) = 1;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x43c) + 0x61) = 1;
    local_24 = DAT_0050a274;
    uVar2 = local_24;
    (*(undefined2 *)((char *)&local_24 + 0)) = (undefined2)DAT_0050a274;
    *(undefined2 *)(*(int *)(param_1 + 0x444) + 0x28) = (undefined2)local_24;
    *(undefined1 *)(param_1 + 0x464) = 0;
    *(undefined1 *)(param_1 + 0x465) = 0;
    if (*(short *)(param_1 + 0x30) == 1) {
      uVar4 = (uint)*(short *)(param_1 + 0x2e);
      if ((int)uVar4 < 1) {
        uVar4 = 0xb4;
      }
      local_24 = uVar2;
      uVar6 = func_00111A64((uint *)(*piVar1 + 0x660));
      iVar5 = (int)((ulonglong)uVar4 * (ulonglong)uVar6 >> 0x20);
    }
    else {
      iVar5 = (int)*(short *)(param_1 + 0x2e);
      if (iVar5 < 1) {
        iVar5 = 0xb4;
      }
    }
    *(int *)(param_1 + 0x460) = iVar5;
  }
  else {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

