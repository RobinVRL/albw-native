#include "ghidra_types.h"

extern int func_00404F24(undefined4 *param_1,undefined4 *param_2);

// USA 004670C4 <- EU 0046709C (Ghidra, non-matching)

void func_004670C4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined1 *)(albw_frame + 0x10))
  #define local_1f (*(undefined1 *)(albw_frame + 0x11))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  if (*(int *)(param_1 + 0x210) != 0) {
    uVar5 = *(uint *)(param_1 + 0x440);
    uVar2 = 0;
    if (0 < (int)uVar5) {
      puVar3 = *(undefined4 **)(param_1 + 0x448);
      do {
        puVar4 = puVar3;
        if (uVar2 < uVar5) {
          puVar4 = puVar3 + uVar2 * 6;
        }
        if (*(char *)((int)puVar4 + 0xf) == '\0') {
          puVar4 = puVar3;
          if (uVar2 < uVar5) {
            puVar4 = puVar3 + uVar2 * 6;
          }
          if (*(char *)(puVar4 + 3) == param_2) {
            if (uVar2 < uVar5) {
              puVar3 = puVar3 + uVar2 * 6;
            }
            local_18 = puVar3[1];
            local_24 = *puVar3;
            local_1c = *puVar3;
            local_28 = 1;
            local_20 = 0xb;
            local_1f = 0;
            iVar1 = (**(code **)(**(int **)(param_1 + 0x214) + 0x28))(*(int **)(param_1 + 0x214),0);
            func_00404F24(*(undefined4 **)(iVar1 + 0x7c),&local_28);
            *(byte *)(iVar1 + 0x9e) = *(byte *)(iVar1 + 0x9e) & 0xfb;
            return;
          }
        }
        uVar2 = uVar2 + 1;
        if ((int)uVar5 <= (int)uVar2) {
          return;
        }
      } while( true );
    }
  }
  return;
}

