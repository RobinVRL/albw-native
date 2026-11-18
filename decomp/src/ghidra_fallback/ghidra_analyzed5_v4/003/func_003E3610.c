#include "ghidra_types.h"

extern int func_0010AF08(void);
extern int func_003E33E0(undefined4 *param_1,uint *param_2);
extern undefined1 *DAT_003e36bc;

// USA 003E3610 <- EU 003E35F0 (Ghidra, non-matching)
// GLOBAL DAT_003e36bc undefined1 *

void func_003E3610(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  puVar1 = DAT_003e36bc;
  iVar2 = 0;
  if (param_3 != 0) {
    puVar3 = *(undefined4 **)(DAT_003e36bc + 4);
    uStack_28 = puVar3[6];
    uStack_34 = puVar3[3];
    uStack_30 = puVar3[4];
    uStack_2c = puVar3[5];
    uStack_24 = puVar3[7];
    albw_set3((char *)&uStack_40 + 1, (undefined3)((uint)*puVar3 >> 8));
    uStack_40 = CONCAT31((*(undefined4 *)((char *)&uStack_40 + 1) & 0xFFFFFF),5);
    uStack_40 = uStack_40 & 0xffffff;
    uStack_3c = param_1;
    uStack_38 = param_2;
    iVar2 = func_0010AF08();
    iVar2 = func_003E33E0((undefined4 *)(iVar2 + 0x58),&uStack_40);
  }
  if (-1 < iVar2) {
    puVar3 = *(undefined4 **)(puVar1 + 4);
    uStack_30 = puVar3[4];
    uStack_2c = puVar3[5];
    uStack_28 = puVar3[6];
    albw_set3((char *)&uStack_40 + 1, (undefined3)((uint)*puVar3 >> 8));
    uStack_40 = CONCAT31((*(undefined4 *)((char *)&uStack_40 + 1) & 0xFFFFFF),1);
    uStack_24 = 0;
    uStack_40 = CONCAT13(*puVar1,(undefined3)uStack_40);
    uStack_3c = param_1;
    uStack_38 = param_2;
    uStack_34 = param_4;
    iVar2 = func_0010AF08();
    func_003E33E0((undefined4 *)(iVar2 + 0x58),&uStack_40);
  }
  return;
}

