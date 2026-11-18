#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00581D60(int param_1);
extern uint *DAT_0018b990;
extern int *DAT_0018b994;
extern float DAT_0018b998;
extern float DAT_0018b99c;
extern int *DAT_0018b9a0;

// USA 0018B874 <- EU 0018B874 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_0018b990 uint *
// GLOBAL DAT_0018b994 int *
// GLOBAL DAT_0018b998 float
// GLOBAL DAT_0018b99c float
// GLOBAL DAT_0018b9a0 int *

int * func_0018B874(undefined4 *param_1,float *param_2,uint param_3,undefined2 param_4,
                   undefined4 param_5)

{
  undefined4 uVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2e8 (*(int *)(albw_frame + 0x8))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_2e0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2dc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2c8 (*(uint *)(albw_frame + 0x28))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2c0 (*(undefined2 *)(albw_frame + 0x30))
  #define local_2be (*(undefined2 *)(albw_frame + 0x32))
  #define local_2bc (*(undefined2 *)(albw_frame + 0x34))
  #define local_2a4 (*(float *)(albw_frame + 0x4c))
  #define local_2a0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_29c (*(undefined4 *)(albw_frame + 0x54))
  #define local_298 (*(undefined2 *)(albw_frame + 0x58))
  #define local_28 (*(undefined4 *)(albw_frame + 0x2c8))
  #define local_24 (*(float *)(albw_frame + 0x2cc))
  #define local_20 ((float *)(albw_frame + 0x2d0))
  local_2c8 = 0;
  local_2c4 = 0;
  local_2cc = 0;
  local_2a0 = 0;
  local_29c = 0;
  local_28 = 0;
  func_002DFF7C(&local_2e8);
  local_2e8 = func_0019B04C(*DAT_0018b990);
  uVar1 = func_00581D60(*DAT_0018b994);
  local_298 = (undefined2)uVar1;
  local_2e4 = *param_1;
  uStack_2e0 = param_1[1];
  uStack_2dc = param_1[2];
  local_2c8 = param_3;
  local_2c0 = param_4;
  local_29c = param_5;
  func_00115154(&local_24,local_20,param_3);
  local_2be = (undefined2)
              (int)((*param_2 * local_24 + param_2[1] * DAT_0018b998 + param_2[2] * local_20[0]) *
                   DAT_0018b99c);
  local_2bc = (undefined2)
              (int)((*param_2 * -local_20[0] + param_2[1] * DAT_0018b998 + param_2[2] * local_24) *
                   DAT_0018b99c);
  local_2a4 = SQRT(*param_2 * *param_2 + param_2[2] * param_2[2]);
  piVar2 = func_004C4AF4(*DAT_0018b9a0,&local_2e8,0);
  return piVar2;
}

