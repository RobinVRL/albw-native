#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002ADFE4(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5);
extern int func_002AE780(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_004FB2F0(int param_1,float fparam_0);
extern undefined DAT_002ae510;
extern int DAT_002ae528;
extern char s__SE_EN_DROWN_SAND_002ae513[];
extern undefined4 _DAT_002ae510;

// USA 002AE460 <- EU 002AE43C (Ghidra, non-matching)
// GLOBAL DAT_002ae510 undefined
// GLOBAL DAT_002ae528 int
// GLOBAL s_;SE_EN_DROWN_SAND_002ae513 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002AE460(int param_1)

{
  undefined4 uVar1;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_002AE780(param_1);
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) & 0xfff7 | 1;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0xfffffffe;
  func_004FB2F0(*(int *)(param_1 + 0x34),in_s0);
  uVar1 = _DAT_002ae510;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 0x80000000;
  *(undefined4 *)(param_1 + 0x2c) = 0x8c;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x59c) = *(uint *)(*(int *)(param_1 + 0x34) + 0x59c) | 0x800;
  if (-1 < *(short *)(param_1 + 0x18c)) {
    func_004FABDC(*(int *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x18c),0xffffffff,0);
  }
  func_002ADFE4(param_1,0xd,0x1f,0,0);
  local_c = s__SE_EN_DROWN_SAND_002ae513 + 1;
  local_10 = DAT_002ae528;
  return func_00150A84(*(int **)(param_1 + 0x34),&local_10,0);
}

