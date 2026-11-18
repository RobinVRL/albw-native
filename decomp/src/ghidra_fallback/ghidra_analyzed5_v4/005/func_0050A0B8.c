#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined4 DAT_0050a13c;
extern undefined4 DAT_0050a140;

// USA 0050A0B8 <- EU 0050A090 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_0050a13c undefined4
// GLOBAL DAT_0050a140 undefined4

void func_0050A0B8(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  if ((*(char *)(param_1 + 0x468) == '\0') || (param_2 != 0)) {
    if (*(char *)(param_1 + 0x467) != '\0') {
      puVar1 = (uint *)func_002C11E8(aiStack_70,0,10,0);
      func_0016898C(*(int *)(param_1 + 0x410),puVar1);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x410) + 0x14) + 0x10) = DAT_0050a13c;
      func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
      *(undefined4 *)(param_1 + 0x45c) = DAT_0050a140;
    }
    *(undefined1 *)(param_1 + 0x465) = 0;
    iVar2 = (int)*(short *)(param_1 + 0x2e);
    if (iVar2 < 1) {
      iVar2 = 0xb4;
    }
    *(int *)(param_1 + 0x460) = iVar2;
  }
  else {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

