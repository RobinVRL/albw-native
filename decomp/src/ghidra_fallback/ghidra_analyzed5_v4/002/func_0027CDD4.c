#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0027D144(int param_1);
extern int func_004356B4(int *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern float DAT_0027cfc8;
extern float DAT_0027cfcc;
extern float DAT_0027cfd0;
extern float DAT_0027cfd4;
extern uint DAT_0027cfd8;
extern float DAT_0027cfdc;

// USA 0027CDD4 <- EU 0027CDFC (Ghidra, non-matching)
// GLOBAL DAT_0027cfc8 float
// GLOBAL DAT_0027cfcc float
// GLOBAL DAT_0027cfd0 float
// GLOBAL DAT_0027cfd4 float
// GLOBAL DAT_0027cfd8 uint
// GLOBAL DAT_0027cfdc float

undefined4 func_0027CDD4(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x594),(byte)(in_fpscr >> 0x15) & 3);
  uVar8 = func_00114608((uint)ALBW_AS_U32((*(float *)(*(int *)(param_1 + 0x5ac) + 0x10) * DAT_0027cfc8 *
                               fVar4 * DAT_0027cfcc * DAT_0027cfd0)),param_2);
  iVar1 = (int)uVar8;
  if (*(char *)(param_1 + 0x5bc) == '\0') {
    if (*(char *)(param_1 + 0x588) == '\0') {
      iVar1 = -iVar1;
    }
    *(int *)(param_1 + 0x5a8) = *(int *)(param_1 + 0x5a8) + iVar1;
  }
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x5a8);
  iVar1 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar1 + 0x80),0,*(uint *)(param_1 + 1000),0);
  iVar1 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar1 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
  func_004CEAF0(*(int *)(param_1 + 0x430));
  func_0027D144(param_1);
  func_004356B4(*(int **)(param_1 + 0x574));
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x58c)) {
    uVar7 = (ulonglong)DAT_0027cfd8;
    fVar4 = DAT_0027cfd4;
    fVar6 = DAT_0027cfdc;
    do {
      fVar5 = (float)VectorSignedToFloat(uVar3 * 2 + -1,(byte)(in_fpscr >> 0x15) & 3);
      local_40 = fVar6 + fVar5 * ALBW_AS_F32(uVar7);
      local_48 = fVar4;
      local_44 = fVar4;
      func_004D7F70(&local_48,*(uint *)(param_1 + 0x5a8));
      func_00115C54(&local_30,(float *)(param_1 + 0x3d0),&local_48);
      local_3c = local_30;
      uStack_38 = uStack_2c;
      uStack_34 = uStack_28;
      piVar2 = (int *)(param_1 + 0x510);
      if (uVar3 < 0xc) {
        piVar2 = piVar2 + uVar3 * 2;
      }
      iVar1 = *piVar2;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == piVar2[1])) {
        func_004A2F38(iVar1,&local_3c);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_1 + 0x58c));
  }
  iVar1 = *(int *)(param_1 + 0x584);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
  return func_004356B4(*(int **)(param_1 + 0x584));
}

