#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern float DAT_0024fd68;
extern float DAT_0024fd6c;
extern float DAT_0024fd70;

// USA 0024FC98 <- EU 0024FC98 (Ghidra, non-matching)
// GLOBAL DAT_0024fd68 float
// GLOBAL DAT_0024fd6c float
// GLOBAL DAT_0024fd70 float

void func_0024FC98(int param_1,int param_2,int *param_3,ushort param_4)

{
  float fVar1;
  ushort uVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((uint *)(albw_frame + 0x0))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define iStack_18 (*(int *)(albw_frame + 0x18))
  #define iStack_14 (*(int *)(albw_frame + 0x1c))
  fVar1 = DAT_0024fd6c;
  param_3[0x16] = *(int *)(param_1 + 0x440);
  fStack_24 = DAT_0024fd70;
  local_28 = DAT_0024fd68;
  param_3[0x17] = *(int *)(param_1 + 0x444);
  param_3[0x18] = *(int *)(param_1 + 0x448);
  uVar2 = param_4 & 0x1f | 0xc0;
  local_30[0] = (uint)uVar2;
  *(ushort *)(param_3 + 10) = uVar2;
  fStack_24 = *(float *)(param_1 + 0x444) * fVar1 - fStack_24;
  local_20 = local_28;
  func_00115C54(&local_1c,(float *)(param_1 + 0x3d0),&local_28);
  param_3[1] = (int)ALBW_AS_U32(local_1c);
  param_3[2] = iStack_18;
  param_3[3] = iStack_14;
  func_004356B4(param_3);
  if (param_2 != 0) {
    *(int **)(param_2 + 0x18) = param_3;
    func_004ED9C8(param_2);
    local_30[0] = *(uint *)(param_1 + 0x2cc);
    func_004EDAD0(param_2,local_30);
    *(undefined2 *)(param_2 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  }
  return;
}

