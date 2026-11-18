#include "ghidra_types.h"

extern int func_0014B1D4(int param_1,int param_2,int param_3);
extern int func_00231C00(int param_1,int param_2);
extern int *DAT_002fe78c;

// USA 002FE724 <- EU 002FE700 (Ghidra, non-matching)
// GLOBAL DAT_002fe78c int *

void func_002FE724(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  iVar2 = *(int *)(param_1 + 0x1ec);
  cVar1 = *(char *)(iVar2 + 0x50);
  bVar3 = cVar1 == '\x02';
  if (bVar3) {
    cVar1 = *(char *)(iVar2 + 0x91);
  }
  if (bVar3 && cVar1 == '\0') {
    cVar1 = *(char *)(iVar2 + 0x90);
    if (*(char *)(iVar2 + 0x92) != cVar1) {
      *(char *)(iVar2 + 0x90) = cVar1 + '\x01';
      if ((char)(cVar1 + '\x01') == *(char *)(iVar2 + 0x92)) {
        func_0014B1D4(*DAT_002fe78c,0,1);
      }
      uStack_10 = *(undefined4 *)(iVar2 + 0x84);
      *(undefined1 *)(iVar2 + 0x91) = 8;
      uStack_c = *(undefined4 *)(iVar2 + 0x88);
      func_00231C00(iVar2,(int)&uStack_10);
    }
  }
  return;
}

