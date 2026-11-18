#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00581D60(int param_1);
extern undefined4 uRam0028aff8;
extern int *piRam0028aff4;
extern int *piRam0028affc;
extern undefined4 *puRam0028aff0;

// USA 0028AEF8 <- EU 0028AF20 (Ghidra, non-matching)
// GLOBAL UNK_0028aff0 uint *
// GLOBAL UNK_0028aff4 int *
// GLOBAL UNK_0028aff8 undefined4
// GLOBAL UNK_0028affc int *

int func_0028AEF8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define iStack_2d8 (*(int *)(albw_frame + 0x8))
  #define uStack_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_2d0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_2c8 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_2b8 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define sStack_2b0 (*(short *)(albw_frame + 0x30))
  #define uStack_2ae (*(undefined2 *)(albw_frame + 0x32))
  #define uStack_290 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_28c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_288 (*(undefined2 *)(albw_frame + 0x58))
  #define uStack_18 (*(uint *)(albw_frame + 0x2c8))
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2bc = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_18 = 0;
  func_002DFF7C(&iStack_2d8);
  iStack_2d8 = func_0019B04C(*puRam0028aff0);
  uVar1 = func_00581D60(*piRam0028aff4);
  uStack_288 = (undefined2)uVar1;
  uStack_2d4 = *param_1;
  uStack_2d0 = param_1[1];
  uStack_2cc = param_1[2];
  uStack_2c0 = uRam0028aff8;
  uStack_2c4 = uRam0028aff8;
  uStack_2c8 = uRam0028aff8;
  sStack_2b0 = *(short *)(param_2 + 0x2c);
  uStack_2ae = *(undefined2 *)(param_2 + 0x2e);
  if (sStack_2b0 == 1) {
    uStack_18 = uStack_18 | 1;
  }
  uStack_28c = *(undefined4 *)(param_2 + 0x2cc);
  piVar2 = func_004C4AF4(*piRam0028affc,&iStack_2d8,0);
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = piVar2[0xb3];
  }
  return iVar3;
}

