#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00432F74(undefined4 *param_1);
extern int func_004A8334(int param_1,int param_2,int param_3,int param_4,uint param_5);

// USA 004A8564 <- EU 004A853C (Ghidra, non-matching)

undefined4 func_004A8564(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define uStack_b8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_b4 (*(float *)(albw_frame + 0xc))
  #define uStack_b0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a8 (*(float *)(albw_frame + 0x18))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_9c (*(float *)(albw_frame + 0x24))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x60))
  #define local_5c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x70))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x74))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x78))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x80))
  #define local_3c (*(undefined4 *)(albw_frame + 0x84))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x88))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x8c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x90))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x94))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x98))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_20 (*(float *)(albw_frame + 0xa0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0xa4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0xa8))
  func_00432F74(&uStack_b8);
  func_00115C54(&local_20,(float *)(param_2 + 0xc),(float *)param_2[7]);
  local_b4 = local_20;
  uStack_b0 = uStack_1c;
  uStack_ac = uStack_18;
  func_00115C54(&local_20,(float *)(param_2 + 0xc),(float *)param_2[8]);
  local_9c = local_20;
  uStack_98 = uStack_1c;
  uStack_94 = uStack_18;
  local_a8 = local_20;
  uStack_a4 = uStack_1c;
  uStack_a0 = uStack_18;
  local_60 = param_2[0xb];
  local_5c = *param_2;
  uStack_58 = param_2[1];
  uStack_54 = param_2[2];
  uStack_50 = param_2[3];
  uStack_4c = param_2[4];
  uStack_48 = param_2[5];
  uStack_44 = param_2[6];
  uStack_40 = param_2[7];
  local_3c = param_2[8];
  uStack_38 = param_2[9];
  uStack_34 = param_2[10];
  uStack_30 = param_2[0xb];
  uStack_2c = param_2[0xc];
  uStack_28 = param_2[0xd];
  uStack_24 = param_2[0xe];
  return func_004A8334(param_1,(int)&local_5c,1,(int)&uStack_b8,param_3);
}

