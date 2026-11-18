#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001512E8(int *param_1);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004E1EB4(int param_1,float *param_2);
extern float DAT_004e2180;

// USA 004E1FCC <- EU 004E1FA4 (Ghidra, non-matching)
// GLOBAL DAT_004e2180 float

undefined4 func_004E1FCC(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x8))
  #define fStack_64 (*(float *)(albw_frame + 0xc))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_54 (*(float *)(albw_frame + 0x1c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x28))
  #define fStack_44 (*(float *)(albw_frame + 0x2c))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  #define fStack_1c (*(float *)(albw_frame + 0x54))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x5c))
  if ((*(int *)(param_1 + 0x420) == 1) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    *(undefined1 *)(param_1 + 0x4c1) = 0;
  }
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  uVar1 = *(uint *)(param_1 + 0x514);
  if (uVar1 < *(uint *)(param_1 + 0x518)) {
    uVar1 = uVar1 + 1;
    *(uint *)(param_1 + 0x514) = uVar1;
  }
  if (*(uint *)(param_1 + 0x518) <= uVar1) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  fStack_1c = *(float *)(param_1 + 0x3d0);
  uStack_18 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_14 = *(undefined4 *)(param_1 + 0x3d8);
  piVar3 = (int *)(param_1 + 0x454);
  iVar2 = *(int *)(param_1 + 0x454);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),&fStack_1c);
  fVar4 = *(float *)(param_1 + 0x508);
  iVar2 = *piVar3;
  uStack_70 = *(undefined4 *)(iVar2 + 0x80);
  uStack_6c = *(undefined4 *)(iVar2 + 0x84);
  uStack_68 = *(undefined4 *)(iVar2 + 0x88);
  fStack_64 = *(float *)(iVar2 + 0x84) * DAT_004e2180 + *(float *)(iVar2 + 0x88) * fVar4 +
              *(float *)(iVar2 + 0x8c) + *(float *)(iVar2 + 0x80) * DAT_004e2180;
  uStack_60 = *(undefined4 *)(iVar2 + 0x90);
  uStack_5c = *(undefined4 *)(iVar2 + 0x94);
  uStack_58 = *(undefined4 *)(iVar2 + 0x98);
  fStack_54 = *(float *)(iVar2 + 0x94) * DAT_004e2180 + *(float *)(iVar2 + 0x98) * fVar4 +
              *(float *)(iVar2 + 0x9c) + *(float *)(iVar2 + 0x90) * DAT_004e2180;
  uStack_50 = *(undefined4 *)(iVar2 + 0xa0);
  uStack_4c = *(undefined4 *)(iVar2 + 0xa4);
  uStack_48 = *(undefined4 *)(iVar2 + 0xa8);
  fStack_44 = *(float *)(iVar2 + 0xa4) * DAT_004e2180 + *(float *)(iVar2 + 0xa8) * fVar4 +
              *(float *)(iVar2 + 0xac) + *(float *)(iVar2 + 0xa0) * DAT_004e2180;
  iVar2 = *piVar3;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar2 + 0x80),&uStack_70);
  func_004E1EB4(param_1,&fStack_1c);
  func_004356B4(*(int **)(param_1 + 0x45c));
  func_004CEAF0(*piVar3);
  func_00491624(afStack_40,0,*(uint *)(param_1 + 1000),0);
  func_0015133C(*(int *)(param_1 + 0x458),afStack_40);
  return func_001512E8(*(int **)(param_1 + 0x458));
}

