#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001696F8(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0068C690(float *param_1);
extern int *DAT_0017b7d8;
extern float DAT_0017b7dc;
extern undefined4 DAT_0017b7e0;
extern float DAT_0017b7e4;
extern float DAT_0017b7e8;
extern float DAT_0017b7ec;
extern float DAT_0017b7f0;
extern undefined4 DAT_0017b7f4;

// USA 0017B688 <- EU 0017B688 (Ghidra, non-matching)
// GLOBAL DAT_0017b7d8 int *
// GLOBAL DAT_0017b7dc float
// GLOBAL DAT_0017b7e0 undefined4
// GLOBAL DAT_0017b7e4 float
// GLOBAL DAT_0017b7e8 float
// GLOBAL DAT_0017b7ec float
// GLOBAL DAT_0017b7f0 float
// GLOBAL DAT_0017b7f4 undefined4

undefined4 func_0017B688(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define aiStack_a0 ((int *)(albw_frame + 0x0))
  #define local_44 (*(float *)(albw_frame + 0x5c))
  #define fStack_40 (*(float *)(albw_frame + 0x60))
  #define local_3c (*(float *)(albw_frame + 0x64))
  #define afStack_38 ((float *)(albw_frame + 0x68))
  puVar2 = (uint *)(*DAT_0017b7d8 + 0x660);
  uVar3 = func_00111A64(puVar2);
  fVar7 = DAT_0017b7dc;
  iVar4 = (int)((ulonglong)uVar3 * 0x78 >> 0x20) + 0x3c;
  if (iVar4 == 0) {
    in_s0 = DAT_0017b7e0;
  }
  *(int *)(param_1 + 0x854) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x858) = in_s0;
  }
  else {
    fVar5 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x858) = fVar7 / fVar5;
  }
  *(undefined4 *)(param_1 + 0x850) = 0;
  uVar3 = func_00111A64(puVar2);
  fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = fVar5 * DAT_0017b7e4 * fVar7 + DAT_0017b7e8;
  fVar5 = DAT_0017b7ec;
  fVar9 = DAT_0017b7e4;
  fVar10 = DAT_0017b7e8;
  uVar3 = func_00111A64(puVar2);
  fVar6 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * fVar9 * fVar5 + DAT_0017b7f0;
  uVar3 = func_00111A64(puVar2);
  fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  local_3c = fVar5 * fVar9 * fVar7 + fVar10;
  local_44 = fVar8;
  fStack_40 = fVar6;
  func_00115C54((float *)(param_1 + 0x838),(float *)(param_1 + 0x844),&local_44);
  uVar1 = DAT_0017b7f4;
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined4 *)(param_1 + 0x888) = uVar1;
  func_00115C70(afStack_38,(float *)(param_1 + 0x838),(float *)(param_1 + 0x3d0));
  iVar4 = func_0068C690(afStack_38);
  *(int *)(param_1 + 0x870) = iVar4;
  puVar2 = (uint *)func_002C11E8(aiStack_a0,0,10,0);
  return func_001696F8(*(int *)(param_1 + 0x7b4),puVar2);
}

