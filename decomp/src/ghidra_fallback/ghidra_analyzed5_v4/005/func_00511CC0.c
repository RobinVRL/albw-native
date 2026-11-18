#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001512E8(int *param_1);
extern int func_00393164(int *param_1);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float DAT_00511e68;
extern float DAT_00511e6c;
extern float DAT_00511e70;
extern float DAT_00511e74;
extern float DAT_00511e78;
extern float DAT_00511e7c;
extern int DAT_00511e80;
extern float DAT_00511e84;
extern float DAT_00511e88;
extern int DAT_00511e8c;
extern float DAT_00511e90;
extern undefined4 DAT_00511e94;

// USA 00511CC0 <- EU 00511C98 (Ghidra, non-matching)
// GLOBAL DAT_00511e68 float
// GLOBAL DAT_00511e6c float
// GLOBAL DAT_00511e70 float
// GLOBAL DAT_00511e74 float
// GLOBAL DAT_00511e78 float
// GLOBAL DAT_00511e7c float
// GLOBAL DAT_00511e80 int
// GLOBAL DAT_00511e84 float
// GLOBAL DAT_00511e88 float
// GLOBAL DAT_00511e8c int
// GLOBAL DAT_00511e90 float
// GLOBAL DAT_00511e94 undefined4

void func_00511CC0(int param_1)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  fVar1 = DAT_00511e6c;
  if ((*(char *)(param_1 + 0x4bd) != '\0') && (*(char *)(param_1 + 0x479) == '\0')) {
    fVar3 = *(float *)(param_1 + 0x3e0) - DAT_00511e68;
    *(float *)(param_1 + 0x3e0) = fVar3;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar1 <= fVar3) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar3 = fVar1;
    }
    *(float *)(param_1 + 0x3e0) = fVar3;
  }
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  fVar3 = DAT_00511e74;
  fVar1 = DAT_00511e70;
  iVar2 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
  if (*(char *)(param_1 + 0x4bd) == '\0') {
    fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x4a4),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar5 = fVar4 * DAT_00511e88;
    if (0x3f800000 < (int)ALBW_AS_U32((fVar4 * DAT_00511e88))) {
      fVar5 = fVar1;
    }
    fVar3 = fVar5 * fVar3;
  }
  else {
    fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x4a4),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar5 = fVar4 * DAT_00511e78;
    if (0x3f800000 < (int)ALBW_AS_U32((fVar4 * DAT_00511e78))) {
      fVar5 = fVar1;
    }
    fVar3 = fVar3 + fVar5 * DAT_00511e7c;
  }
  iVar2 = *(int *)(param_1 + 0x40c);
  if ((int)ALBW_AS_U32(fVar3) < DAT_00511e80) {
    fVar3 = DAT_00511e84;
  }
  func_00115D70(&local_24,(float *)(param_1 + 0x4cc),fVar3);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(float *)(iVar2 + 0x74) = local_24;
  *(undefined4 *)(iVar2 + 0x78) = uStack_20;
  *(undefined4 *)(iVar2 + 0x7c) = uStack_1c;
  func_004CEAF0(*(int *)(param_1 + 0x40c));
  if ((*(char *)(param_1 + 0x479) == '\0') &&
     (DAT_00511e8c <= (int)ALBW_AS_U32((*(float *)(param_1 + 0x4a0) - *(float *)(param_1 + 0x3d4))))) {
    func_00393164((int *)(param_1 + 0x48c));
    *(undefined1 *)(param_1 + 0x479) = 1;
  }
  iVar2 = *(int *)(param_1 + 0x410);
  local_30 = DAT_00511e90;
  uStack_2c = DAT_00511e94;
  local_28 = DAT_00511e90;
  func_00115C70(&local_24,(float *)(param_1 + 0x3d0),&local_30);
  *(float *)(iVar2 + 4) = local_24;
  *(undefined4 *)(iVar2 + 8) = uStack_20;
  *(undefined4 *)(iVar2 + 0xc) = uStack_1c;
  func_004356B4(*(int **)(param_1 + 0x410));
  if (*(char *)(param_1 + 0x4bd) != '\0') {
    func_001512E8(*(int **)(param_1 + 0x4b8));
  }
  return;
}

