#include "ghidra_types.h"

extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int DAT_004bc330;
extern undefined4 DAT_004bc334;
extern undefined4 DAT_004bc338;
extern undefined4 DAT_004bc33c;

// USA 004BC28C <- EU 004BC264 (Ghidra, non-matching)
// GLOBAL DAT_004bc330 int
// GLOBAL DAT_004bc334 undefined4
// GLOBAL DAT_004bc338 undefined4
// GLOBAL DAT_004bc33c undefined4

undefined4 func_004BC28C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 ((uint *)(albw_frame + 0x0))
  #define local_68 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(uint *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined1 *)(albw_frame + 0x58))
  uVar2 = func_0014E904(param_1,2,1);
  *(undefined4 *)(param_1 + 0x440) = uVar2;
  iVar1 = DAT_004bc330;
  uVar3 = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8);
  do {
    func_00169688(*(uint **)(param_1 + 0x440),uVar3,(int *)(iVar1 + uVar3 * 8),iVar4);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 2);
  func_0016A02C(*(int *)(param_1 + 0x440),-1,(int *)0xffffffff,0);
  local_70[1] = 3;
  local_68 = &local_64;
  local_1c = 10;
  local_18 = 0;
  local_70[0] = 1;
  local_64 = 0;
  local_60 = DAT_004bc338;
  local_5c = DAT_004bc334;
  local_58 = DAT_004bc33c;
  local_50 = in_r12 | 0xff;
  local_54 = DAT_004bc334;
  return func_0016898C(*(int *)(param_1 + 0x440),local_70);
}

