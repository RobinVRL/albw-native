#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern float DAT_001ff16c;
extern undefined4 DAT_001ff170;

// USA 001FF08C <- EU 001FF08C (Ghidra, non-matching)
// GLOBAL DAT_001ff16c float
// GLOBAL DAT_001ff170 undefined4

undefined4 func_001FF08C(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  bVar4 = *(char *)(param_1 + 0x32) == '\0';
  iVar1 = 0;
  if (!bVar4) {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  if (bVar4 || iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  uVar3 = (uint)*(byte *)(iVar1 + 0x1c);
  if (uVar3 == 0) {
    if (*(float *)(iVar1 + 0x10) < DAT_001ff16c) {
      if (DAT_001ff16c < *(float *)(iVar1 + 8)) goto LAB_001ff144;
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) goto LAB_001ff144;
    uVar3 = *(uint *)(param_1 + 0x20);
    if (-1 < (int)uVar3) {
      param_4 = (int *)0x0;
      *(undefined1 *)(param_1 + 0x32) = 1;
      puVar2 = (uint *)func_002C11E8(aiStack_68,uVar3,0,0);
      param_3 = *(int *)(param_1 + 0x14);
      func_0016898C(param_3,puVar2);
      uVar3 = *(uint *)(*(int *)(param_1 + 0x14) + 0xc);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x14) + 0x10) = DAT_001ff170;
    }
  }
LAB_001ff144:
  func_00169A80(*(int **)(param_1 + 0x14),uVar3,param_3,param_4);
  return func_00168E9C(*(int **)(param_1 + 0x14),*(int *)(param_1 + 8),(int *)0x0);
}

