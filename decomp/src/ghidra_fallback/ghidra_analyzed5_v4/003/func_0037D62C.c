#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern int func_00520ED8(int param_1);
extern float DAT_0037d6f0;
extern float DAT_0037d6f4;
extern float DAT_0037d6f8;

// USA 0037D62C <- EU 0037D608 (Ghidra, non-matching)
// GLOBAL DAT_0037d6f0 float
// GLOBAL DAT_0037d6f4 float
// GLOBAL DAT_0037d6f8 float

void func_0037D62C(int param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  iVar1 = func_00520ED8(param_1);
  fVar2 = DAT_0037d6f0;
  if (iVar1 == 0) {
    fVar2 = DAT_0037d6f4;
  }
  local_1c = *(float *)(param_1 + 0x448);
  local_1c = local_1c + (fVar2 - local_1c) * DAT_0037d6f8;
  *(float *)(param_1 + 0x448) = local_1c;
  local_20 = *param_3;
  local_1c = param_3[1] + local_1c;
  local_18 = param_3[2];
  iVar1 = *(int *)(param_1 + 0x40c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar1 + 0x80),param_2);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(float *)(iVar1 + 0x8c) = local_20;
    *(float *)(iVar1 + 0x9c) = local_1c;
    *(float *)(iVar1 + 0xac) = local_18;
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(param_1 + 0x460);
    *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_1 + 0x464);
    *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_1 + 0x468);
    func_004CEAF0(iVar1);
  }
  if (*(int *)(param_1 + 0x410) != 0) {
    func_001512B4(*(int *)(param_1 + 0x410),&local_20);
  }
  return;
}

