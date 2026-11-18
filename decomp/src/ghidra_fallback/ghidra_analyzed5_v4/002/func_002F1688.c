#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0036BFD0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FBFBC(int param_1,int param_2,int param_3);
extern float fRam002f1740;
extern undefined4 uRam002f1744;
extern float DAT_002f152c;
extern float DAT_002f1534;
extern undefined4 *DAT_002f1738;
extern undefined4 DAT_002f173c;

// USA 002F1688 <- EU 002F1664 (Ghidra, non-matching)
// GLOBAL DAT_002f152c float
// GLOBAL DAT_002f1534 float
// GLOBAL DAT_002f1738 undefined4 *
// GLOBAL DAT_002f173c undefined4
// GLOBAL UNK_002f1740 float
// GLOBAL UNK_002f1744 undefined4

/* WARNING: Removing unreachable block (ram,0x002f14fc) */
/* WARNING: Removing unreachable block (ram,0x002f1508) */

void func_002F1688(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  undefined8 uVar3;
  
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 2;
  *(undefined4 *)(param_1 + 0xc28) = 0;
  *(undefined1 *)(param_1 + 0xa58) = 3;
  *(int *)(param_1 + 0x990) = param_1 + 0xce8;
  *(undefined1 *)(*(int *)(param_1 + 0x970) + 0x13) = 0xc;
  func_0036C2B8(param_1 + 0x964,*DAT_002f1738);
  func_0036BFD0(param_1 + 0x964,0,0x1e);
  *(undefined1 *)(param_1 + 0xa5e) = 1;
  uVar1 = DAT_002f173c;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  *(undefined4 *)(param_1 + 0xb10) = 0;
  *(undefined4 *)(param_1 + 0xb14) = uVar1;
  *(undefined4 *)(param_1 + 0xb0c) = 0;
  func_004FABDC(param_1,0x1a,0,0);
  func_004FBFBC(param_1,2,0);
  fVar2 = fRam002f1740;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x200;
  *(undefined4 *)(param_1 + 0xc70) = uRam002f1744;
  uVar3 = func_00114608((uint)ALBW_AS_U32((fVar2 * DAT_002f152c)),0xfa);
  *(int *)(param_1 + 0xc68) = (int)uVar3;
  *(undefined4 *)(param_1 + 0xc78) = 0xfa;
  fVar2 = (float)VectorUnsignedToFloat(0xfa,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0xc7c) = DAT_002f1534 / fVar2;
  *(undefined4 *)(param_1 + 0xc74) = 0;
  return;
}

