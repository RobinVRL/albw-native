#include "ghidra_types.h"

extern int func_0010013C(int param_1,int param_2,undefined4 param_3,uint *param_4);

// USA 0049940C <- EU 004993E4 (Ghidra, non-matching)

int func_0049940C(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define uStack_8 (*(uint *)(albw_frame + 0x8))
  #define uStack_4 (*(undefined4 *)(albw_frame + 0xc))
  iVar4 = param_1[1];
  uStack_8 = param_3;
  uStack_4 = param_4;
  (**(code **)(*param_1 + 8))(param_1);
  iVar2 = 0;
  do {
    if (*(char *)(param_1[1] + iVar2) == '\0') {
      if (iVar2 < 0x40001) goto LAB_0049943c;
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40001);
  iVar2 = 0;
LAB_0049943c:
  iVar3 = param_1[2] - iVar2;
  iVar1 = func_0010013C(iVar4 + iVar2,iVar3,param_2,&uStack_8);
  if ((iVar1 < 0) || (iVar3 <= iVar1)) {
    iVar1 = iVar3 + -1;
    *(undefined1 *)(iVar4 + iVar2 + iVar3 + -1) = 0;
  }
  return iVar1 + iVar2;
}

