#include "ghidra_types.h"

extern int func_0010AF08(void);
extern int func_003E33E0(undefined4 *param_1,uint *param_2);
extern undefined1 *DAT_003e36bc;

// USA 003E3614 <- EU 003E35F4 (Ghidra, non-matching)
// GLOBAL DAT_003e36bc undefined1 *

uint func_003E3614(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  puVar1 = DAT_003e36bc;
  uVar2 = 0;
  if (param_3 != 0) {
    puVar4 = *(undefined4 **)(DAT_003e36bc + 4);
    uStack_28 = puVar4[6];
    local_34 = puVar4[3];
    local_30 = puVar4[4];
    uStack_2c = puVar4[5];
    local_24 = puVar4[7];
    albw_set3((char *)&local_40 + 1, (undefined3)((uint)*puVar4 >> 8));
    local_40 = CONCAT31((*(undefined4 *)((char *)&local_40 + 1) & 0xFFFFFF),5);
    local_40 = local_40 & 0xffffff;
    local_3c = param_1;
    uStack_38 = param_2;
    iVar3 = func_0010AF08();
    uVar2 = func_003E33E0((undefined4 *)(iVar3 + 0x58),&local_40);
  }
  uVar2 = uVar2 & 0x80000000;
  if (-1 < (int)uVar2) {
    puVar4 = *(undefined4 **)(puVar1 + 4);
    local_30 = puVar4[4];
    uStack_2c = puVar4[5];
    uStack_28 = puVar4[6];
    albw_set3((char *)&local_40 + 1, (undefined3)((uint)*puVar4 >> 8));
    local_40 = CONCAT31((*(undefined4 *)((char *)&local_40 + 1) & 0xFFFFFF),1);
    local_24 = 0;
    local_40 = CONCAT13(*puVar1,(undefined3)local_40);
    local_3c = param_1;
    uStack_38 = param_2;
    local_34 = param_4;
    iVar3 = func_0010AF08();
    uVar2 = func_003E33E0((undefined4 *)(iVar3 + 0x58),&local_40);
  }
  return uVar2;
}

