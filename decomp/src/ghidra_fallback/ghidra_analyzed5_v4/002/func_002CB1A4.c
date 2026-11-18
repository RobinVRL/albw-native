#include "ghidra_types.h"

extern int func_0017A4F8(int param_1,undefined2 param_2);
extern int func_00582388(uint *param_1,int param_2,uint param_3);
extern int *DAT_002cb37c;
extern float DAT_002cb380;
extern float DAT_002cb384;
extern float DAT_002cb388;

// USA 002CB1A4 <- EU 002CB180 (Ghidra, non-matching)
// GLOBAL DAT_002cb37c int *
// GLOBAL DAT_002cb380 float
// GLOBAL DAT_002cb384 float
// GLOBAL DAT_002cb388 float

undefined4 func_002CB1A4(int param_1,int *param_2,int param_3)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint in_r3;
  uint *puVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  iVar5 = *DAT_002cb37c;
  if (*(short *)(param_3 + 2) == 0) {
    sVar1 = *(short *)(param_3 + 4);
    if (sVar1 == 1) {
      return 0;
    }
    if (sVar1 == 2) {
      if (*(char *)(param_1 + 0x1f) == '\0') {
        return 0;
      }
      if (*(char *)(param_1 + 0x1d) == '\0') {
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*param_2 + 8);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*param_2 + 0xc);
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      fVar6 = DAT_002cb380;
      if (*(ushort *)(param_3 + 8) < 100) {
        fVar6 = DAT_002cb384;
      }
      if (100 < *(ushort *)(param_3 + 8)) {
        fVar6 = DAT_002cb388;
      }
      fVar9 = *(float *)(param_1 + 0x28);
      iVar5 = *param_2;
      *(float *)(iVar5 + 8) = *(float *)(param_1 + 0x24) * fVar6;
      *(float *)(iVar5 + 0xc) = fVar9 * fVar6;
      return 0;
    }
    if (sVar1 != 3) {
      return 0;
    }
    if (*(ushort *)(param_3 + 8) < 0xc) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)*param_2;
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
      puVar4 = (uint *)*param_2;
      uVar3 = (uint)*(ushort *)(param_3 + 8);
      goto LAB_002cb260;
    }
  }
  else {
    if (*(short *)(param_3 + 2) != 1) {
      return 0;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0;
    }
    sVar1 = *(short *)(param_3 + 4);
    if (sVar1 == 8) {
      func_0017A4F8(*(int *)(param_1 + 0x14),
                    (ushort)*(byte *)(param_3 + 8) + (ushort)*(byte *)(param_3 + 9) * 0x100);
      return 0;
    }
    if (sVar1 == 0xc) {
      if (*(char *)(param_1 + 0x1e) == '\0') {
        return 0;
      }
      if (*(char *)(param_1 + 0x1c) == '\0') {
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)*param_2;
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
      puVar4 = (uint *)*param_2;
      if (*(char *)(param_1 + 0x20) == '\0') {
        uVar3 = 9;
      }
      else {
        uVar3 = 0xb;
      }
LAB_002cb260:
      local_10 = in_r3;
      func_00582388(&local_10,iVar5,uVar3);
      *puVar4 = local_10;
      puVar4[1] = local_10;
      return 0;
    }
    if (sVar1 != 0xd) {
      if (sVar1 != 0x11) {
        return 0;
      }
      iVar5 = *param_2;
      uVar8 = ALBW_AS_U32(VectorSignedToFloat((int)(short)((ushort)*(byte *)(param_3 + 10) +
                                              (ushort)*(byte *)(param_3 + 0xb) * 0x100),
                                  (byte)(in_fpscr >> 0x15) & 3));
      uVar7 = ALBW_AS_U32(VectorSignedToFloat((int)(short)((ushort)*(byte *)(param_3 + 8) +
                                              (ushort)*(byte *)(param_3 + 9) * 0x100),
                                  (byte)(in_fpscr >> 0x15) & 3));
      *(undefined4 *)(iVar5 + 0x10) = uVar7;
      *(undefined4 *)(iVar5 + 0x14) = uVar8;
      return 0;
    }
    if (*(char *)(param_1 + 0x1e) == '\0') {
      return 0;
    }
  }
  puVar2 = (undefined4 *)*param_2;
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  *puVar2 = uVar7;
  puVar2[1] = uVar7;
  return 0;
}

