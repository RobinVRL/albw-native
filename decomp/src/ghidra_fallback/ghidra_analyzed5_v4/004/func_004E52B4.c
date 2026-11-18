#include "ghidra_types.h"

extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined DAT_004e535c;
extern int DAT_004e5370;
extern char s_SE_BombL_FUSE_START_004e5374[];
extern char s__SE_BombL_BORN_004e535f[];
extern undefined4 _DAT_004e535c;

// USA 004E52B4 <- EU 004E528C (Ghidra, non-matching)
// GLOBAL DAT_004e535c undefined
// GLOBAL DAT_004e5370 int
// GLOBAL s_SE_BombL_FUSE_START_004e5374 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_004E52B4(int *param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_80 ((int *)(albw_frame + 0x0))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  puVar2 = (uint *)func_002C11E8(aiStack_80,0,10,0);
  func_0016898C(param_1[0x120],puVar2);
  uVar3 = _DAT_004e535c;
  *(undefined4 *)(*(int *)(param_1[0x120] + 0x14) + 0x10) = _DAT_004e535c;
  puVar2 = (uint *)func_002C11E8(aiStack_80,0,4,0);
  func_0016898C(param_1[0x11f],puVar2);
  iVar1 = DAT_004e5370;
  *(undefined4 *)(*(int *)(param_1[0x11f] + 0x14) + 0x10) = uVar3;
  local_1c = s__SE_BombL_BORN_004e535f + 1;
  local_20 = iVar1;
  func_001509A4((int)param_1,&local_20,0);
  local_1c = s_SE_BombL_FUSE_START_004e5374;
  local_20 = iVar1;
  return func_00150A84(param_1,&local_20,0);
}

