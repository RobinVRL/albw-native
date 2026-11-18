#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0067FB90(byte *param_1,float *param_2,uint *param_3,int param_4);
extern float DAT_0067fb64;

// USA 0067FB14 <- EU 0067FAEC (Ghidra, non-matching)
// GLOBAL DAT_0067fb64 float

float func_0067FB14(byte *param_1,uint param_2,int param_3)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define local_70 (*(float *)(albw_frame + 0x10))
  #define local_6c (*(float *)(albw_frame + 0x14))
  #define abStack_68 ((byte *)(albw_frame + 0x18))
  #define local_58 (*(float *)(albw_frame + 0x28))
  #define local_54 (*(float *)(albw_frame + 0x2c))
  #define pbStack_14 (*(byte * *)(albw_frame + 0x6c))
  #define uStack_10 (*(uint *)(albw_frame + 0x70))
  #define iStack_c (*(int *)(albw_frame + 0x74))
  local_78 = DAT_0067fb64;
  local_74 = DAT_0067fb64;
  local_70 = DAT_0067fb64;
  local_6c = DAT_0067fb64;
  fVar1 = DAT_0067fb64;
  pbStack_14 = param_1;
  uStack_10 = param_2;
  iStack_c = param_3;
  func_00110D44((undefined4 *)abStack_68,param_1,0x48);
  local_58 = fVar1;
  local_54 = fVar1;
  func_0067FB90(abStack_68,&local_78,&uStack_10,param_3);
  return local_70 - local_78;
}

