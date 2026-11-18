#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern undefined4 DAT_0026d188;
extern undefined4 DAT_0026d18c;
extern float DAT_0026d190;
extern undefined4 DAT_0026d194;

// USA 0026D050 <- EU 0026D078 (Ghidra, non-matching)
// GLOBAL DAT_0026d188 undefined4
// GLOBAL DAT_0026d18c undefined4
// GLOBAL DAT_0026d190 float
// GLOBAL DAT_0026d194 undefined4

void func_0026D050(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  uint in_r12;
  undefined4 uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  puVar1 = (undefined4 *)func_0010BAB4(0xa8);
  puVar2 = (uint *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_0016A2FC(puVar1,1,DAT_0026d188,1);
  }
  *(uint **)(param_1 + 0x924) = puVar2;
  func_00169608(puVar2,0,param_2,*(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8 + param_3 * 4));
  func_0016A02C(*(int *)(param_1 + 0x924),-1,(int *)0xffffffff,0);
  local_78[1] = 3;
  local_70 = &local_6c;
  local_24 = 10;
  local_20 = 0;
  local_78[0] = 1;
  local_6c = 0;
  local_58 = in_r12 | 0xff;
  local_68 = DAT_0026d190;
  uStack_64 = DAT_0026d18c;
  uStack_60 = DAT_0026d194;
  uStack_5c = DAT_0026d18c;
  uVar4 = DAT_0026d18c;
  fVar5 = DAT_0026d190;
  func_0016898C(*(int *)(param_1 + 0x924),local_78);
  iVar3 = *(int *)(*(int *)(param_1 + 0x924) + 0x14);
  if (*(float *)(iVar3 + 8) != fVar5) {
    *(float *)(iVar3 + 8) = fVar5;
    *(undefined1 *)(iVar3 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x924) + 0x14) + 0x10) = uVar4;
  return;
}

