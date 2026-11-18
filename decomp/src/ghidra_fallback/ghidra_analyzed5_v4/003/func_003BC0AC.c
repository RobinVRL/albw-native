#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern char *DAT_003bc1e4;
extern float DAT_003bc1e8;
extern undefined4 DAT_003bc1ec;
extern undefined4 DAT_003bc1f0;

// USA 003BC0AC <- EU 003BC088 (Ghidra, non-matching)
// GLOBAL DAT_003bc1e4 char *
// GLOBAL DAT_003bc1e8 float
// GLOBAL DAT_003bc1ec undefined4
// GLOBAL DAT_003bc1f0 undefined4

void func_003BC0AC(int param_1,int *param_2)

{
  int iVar1;
  uint unaff_r7;
  float fVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define local_70 (*(uint * *)(albw_frame + 0x10))
  #define local_6c (*(uint *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  uVar3 = DAT_003bc1f0;
  iVar1 = *param_2;
  if (iVar1 == 0) {
    local_78[1] = 3;
    local_70 = &local_6c;
    if ((int)*DAT_003bc1e4 == 0) {
      local_6c = 3;
    }
    else {
      local_6c = 2;
    }
    local_24 = 0;
    local_20 = 0;
    local_78[0] = 1;
    local_60 = DAT_003bc1ec;
    local_5c = DAT_003bc1e8;
    local_58 = unaff_r7 | 0xff;
    local_68 = DAT_003bc1f0;
    local_64 = DAT_003bc1e8;
    fVar2 = DAT_003bc1e8;
    func_0016898C(*(int *)(param_1 + 0x1f8),local_78);
    iVar1 = *(int *)(param_1 + 0x1f8);
  }
  else {
    if (iVar1 == 2) {
      local_78[1] = 3;
      local_70 = &local_6c;
      local_6c = (int)*DAT_003bc1e4 ^ 1;
      local_24 = 0;
      local_20 = 0;
      local_78[0] = 1;
      local_68 = DAT_003bc1f0;
      local_64 = DAT_003bc1e8;
      local_60 = DAT_003bc1ec;
      local_58 = unaff_r7 | 0xff;
      local_5c = DAT_003bc1e8;
      fVar2 = DAT_003bc1e8;
      func_0016898C(*(int *)(param_1 + 0x1f8),local_78);
      return;
    }
    if (iVar1 != 3) {
      return;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1f8) + 0x14);
    fVar2 = *(float *)(iVar1 + 0x14);
    if (*(float *)(iVar1 + 8) != fVar2) {
      *(float *)(iVar1 + 8) = fVar2;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_00168E9C(*(int **)(param_1 + 0x1f8),*(int *)(param_1 + 500),(int *)0x1);
    iVar1 = *(int *)(param_1 + 0x1f8);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x10) = uVar3;
  return;
}

