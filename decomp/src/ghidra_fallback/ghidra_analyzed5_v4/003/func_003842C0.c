#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_003838A8(int param_1,int param_2);
extern int func_003840A0(int param_1,int param_2);
extern float DAT_00384450;

// USA 003842C0 <- EU 0038429C (Ghidra, non-matching)
// GLOBAL DAT_00384450 float

undefined4 func_003842C0(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define aiStack_d0 ((int *)(albw_frame + 0x0))
  #define aiStack_74 ((int *)(albw_frame + 0x5c))
  if (param_2 == 0xd || param_2 == 0xe) {
    iVar2 = func_003838A8(param_1,param_2);
    if (**(int **)(*(int *)(param_1 + 0x20) + 0x14) != iVar2) {
      puVar4 = (uint *)func_002C11E8(aiStack_74,param_2,param_3,0);
      func_0016898C(*(int *)(param_1 + 0x20),puVar4);
    }
  }
  else {
    if ((param_2 == 0x13) &&
       (iVar2 = func_003838A8(param_1,0x14), **(int **)(*(int *)(param_1 + 0x1c) + 0x14) == iVar2))
    {
      return 0;
    }
    if (param_4 == 0) goto LAB_003843b8;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      if (*(float *)(iVar2 + 0x10) < DAT_00384450) {
        if (*(float *)(iVar2 + 8) <= DAT_00384450) goto LAB_003843b8;
      }
      else if (*(float *)(iVar2 + 8) == *(float *)(iVar2 + 0x14)) goto LAB_003843b8;
    }
    bVar1 = func_003840A0(param_1,param_2);
    if (!bVar1) {
LAB_003843b8:
      iVar2 = func_003838A8(param_1,param_2);
      iVar3 = func_003838A8(param_1,0x87);
      if (((**(int **)(*(int *)(param_1 + 0x1c) + 0x14) != iVar3) || (iVar2 < 0)) || (0xe < iVar2))
      {
        puVar4 = (uint *)func_002C11E8(aiStack_74,iVar2,param_3,0);
        func_0016898C(*(int *)(param_1 + 0x1c),puVar4);
      }
      puVar4 = (uint *)func_002C11E8(aiStack_d0,iVar2,param_3,0);
      return func_0016898C(*(int *)(param_1 + 0x20),puVar4);
    }
  }
  return 0;
}

