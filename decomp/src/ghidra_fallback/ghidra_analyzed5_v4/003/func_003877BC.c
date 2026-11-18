#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);

// USA 003877BC <- EU 00387798 (Ghidra, non-matching)

undefined4 func_003877BC(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define afStack_70 ((float *)(albw_frame + 0x0))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  if (*(int *)(param_1 + 8) == param_3) {
    iVar2 = *(int *)(param_1 + 0xc);
    iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x40c);
    if (iVar2 == 0) {
      func_00491E80(afStack_70,*(uint *)(param_1 + 0x10),0,0);
    }
    else if (iVar2 == 1) {
      func_00491E80(afStack_70,0,*(uint *)(param_1 + 0x10),0);
    }
    else if (iVar2 == 2) {
      func_00491E80(afStack_70,0,0,*(uint *)(param_1 + 0x10));
    }
    func_001119F4(afStack_40,
                  (undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + param_3 * 0x30));
    func_001157FC(afStack_40,afStack_40,afStack_70);
    func_001151EC((undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + param_3 * 0x30),
                  afStack_40);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

