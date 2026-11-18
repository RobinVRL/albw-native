#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00491D78(float *param_1,float *param_2,float *param_3,float *param_4);
extern int func_0068B134(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern undefined4 DAT_0049528c;
extern float DAT_00495290;
extern undefined4 DAT_00495294;

// USA 004951F0 <- EU 004951C8 (Ghidra, non-matching)
// GLOBAL DAT_0049528c undefined4
// GLOBAL DAT_00495290 float
// GLOBAL DAT_00495294 undefined4

undefined4 func_004951F0(int param_1,undefined4 param_2,float *param_3,int param_4)

{
  float *pfVar1;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float * *)(albw_frame + 0x8))
  #define local_94 (*(float * *)(albw_frame + 0xc))
  #define local_90 (*(int *)(albw_frame + 0x10))
  #define afStack_88 ((float *)(albw_frame + 0x18))
  #define afStack_58 ((float *)(albw_frame + 0x48))
  #define local_28 (*(float *)(albw_frame + 0x78))
  #define local_24 (*(float *)(albw_frame + 0x7c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x80))
  local_98 = (float *)ALBW_PTR_BITS(param_3[3]);
  local_94 = (float *)ALBW_PTR_BITS(param_3[4]);
  if (*(char *)(param_3 + 0xd) == '\0') {
    local_90 = DAT_0049528c;
    func_0068B134(afStack_88,&local_98,param_3);
  }
  else {
    local_90 = DAT_0049528c;
    local_28 = DAT_00495290;
    local_24 = DAT_00495290;
    uStack_20 = DAT_00495294;
    pfVar1 = local_98;
    local_98 = local_94;
    local_94 = pfVar1;
    func_00491D78(afStack_88,(float *)&local_98,&local_28,param_3);
  }
  func_001157FC(afStack_58,(float *)(param_1 + 0x24),afStack_88);
  local_90 = param_4 + 8;
  local_98 = param_3 + 9;
  local_94 = (float *)param_4;
  return (**(code **)(**(int **)(param_1 + 0x20) + 0x1c))
            (*(int **)(param_1 + 0x20),afStack_58,param_2,param_3 + 5);
}

