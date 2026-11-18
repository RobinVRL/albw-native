#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern float DAT_00306394;
extern float DAT_00306398;
extern int DAT_0030639c;
extern char s_SE_JumpStandL_DOWN_003063b4[];
extern char s_SE_JumpStandS_DOWN_003063a0[];

// USA 0030623C <- EU 00306218 (Ghidra, non-matching)
// GLOBAL DAT_00306394 float
// GLOBAL DAT_00306398 float
// GLOBAL DAT_0030639c int
// GLOBAL s_SE_JumpStandL_DOWN_003063b4 string
// GLOBAL s_SE_JumpStandS_DOWN_003063a0 string

undefined4 func_0030623C(int *param_1)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_80 ((int *)(albw_frame + 0x0))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  *(undefined1 *)(param_1[0x111] + 0x44) = 1;
  puVar2 = (uint *)func_002C11E8(aiStack_80,1,10,0);
  func_0016898C(param_1[0x10e],puVar2);
  fVar5 = DAT_00306394;
  iVar3 = *(int *)(param_1[0x10e] + 0x14);
  uVar4 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar3 + 8) == DAT_00306394) << 0x1e;
  if (!SUB41(uVar4 >> 0x1e,0)) {
    *(float *)(iVar3 + 8) = DAT_00306394;
    *(undefined1 *)(iVar3 + 0x26) = 1;
  }
  puVar2 = (uint *)func_002C11E8(aiStack_80,1,10,0);
  func_0016898C(param_1[0x10f],puVar2);
  iVar3 = *(int *)(param_1[0x10f] + 0x14);
  uVar4 = uVar4 & 0xfffffff | (uint)(*(float *)(iVar3 + 8) == fVar5) << 0x1e;
  if (!SUB41(uVar4 >> 0x1e,0)) {
    *(float *)(iVar3 + 8) = fVar5;
    *(undefined1 *)(iVar3 + 0x26) = 1;
  }
  fVar1 = DAT_00306398;
  *(float *)(*(int *)(param_1[0x10f] + 0x14) + 0x10) = DAT_00306398;
  iVar3 = VectorFloatToUnsigned(ALBW_AS_F32(*(undefined4 *)(*(int *)(param_1[0x10e] + 0x14) + 0x14)),3);
  param_1[0x130] = iVar3;
  if (iVar3 == 0) {
    param_1[0x131] = (int)ALBW_AS_U32(fVar5);
  }
  else {
    fVar5 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar4 >> 0x15) & 3);
    param_1[0x131] = (int)ALBW_AS_U32((fVar1 / fVar5));
  }
  param_1[0x12f] = 0;
  local_20 = DAT_0030639c;
  if ((char)param_1[0x12a] == '\x01') {
    local_1c = s_SE_JumpStandL_DOWN_003063b4;
    return func_00150A84(param_1,&local_20,0);
  }
  local_1c = s_SE_JumpStandS_DOWN_003063a0;
  return func_00150A84(param_1,&local_20,0);
}

