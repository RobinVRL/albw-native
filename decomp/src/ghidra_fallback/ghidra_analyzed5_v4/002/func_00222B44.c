#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_002228F8(int param_1,int param_2,uint param_3,int param_4,int param_5,byte param_6, float fparam_0);
extern int func_005330BC(int param_1,int *param_2);
extern undefined4 DAT_00222bf8;

// USA 00222B44 <- EU 00222B44 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:1 byte
// PARAM param_8 Stack[0xc]:1 undefined1
// GLOBAL DAT_00222bf8 undefined4

undefined4 *
func_00222B44(undefined4 *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,
             byte param_7,undefined1 param_8,float fparam_0)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = func_0010DA7C(param_1,0,3);
  *puVar1 = DAT_00222bf8;
  puVar1[4] = param_2;
  uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x2d0) + 0x1c8 + param_3 * 4);
  puVar1[6] = 0;
  puVar1[5] = uVar3;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = param_8;
  *(undefined1 *)((int)puVar1 + 0x25) = 0;
  uVar2 = func_005330BC(*(int *)(*(int *)(puVar1[4] + 0x2d0) + 0x1c8 + param_3 * 4),param_4);
  func_002228F8((int)puVar1,param_3,uVar2,param_5,param_6,param_7,fparam_0);
  return puVar1;
}

