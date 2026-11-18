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

// USA 0041BF88 <- EU 0041BF68 (Ghidra, non-matching)
// GLOBAL DAT_0041c2fc float

undefined4 func_0041BF88(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c ((undefined4 *)(albw_frame + 0x4))
  #define local_3c ((undefined4 *)(albw_frame + 0x14))
  #define local_2c ((char *)(albw_frame + 0x24))
  #define local_28 (*(int *)(albw_frame + 0x28))
  #define iStack_24 (*(int *)(albw_frame + 0x2c))
  #define local_20 (*(int *)(albw_frame + 0x30))
  if ((char)param_1[0x59] == '\x01') {
    iVar6 = param_1[0x5d];
    if (iVar6 == 0) {
      return 0;
    }
    if (*(int *)(iVar6 + 0x14) == 0) {
      return 0;
    }
    puVar2 = *(undefined4 **)(iVar6 + 0x18);
    func_003E696C((int *)(iVar6 + 0x14),puVar2);
    if (puVar2 + -0x20 == (undefined4 *)0x0) {
      return 0;
    }
    param_1[0x5e] = (int)(puVar2 + -0x20);
    *(undefined1 *)(param_1 + 0x59) = 2;
    *(undefined1 *)(puVar2 + -0x1b) = 0;
    puVar2[-0xc] = 0;
    puVar2[-0xb] = 0;
    puVar2[-7] = 0;
    *(undefined1 *)(puVar2 + -3) = 0;
    puVar2[-10] = 0;
    puVar2[-6] = 0;
    *(undefined1 *)((int)puVar2 + -0xb) = 0;
    puVar2[-9] = 0;
    puVar2[-5] = 0;
    *(undefined1 *)((int)puVar2 + -10) = 0;
    puVar2[-8] = 0;
    puVar2[-4] = 0;
    *(undefined1 *)((int)puVar2 + -9) = 0;
    *(undefined1 *)(puVar2 + -1) = 0;
    iVar6 = param_1[0x60];
    iVar3 = param_1[0x61];
    iVar8 = param_1[0x62];
    iVar9 = param_1[99];
    iVar10 = param_1[100];
    iVar11 = param_1[0x65];
    iVar12 = param_1[0x66];
    puVar2[-0x19] = param_1[0x5f];
    puVar2[-0x18] = iVar6;
    puVar2[-0x17] = iVar3;
    puVar2[-0x16] = iVar8;
    puVar2[-0x15] = iVar9;
    puVar2[-0x14] = iVar10;
    puVar2[-0x13] = iVar11;
    puVar2[-0x12] = iVar12;
    iVar6 = param_1[0x67];
    iVar3 = param_1[0x68];
    iVar8 = param_1[0x69];
    iVar9 = param_1[0x6a];
    iVar10 = param_1[0x6b];
    puVar2[-2] = 0;
    puVar2[-0x11] = iVar6;
    puVar2[-0x10] = iVar3;
    puVar2[-0xf] = iVar8;
    puVar2[-0xe] = iVar9;
    puVar2[-0xd] = iVar10;
  }
  else if ((char)param_1[0x59] != '\x02') {
    if ((char)param_1[3] == '\0') {
      return 0;
    }
    goto LAB_0041bf9c;
  }
  iVar6 = param_1[0x5e];
  if (*(int *)(iVar6 + 0x78) == 0) {
    puVar2 = func_00407CEC(*(int *)(iVar6 + 0x24));
    *(undefined4 **)(iVar6 + 0x78) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    func_0040E7F4((int)puVar2);
  }
  cVar1 = *(char *)(iVar6 + 0x14);
  if (cVar1 == '\0') {
    iVar3 = func_0040F2E4();
    return func_0040F1C4(iVar3,iVar6,1);
  }
  if (cVar1 != '\x03' && cVar1 != '\x04') {
    return 0;
  }
  iVar6 = param_1[0x5e];
  if (*(char *)(iVar6 + 0x7c) == '\0') {
    *(undefined1 *)((int)param_1 + 0xf) = 1;
    return func_0041B8B4((int)param_1);
  }
  piVar4 = *(int **)(iVar6 + 0x50);
  local_28 = param_1[0x5a];
  local_4c[0] = *(undefined4 *)(iVar6 + 0x54);
  local_3c[0] = *(undefined4 *)(iVar6 + 100);
  local_2c[0] = *(char *)(iVar6 + 0x74);
  local_4c[1] = *(undefined4 *)(iVar6 + 0x58);
  local_3c[1] = *(undefined4 *)(iVar6 + 0x68);
  local_2c[1] = *(undefined1 *)(iVar6 + 0x75);
  local_4c[2] = *(undefined4 *)(iVar6 + 0x5c);
  local_3c[2] = *(undefined4 *)(iVar6 + 0x6c);
  local_2c[2] = *(undefined1 *)(iVar6 + 0x76);
  local_4c[3] = *(undefined4 *)(iVar6 + 0x60);
  local_3c[3] = *(undefined4 *)(iVar6 + 0x70);
  local_2c[3] = *(undefined1 *)(iVar6 + 0x77);
  if ((char)param_1[3] != '\0') {
    func_0041B8B4((int)param_1);
  }
  iVar6 = param_1[0x24];
  if (iVar6 == 0) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  else {
    func_0041365C(&iStack_24,piVar4);
    func_00416EF8(iVar6,local_20,local_28);
    func_00417690(iVar6);
    uVar5 = 0;
    do {
      func_00410690(param_1 + uVar5 * 3 + 0x4d,(int *)local_4c[uVar5]);
      func_00413394(param_1 + uVar5 * 4 + 0x3d,(int *)local_3c[uVar5],(int)local_2c[uVar5]);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
    *(undefined1 *)(param_1 + 0x59) = 3;
    *(undefined1 *)(param_1 + 3) = 1;
    piVar4 = func_0041C81C();
    func_0041C870(piVar4,(int)(param_1 + 0x11));
    *(undefined1 *)((int)param_1 + 0x166) = 1;
  }
  if ((char)param_1[3] == '\0') {
    return 0;
  }
  if ((char)param_1[0x5b] == '\0') {
    param_1[0x1b] = param_1[0x5c] + param_1[0x1b];
  }
  else if ((char)param_1[0x5b] == '\x01') {
    fVar7 = (float)VectorSignedToFloat(param_1[0x5c],(byte)(in_fpscr >> 0x15) & 3);
    param_1[0x1c] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x1c]) + fVar7));
  }
LAB_0041bf9c:
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    if ((param_1[0x1b] != 0) || (DAT_0041c2fc < ALBW_AS_F32(param_1[0x1c]))) {
      func_0041C4F8((int)param_1);
    }
    else if (*(char *)((int)param_1 + 0xe) == '\0') {
      func_0041B66C((int)param_1);
    }
    iVar6 = 0;
    do {
      if ((iVar6 < 0x10) && (param_1[iVar6 + 0x24] != 0)) {
        func_00417200(param_1[iVar6 + 0x24]);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
  }
  return 0;
}

