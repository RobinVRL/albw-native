#include "ghidra_types.h"

extern int func_0010EB00(int param_1,uint param_2,undefined1 param_3,undefined1 param_4);
extern int func_003C8BF0(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,uint param_6 ,int param_7);

// USA 003C7AEC <- EU 003C7AC8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 int
// PARAM param_8 Stack[0xc]:4 int
// PARAM param_9 Stack[0x10]:4 uint
// PARAM param_10 Stack[0x14]:4 int

uint func_003C7AEC(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                  ,int param_6,int param_7,int param_8,uint param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(int * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_24 (*(uint *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  local_1c = param_5;
  local_28 = param_3;
  uStack_24 = param_4;
  local_20 = param_2;
  uVar1 = func_003C8BF0((int *)&local_2c,&local_28,param_6,param_7,param_8,param_9,param_10);
  if (-1 < (int)uVar1) {
    uVar1 = 0x10;
    bVar3 = param_4 >> 0xe == 0x10;
    if (bVar3) {
      uVar1 = param_4 & 0xffff;
    }
    uVar2 = func_0010EB00(param_1,(uint)local_2c,bVar3 && uVar1 == 0x8c,0);
    uVar1 = 0;
    if ((int)uVar2 < 0) {
      (**(code **)(*local_2c + 0x30))(local_2c);
      uVar1 = uVar2;
    }
  }
  return uVar1;
}

