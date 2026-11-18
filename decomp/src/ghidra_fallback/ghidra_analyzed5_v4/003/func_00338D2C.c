#include "ghidra_types.h"

extern int func_00338DD0(int param_1,int param_2);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern float DAT_00338da4;
extern float DAT_00338da8;

// USA 00338D2C <- EU 00338D08 (Ghidra, non-matching)
// GLOBAL DAT_00338da4 float
// GLOBAL DAT_00338da8 float

void func_00338D2C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  func_00338DD0(param_1,(int)*(short *)(param_1 + 0x2e) + 1U & 0xff);
  fVar3 = DAT_00338da4;
  fVar4 = DAT_00338da8;
  for (iVar2 = 0; iVar2 < *(int *)(*(int *)(*(int *)(param_1 + 0x430) + 0x20) + 4);
      iVar2 = iVar2 + 1) {
    puVar1 = (undefined4 *)func_00584CA8(*(int *)(param_1 + 0x430),iVar2,1);
    local_20 = CONCAT13((char)(int)(fVar3 * fVar4),(int3)*puVar1);
    func_004CF5DC(*(int *)(param_1 + 0x430),iVar2,1,&local_20);
  }
  return;
}

