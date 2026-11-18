#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00409DE4(int param_1,int *param_2);
extern int func_00569F3C(undefined4 param_1,int param_2,int param_3);
extern int func_0056A0A0(undefined4 param_1,int param_2,int param_3);

// USA 0048EBE8 <- EU 0048EBC0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int *

undefined1 func_0048EBE8(int param_1,int param_2,int param_3,uint param_4,int param_5,int *param_6)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(uint *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(int *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(int *)(albw_frame + 0x28))
  uVar2 = func_00569F3C(param_1 + 4,param_2,param_5);
  uVar3 = func_0010CEE0(uVar2,param_6,0x20);
  *(undefined4 *)(param_1 + 0x120) = uVar3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  else {
    uVar3 = func_0010CEE0(param_3,param_6,0x20);
    *(undefined4 *)(param_1 + 0x128) = uVar3;
    if (param_4 != 0) {
      iVar4 = func_0056A0A0(param_1 + 4,param_2,param_4 + 0x1f & 0xffffffe0);
      *(int *)(param_1 + 0x13c) = iVar4;
      uVar3 = func_0010CEE0(iVar4,param_6,0x20);
      *(undefined4 *)(param_1 + 0x138) = uVar3;
    }
  }
  local_44 = *(undefined4 *)(param_1 + 0x140);
  local_40 = *(undefined4 *)(param_1 + 0x120);
  local_38 = *(undefined4 *)(param_1 + 0x128);
  local_30 = *(undefined4 *)(param_1 + 0x138);
  local_2c = *(undefined4 *)(param_1 + 0x13c);
  local_28 = param_5;
  local_48 = param_2;
  local_3c = uVar2;
  local_34 = param_3;
  uVar1 = func_00409DE4(param_1 + 4,&local_48);
  *(uint *)(param_1 + 0x124) = uVar2;
  *(int *)(param_1 + 300) = param_3;
  return uVar1;
}

