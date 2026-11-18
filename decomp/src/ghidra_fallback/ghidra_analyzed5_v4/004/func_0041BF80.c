#include "ghidra_types.h"

extern int func_003E696C(int *param_1,undefined4 *param_2);
extern int func_00407CEC(int param_1);
extern int func_0040E7F4(int param_1);
extern int func_0040F1C4(int param_1,int param_2,int param_3);
extern int func_0040F2E4(void);
extern int func_00410690(undefined4 *param_1,int *param_2);
extern int func_00413394(int *param_1,int *param_2,int param_3);
extern int func_0041365C(int *param_1,int *param_2);
extern int func_00416EF8(int param_1,int param_2,int param_3);
extern int func_00417200(int param_1);
extern int func_00417690(int param_1);
extern int func_0041B66C(int param_1);
extern int func_0041B8B4(int param_1);
extern int func_0041C4F8(int param_1);
extern int func_0041C81C(void);
extern int func_0041C870(int *param_1,int param_2);
extern float DAT_0041c2fc;

// USA 0041BF80 <- EU 0041BF60 (Ghidra, non-matching)
// GLOBAL DAT_0041c2fc float

undefined4 func_0041BF80(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define auStack_4c ((undefined4 *)(albw_frame + 0x4))
  #define auStack_3c ((undefined4 *)(albw_frame + 0x14))
  #define acStack_2c ((char *)(albw_frame + 0x24))
  #define iStack_28 (*(int *)(albw_frame + 0x28))
  #define iStack_24 (*(int *)(albw_frame + 0x2c))
  #define iStack_20 (*(int *)(albw_frame + 0x30))
  piVar2 = (int *)(param_1 + -0x50);
  if (*(char *)(param_1 + 0x114) == '\x01') {
    iVar7 = *(int *)(param_1 + 0x124);
    if (iVar7 == 0) {
      return 0;
    }
    if (*(int *)(iVar7 + 0x14) == 0) {
      return 0;
    }
    puVar3 = *(undefined4 **)(iVar7 + 0x18);
    func_003E696C((int *)(iVar7 + 0x14),puVar3);
    if (puVar3 + -0x20 == (undefined4 *)0x0) {
      return 0;
    }
    *(undefined4 **)(param_1 + 0x128) = puVar3 + -0x20;
    *(undefined1 *)(param_1 + 0x114) = 2;
    *(undefined1 *)(puVar3 + -0x1b) = 0;
    puVar3[-0xc] = 0;
    puVar3[-0xb] = 0;
    puVar3[-7] = 0;
    *(undefined1 *)(puVar3 + -3) = 0;
    puVar3[-10] = 0;
    puVar3[-6] = 0;
    *(undefined1 *)((int)puVar3 + -0xb) = 0;
    puVar3[-9] = 0;
    puVar3[-5] = 0;
    *(undefined1 *)((int)puVar3 + -10) = 0;
    puVar3[-8] = 0;
    puVar3[-4] = 0;
    *(undefined1 *)((int)puVar3 + -9) = 0;
    *(undefined1 *)(puVar3 + -1) = 0;
    uVar9 = *(undefined4 *)(param_1 + 0x130);
    uVar10 = *(undefined4 *)(param_1 + 0x134);
    uVar11 = *(undefined4 *)(param_1 + 0x138);
    uVar12 = *(undefined4 *)(param_1 + 0x13c);
    uVar13 = *(undefined4 *)(param_1 + 0x140);
    uVar14 = *(undefined4 *)(param_1 + 0x144);
    uVar15 = *(undefined4 *)(param_1 + 0x148);
    puVar3[-0x19] = *(undefined4 *)(param_1 + 300);
    puVar3[-0x18] = uVar9;
    puVar3[-0x17] = uVar10;
    puVar3[-0x16] = uVar11;
    puVar3[-0x15] = uVar12;
    puVar3[-0x14] = uVar13;
    puVar3[-0x13] = uVar14;
    puVar3[-0x12] = uVar15;
    uVar9 = *(undefined4 *)(param_1 + 0x14c);
    uVar10 = *(undefined4 *)(param_1 + 0x150);
    uVar11 = *(undefined4 *)(param_1 + 0x154);
    uVar12 = *(undefined4 *)(param_1 + 0x158);
    uVar13 = *(undefined4 *)(param_1 + 0x15c);
    puVar3[-2] = 0;
    puVar3[-0x11] = uVar9;
    puVar3[-0x10] = uVar10;
    puVar3[-0xf] = uVar11;
    puVar3[-0xe] = uVar12;
    puVar3[-0xd] = uVar13;
  }
  else if (*(char *)(param_1 + 0x114) != '\x02') {
    if (*(char *)(param_1 + -0x44) == '\0') {
      return 0;
    }
    goto LAB_0041bf9c;
  }
  iVar7 = *(int *)(param_1 + 0x128);
  if (*(int *)(iVar7 + 0x78) == 0) {
    puVar3 = func_00407CEC(*(int *)(iVar7 + 0x24));
    *(undefined4 **)(iVar7 + 0x78) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    func_0040E7F4((int)puVar3);
  }
  cVar1 = *(char *)(iVar7 + 0x14);
  if (cVar1 == '\0') {
    iVar4 = func_0040F2E4();
    return func_0040F1C4(iVar4,iVar7,1);
  }
  if (cVar1 != '\x03' && cVar1 != '\x04') {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x128);
  if (*(char *)(iVar7 + 0x7c) == '\0') {
    *(undefined1 *)(param_1 + -0x41) = 1;
    return func_0041B8B4((int)piVar2);
  }
  piVar5 = *(int **)(iVar7 + 0x50);
  iStack_28 = *(int *)(param_1 + 0x118);
  auStack_4c[0] = *(undefined4 *)(iVar7 + 0x54);
  auStack_3c[0] = *(undefined4 *)(iVar7 + 100);
  acStack_2c[0] = *(char *)(iVar7 + 0x74);
  auStack_4c[1] = *(undefined4 *)(iVar7 + 0x58);
  auStack_3c[1] = *(undefined4 *)(iVar7 + 0x68);
  acStack_2c[1] = *(undefined1 *)(iVar7 + 0x75);
  auStack_4c[2] = *(undefined4 *)(iVar7 + 0x5c);
  auStack_3c[2] = *(undefined4 *)(iVar7 + 0x6c);
  acStack_2c[2] = *(undefined1 *)(iVar7 + 0x76);
  auStack_4c[3] = *(undefined4 *)(iVar7 + 0x60);
  auStack_3c[3] = *(undefined4 *)(iVar7 + 0x70);
  acStack_2c[3] = *(undefined1 *)(iVar7 + 0x77);
  if (*(char *)(param_1 + -0x44) != '\0') {
    func_0041B8B4((int)piVar2);
  }
  iVar7 = *(int *)(param_1 + 0x40);
  if (iVar7 == 0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  else {
    func_0041365C(&iStack_24,piVar5);
    func_00416EF8(iVar7,iStack_20,iStack_28);
    func_00417690(iVar7);
    uVar6 = 0;
    do {
      func_00410690(piVar2 + uVar6 * 3 + 0x4d,(int *)auStack_4c[uVar6]);
      func_00413394(piVar2 + uVar6 * 4 + 0x3d,(int *)auStack_3c[uVar6],(int)acStack_2c[uVar6]);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
    *(undefined1 *)(param_1 + 0x114) = 3;
    *(undefined1 *)(param_1 + -0x44) = 1;
    piVar5 = func_0041C81C();
    func_0041C870(piVar5,param_1 + -0xc);
    *(undefined1 *)(param_1 + 0x116) = 1;
  }
  if (*(char *)(param_1 + -0x44) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x11c) == '\0') {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x120) + *(int *)(param_1 + 0x1c);
  }
  else if (*(char *)(param_1 + 0x11c) == '\x01') {
    fVar8 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x120),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fVar8;
  }
LAB_0041bf9c:
  if (*(char *)(param_1 + -0x43) != '\0') {
    if ((*(int *)(param_1 + 0x1c) != 0) || (DAT_0041c2fc < *(float *)(param_1 + 0x20))) {
      func_0041C4F8((int)piVar2);
    }
    else if (*(char *)(param_1 + -0x42) == '\0') {
      func_0041B66C((int)piVar2);
    }
    iVar7 = 0;
    do {
      if ((iVar7 < 0x10) && (piVar2[iVar7 + 0x24] != 0)) {
        func_00417200(piVar2[iVar7 + 0x24]);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x10);
  }
  return 0;
}

