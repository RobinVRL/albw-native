#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_001692F8(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);

// USA 004F0864 <- EU 004F083C (Ghidra, non-matching)

undefined4 func_004F0864(int param_1,uint param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((uint *)(albw_frame + 0x8))
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 != 0) {
    if ((*(uint *)(param_1 + 0x110) & 1 << (param_2 & 0xff)) == 0) {
      func_002C11E8((int *)auStack_78,0xffffffff,10,0);
      func_001692F8(iVar3,auStack_78);
      if (*(char *)(param_1 + 0x11c) != '\0') {
        param_3 = 0;
      }
      *(undefined1 *)(param_1 + 0x11c) = 0;
    }
    else {
      puVar2 = (uint *)func_002C11E8((int *)auStack_78,param_2 & 0xffff,param_3,0);
      func_0016898C(*(int *)(param_1 + 0x44),puVar2);
      cVar1 = *(char *)(param_1 + 0x11c);
      *(undefined1 *)(param_1 + 0x11c) = 1;
      if (cVar1 == '\0') {
        param_3 = 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  puVar2 = (uint *)func_002C11E8((int *)auStack_78,param_2 & 0xffff,param_3,0);
  return func_0016898C(*(int *)(param_1 + 0xc),puVar2);
}

