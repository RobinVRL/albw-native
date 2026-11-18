#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_006824D4(int *param_1,float *param_2,undefined4 *param_3,float *param_4);
extern int DAT_004f79c0;
extern int *DAT_004f79c4;
extern undefined4 *DAT_004f79c8;
extern undefined4 *DAT_004f79cc;
extern undefined4 *DAT_004f79d0;
extern undefined4 *DAT_004f79d4;

// USA 004F790C <- EU 004F78E4 (Ghidra, non-matching)
// GLOBAL DAT_004f79c0 int
// GLOBAL DAT_004f79c4 int *
// GLOBAL DAT_004f79c8 undefined4 *
// GLOBAL DAT_004f79cc undefined4 *
// GLOBAL DAT_004f79d0 undefined4 *
// GLOBAL DAT_004f79d4 undefined4 *

void func_004F790C(int param_1,float *param_2,float *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define fStack_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (((*(uint *)(DAT_004f79c0 + 0x2c) & 1) == 0) &&
       (iVar2 = func_00100174(DAT_004f79c4), puVar1 = DAT_004f79c8, iVar2 != 0)) {
      uVar3 = *DAT_004f79cc;
      uVar4 = DAT_004f79cc[1];
      DAT_004f79c8[2] = DAT_004f79cc[2];
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      func_001119F4(puVar1 + 3,DAT_004f79d0);
      func_001119F4(puVar1 + 0xf,DAT_004f79d0);
    }
    func_00115C54(&local_20,param_2,(float *)(param_1 + 0x10));
    local_38 = local_20;
    uStack_34 = uStack_1c;
    uStack_30 = uStack_18;
    local_2c = *(float *)(param_1 + 0x1c) * *param_3;
    fStack_28 = *(float *)(param_1 + 0x20) * param_3[1];
    local_24 = *(float *)(param_1 + 0x24) * param_3[2];
    func_006824D4(*(int **)(param_1 + 0x2c),&local_2c,DAT_004f79d4,&local_38);
  }
  return;
}

