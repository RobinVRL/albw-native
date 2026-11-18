#include "ghidra_types.h"

extern int func_0010BA78(undefined4 param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int DAT_0029f09c;
extern int *DAT_0029f0a0;
extern float DAT_0029f0a4;
extern float DAT_0029f0a8;

// USA 0029EEB8 <- EU 0029EE94 (Ghidra, non-matching)
// GLOBAL DAT_0029f09c int
// GLOBAL DAT_0029f0a0 int *
// GLOBAL DAT_0029f0a4 float
// GLOBAL DAT_0029f0a8 float

int * func_0029EEB8(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define fStack_40 (*(float *)(albw_frame + 0x10))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  piVar1 = func_00150E40(param_1,param_2);
  iVar2 = DAT_0029f09c;
  piVar1[200] = DAT_0029f09c + 0x54;
  *piVar1 = iVar2;
  *(undefined1 *)(piVar1 + 0x103) = 0;
  iVar2 = func_0054D964((int)piVar1,0);
  piVar1[0x104] = iVar2;
  piVar1[0x108] = 0;
  piVar1[0x109] = 0;
  if (*(char *)((int)piVar1 + 0x5d) == '\0') {
    fVar8 = (float)VectorSignedToFloat((int)(short)piVar1[0xb],(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)((int)piVar1 + 0x2e),
                                       (byte)(in_fpscr >> 0x15) & 3);
    uVar9 = ALBW_AS_U32(VectorSignedToFloat((int)(short)piVar1[0xc],(byte)(in_fpscr >> 0x15) & 3));
    if ((char)piVar1[0x17] == '\0') {
      iVar2 = piVar1[0x104];
      local_28 = fVar8;
      local_24 = fVar7;
      local_20 = uVar9;
      func_00115D88(&local_34,&local_28,DAT_0029f0a4);
      local_48 = local_34;
      uStack_44 = local_30;
      fStack_40 = local_2c;
      func_00115C54((float *)(piVar1 + 0x105),(float *)(iVar2 + 4),&local_48);
      piVar1[0x106] = (int)ALBW_AS_U32((ALBW_AS_F32(piVar1[0x106]) - *(float *)(piVar1[0x104] + 0x5c) * DAT_0029f0a8));
    }
    else {
      local_38 = fVar8;
      local_34 = fVar7;
      local_30 = uVar9;
      func_00115D88(&local_2c,&local_38,DAT_0029f0a4);
      piVar1[0x105] = (int)ALBW_AS_U32(local_2c);
      piVar1[0x106] = (int)ALBW_AS_U32(local_28);
      piVar1[0x107] = (int)ALBW_AS_U32(local_24);
      iVar2 = func_0010BA78((uint)*(byte *)(piVar1 + 0x17) << 2);
      piVar1[0x109] = iVar2;
      iVar2 = 0;
      if ((char)piVar1[0x17] != '\0') {
        do {
          iVar3 = (int)*(short *)((int)param_2 + iVar2 * 6 + 0x5a);
          if (0 < iVar3) {
            *(int *)(piVar1[0x109] + piVar1[0x108] * 4) = iVar3;
            piVar1[0x108] = piVar1[0x108] + 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uint)*(byte *)(piVar1 + 0x17));
      }
    }
  }
  else {
    uVar6 = piVar1[0xa8];
    uVar5 = piVar1[0xa9];
    iVar2 = *DAT_0029f0a0;
    iVar3 = func_00581B9C(iVar2);
    if ((iVar3 == 1) && (puVar4 = (uint *)func_00582250(iVar2), uVar6 < *puVar4)) {
      uVar6 = *(uint *)(puVar4[2] + uVar6 * 4);
    }
    else {
      uVar6 = 0;
    }
    iVar2 = *(int *)(uVar6 + 0x28);
    if (iVar2 != 0) {
      uVar6 = *(uint *)(uVar6 + 0x20);
    }
    if (iVar2 != 0 && uVar5 < uVar6) {
      iVar2 = *(int *)(iVar2 + uVar5 * 4);
    }
    else {
      iVar2 = 0;
    }
    piVar1[0x105] = *(int *)(iVar2 + 0x18);
    piVar1[0x106] = *(int *)(iVar2 + 0x1c);
    piVar1[0x107] = *(int *)(iVar2 + 0x20);
  }
  func_004356B4((int *)piVar1[0x104]);
  return piVar1;
}

