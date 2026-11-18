#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern float DAT_00306508;
extern undefined4 DAT_0030650c;
extern int DAT_00306510;
extern int DAT_00306514;
extern char s_SE_JumpStandL_UP_0030652c[];
extern char s_SE_JumpStandS_UP_00306518[];

// USA 003063EC <- EU 003063C8 (Ghidra, non-matching)
// GLOBAL DAT_00306508 float
// GLOBAL DAT_0030650c undefined4
// GLOBAL DAT_00306510 int
// GLOBAL DAT_00306514 int
// GLOBAL s_SE_JumpStandL_UP_0030652c string
// GLOBAL s_SE_JumpStandS_UP_00306518 string

undefined4 func_003063EC(int *param_1)

{
  uint *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_78 ((int *)(albw_frame + 0x8))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  *(undefined1 *)(param_1[0x111] + 0x44) = 0;
  puVar1 = (uint *)func_002C11E8(aiStack_78,0,10,0);
  func_0016898C(param_1[0x10e],puVar1);
  iVar2 = *(int *)(param_1[0x10e] + 0x14);
  if (*(float *)(iVar2 + 8) != DAT_00306508) {
    *(float *)(iVar2 + 8) = DAT_00306508;
    *(undefined1 *)(iVar2 + 0x26) = 1;
  }
  puVar1 = (uint *)func_002C11E8(aiStack_78,1,10,0);
  func_0016898C(param_1[0x10f],puVar1);
  iVar2 = *(int *)(param_1[0x10f] + 0x14);
  if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
    *(float *)(iVar2 + 8) = *(float *)(iVar2 + 0x14);
    *(undefined1 *)(iVar2 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(param_1[0x10f] + 0x14) + 0x10) = DAT_0030650c;
  iVar2 = DAT_00306510;
  param_1[0x130] = 7;
  param_1[0x131] = iVar2;
  param_1[0x12f] = 0;
  local_18 = DAT_00306514;
  if ((char)param_1[0x12a] == '\x01') {
    local_14 = s_SE_JumpStandL_UP_0030652c;
    return func_00150A84(param_1,&local_18,0);
  }
  local_14 = s_SE_JumpStandS_UP_00306518;
  return func_00150A84(param_1,&local_18,0);
}

