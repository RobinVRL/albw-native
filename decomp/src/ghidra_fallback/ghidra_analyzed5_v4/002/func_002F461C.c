#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002EEB98(int param_1);
extern int *DAT_002f46b4;
extern uint DAT_002f46b8;
extern undefined4 DAT_002f46bc;
extern float DAT_002f46c0;

// USA 002F461C <- EU 002F45F8 (Ghidra, non-matching)
// GLOBAL DAT_002f46b4 int *
// GLOBAL DAT_002f46b8 uint
// GLOBAL DAT_002f46bc undefined4
// GLOBAL DAT_002f46c0 float

undefined4 func_002F461C(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint in_fpscr;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  *(undefined1 *)(param_1 + 0xe0e) = 1;
  func_002EEB98(param_1);
  uVar1 = DAT_002f46b8;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffff8;
  uVar3 = func_00111A64((uint *)(*DAT_002f46b4 + 0x660));
  uVar2 = DAT_002f46bc;
  iVar4 = (int)((ulonglong)uVar1 * (ulonglong)uVar3 >> 0x20) + 0x5a;
  *(int *)(param_1 + 0xb10) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0xb14) = uVar2;
  }
  else {
    fVar6 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xb14) = DAT_002f46c0 / fVar6;
  }
  *(undefined4 *)(param_1 + 0xb0c) = 0;
  *(undefined1 *)(param_1 + 0xe2c) = 0;
  *(undefined4 *)(param_1 + 0xe1c) = uVar2;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  *(undefined4 *)(param_1 + 0xc24) = 0;
  puVar5 = (uint *)func_002C11E8(aiStack_70,0,0,0);
  return func_0016898C(*(int *)(param_1 + 0xdb4),puVar5);
}

