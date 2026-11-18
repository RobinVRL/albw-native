#include "ghidra_types.h"

extern int func_00338DD0(int param_1,int param_2);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern undefined4 DAT_00338cfc;
extern float DAT_00338d00;
extern float DAT_00338d04;

// USA 00338C78 <- EU 00338C54 (Ghidra, non-matching)
// GLOBAL DAT_00338cfc undefined4
// GLOBAL DAT_00338d00 float
// GLOBAL DAT_00338d04 float

void func_00338C78(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  func_00338DD0(param_1,0);
  uVar1 = DAT_00338cfc;
  *(undefined4 *)(param_1 + 0x4c8) = 0x2d;
  *(undefined4 *)(param_1 + 0x4cc) = uVar1;
  fVar5 = DAT_00338d04;
  fVar4 = DAT_00338d00;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  for (iVar3 = 0; iVar3 < *(int *)(*(int *)(*(int *)(param_1 + 0x430) + 0x20) + 4);
      iVar3 = iVar3 + 1) {
    puVar2 = (undefined4 *)func_00584CA8(*(int *)(param_1 + 0x430),iVar3,1);
    local_20 = CONCAT13((char)(int)(fVar4 * fVar5),(int3)*puVar2);
    func_004CF5DC(*(int *)(param_1 + 0x430),iVar3,1,&local_20);
  }
  return;
}

