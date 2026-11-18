#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_001c52a4;
extern float DAT_001c52a8;
extern undefined4 DAT_001c52ac;

// USA 001C51C8 <- EU 001C51C8 (Ghidra, non-matching)
// GLOBAL DAT_001c52a4 undefined4
// GLOBAL DAT_001c52a8 float
// GLOBAL DAT_001c52ac undefined4

void func_001C51C8(int param_1,uint param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 ((uint *)(albw_frame + 0x0))
  #define puStack_68 (*(uint * *)(albw_frame + 0x8))
  #define local_64 (*(uint *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(uint *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined1 *)(albw_frame + 0x58))
  fVar1 = DAT_001c52a8;
  if (*(byte *)(param_1 + 0x7e1) == param_2) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7b8) + 0x14) + 0x10) = DAT_001c52a4;
    iVar3 = *(int *)(*(int *)(param_1 + 0x7b8) + 0x14);
    if ((*(char *)(iVar3 + 0x1c) == '\0') && (*(float *)(iVar3 + 8) == *(float *)(iVar3 + 0x14))) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x7b8) + 0x14);
      if (*(float *)(iVar3 + 8) != fVar1) {
        *(float *)(iVar2 + 8) = fVar1;
        *(undefined1 *)(iVar2 + 0x26) = 1;
      }
      return;
    }
  }
  else {
    puStack_68 = &local_64;
    local_70[1] = 3;
    local_18 = 0;
    local_70[0] = 1;
    local_60 = DAT_001c52a8;
    local_5c = DAT_001c52a4;
    local_58 = DAT_001c52ac;
    local_50 = unaff_r8 | 0xff;
    local_54 = DAT_001c52a4;
    local_64 = param_2;
    local_1c = param_3;
    func_0016898C(*(int *)(param_1 + 0x7b8),local_70);
    *(char *)(param_1 + 0x7e1) = (char)param_2;
  }
  return;
}

