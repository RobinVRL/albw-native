#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002EEB98(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern float DAT_002f1af0;
extern int *DAT_002f1af4;
extern uint DAT_002f1af8;
extern undefined4 DAT_002f1afc;
extern int *DAT_002f1b00;
extern undefined4 DAT_002f1b04;

// USA 002F19C4 <- EU 002F19A0 (Ghidra, non-matching)
// GLOBAL DAT_002f1af0 float
// GLOBAL DAT_002f1af4 int *
// GLOBAL DAT_002f1af8 uint
// GLOBAL DAT_002f1afc undefined4
// GLOBAL DAT_002f1b00 int *
// GLOBAL DAT_002f1b04 undefined4

undefined4 func_002F19C4(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_78 ((int *)(albw_frame + 0x8))
  *(undefined1 *)(param_1 + 0xe0e) = 1;
  func_002EEB98(param_1);
  fVar9 = DAT_002f1af0;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffff8;
  piVar3 = DAT_002f1b00;
  uVar1 = DAT_002f1af8;
  if (*(char *)(param_1 + 0x8cd) == '\x19') {
    *(undefined4 *)(param_1 + 0xb7c) = 1;
    if ((*piVar3 == 0) || (bVar4 = func_00556EAC(*piVar3,0x6a), !bVar4)) {
      *(bool *)(param_1 + 0xe2c) = *(char *)(param_1 + 0xe2c) == '\0';
    }
    puVar7 = (uint *)func_002C11E8(aiStack_78,1,0,0);
    func_0016898C(*(int *)(param_1 + 0xdb4),puVar7);
    uVar2 = DAT_002f1b04;
    *(undefined4 *)(param_1 + 0xb10) = 0x1e;
    *(undefined4 *)(param_1 + 0xb14) = uVar2;
    *(undefined4 *)(param_1 + 0xb0c) = 0;
    return 0;
  }
  uVar5 = func_00111A64((uint *)(*DAT_002f1af4 + 0x660));
  uVar2 = DAT_002f1afc;
  iVar6 = (int)((ulonglong)uVar1 * (ulonglong)uVar5 >> 0x20) + 0x5a;
  *(int *)(param_1 + 0xb10) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0xb14) = uVar2;
  }
  else {
    fVar8 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xb14) = fVar9 / fVar8;
  }
  *(undefined4 *)(param_1 + 0xb0c) = 0;
  *(undefined1 *)(param_1 + 0xe2c) = 1;
  *(undefined4 *)(param_1 + 0xe1c) = uVar2;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  *(undefined4 *)(param_1 + 0xc24) = 0;
  puVar7 = (uint *)func_002C11E8(aiStack_78,1,0,0);
  return func_0016898C(*(int *)(param_1 + 0xdb4),puVar7);
}

