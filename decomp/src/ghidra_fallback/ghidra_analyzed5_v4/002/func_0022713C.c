#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002275F4(int param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00584C14(int param_1,int *param_2);
extern undefined4 DAT_00227210;
extern undefined DAT_00227214;
extern int DAT_00227218;

// USA 0022713C <- EU 0022713C (Ghidra, non-matching)
// GLOBAL DAT_00227210 undefined4
// GLOBAL DAT_00227214 undefined
// GLOBAL DAT_00227218 int

undefined4 func_0022713C(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(undefined * *)(albw_frame + 0xc))
  #define aiStack_70 ((int *)(albw_frame + 0x10))
  *(undefined1 *)(param_1 + 0x751) = 1;
  uVar1 = DAT_00227210;
  *(undefined4 *)(*(int *)(param_1 + 0x598) + 0x60) = DAT_00227210;
  *(undefined4 *)(*(int *)(param_1 + 0x598) + 0x58) = uVar1;
  if (*(char *)(param_1 + 0x73d) == '\0') {
    puVar2 = (uint *)func_002C11E8(aiStack_70,4,10,0);
    func_0016898C(*(int *)(param_1 + 0x68c),puVar2);
    *(undefined1 *)(param_1 + 0x73c) = 2;
    *(undefined1 *)(param_1 + 0x73d) = 1;
  }
  else {
    puVar2 = (uint *)func_002C11E8(aiStack_70,5,10,0);
    func_0016898C(*(int *)(param_1 + 0x68c),puVar2);
    *(undefined1 *)(param_1 + 0x73c) = 4;
    *(undefined1 *)(param_1 + 0x73d) = 2;
  }
  func_002275F4(param_1);
  local_74 = &DAT_00227214;
  local_78 = DAT_00227218;
  uVar3 = func_00584C14(*(int *)(param_1 + 0x594),&local_78);
  return func_004CEA18(*(int *)(param_1 + 0x594),0,uVar3);
}

