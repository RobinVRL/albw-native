#include "ghidra_types.h"

extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00584CA8(int param_1,int param_2,int param_3);

// USA 0023DCD4 <- EU 0023DCD4 (Ghidra, non-matching)

void func_0023DCD4(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_20 (*(uint *)(albw_frame + 0x0))
  if (*(char *)(param_1 + 0x7d1) != '\0') {
    iVar4 = *(int *)(param_1 + 0x7c4);
    uStack_20 = 0xffffffff;
    iVar2 = 0;
    iVar3 = *(int *)(*(int *)(iVar4 + 0x20) + 4);
    if (0 < iVar3) {
      do {
        puVar1 = (uint *)func_00584CA8(iVar4,iVar2,3);
        uStack_20 = *puVar1 & 0xffffff;
        func_004CF5DC(iVar4,iVar2,3,&uStack_20);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
    *(undefined1 *)(param_1 + 0x7d1) = 0;
  }
  return;
}

