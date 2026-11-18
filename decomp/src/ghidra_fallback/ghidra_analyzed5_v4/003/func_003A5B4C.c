#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0019B04C(uint param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002C2C9C(undefined4 *param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_002D42E8(int param_1);
extern int *DAT_003a5c0c;
extern uint *DAT_003a5c10;
extern undefined4 DAT_003a5c14;
extern int DAT_003a5c28;
extern char s_Tornado_Attack_003a5c18[];

// USA 003A5B4C <- EU 003A5B28 (Ghidra, non-matching)
// GLOBAL DAT_003a5c0c int *
// GLOBAL DAT_003a5c10 uint *
// GLOBAL DAT_003a5c14 undefined4
// GLOBAL DAT_003a5c28 int
// GLOBAL s_Tornado_Attack_003a5c18 string

undefined4 func_003A5B4C(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define aiStack_b0 ((int *)(albw_frame + 0x0))
  #define local_98 (*(uint *)(albw_frame + 0x18))
  #define local_94 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_70 (*(int *)(albw_frame + 0x40))
  #define local_6c (*(char * *)(albw_frame + 0x44))
  #define aiStack_68 ((int *)(albw_frame + 0x48))
  iVar5 = *(int *)(*DAT_003a5c0c + 0x10);
  func_0019B04C(*DAT_003a5c10);
  puVar1 = (undefined4 *)func_0010BAB4(0xa8);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_0016A2FC(puVar1,1,DAT_003a5c14,1);
  }
  *(undefined4 **)(param_1 + 0x1c) = puVar2;
  local_70 = DAT_003a5c28;
  local_6c = s_Tornado_Attack_003a5c18;
  func_00169688(*(uint **)(param_1 + 0x1c),0,&local_70,*(int *)(iVar5 + 0x424));
  func_0016A02C(*(int *)(param_1 + 0x1c),-1,(int *)0xffffffff,0);
  puVar3 = (uint *)func_002C11E8(aiStack_68,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x1c),puVar3);
  func_002C2C9C(aiStack_b0,*(undefined4 *)(iVar5 + 0x4c));
  local_94 = 1;
  local_98 = local_98 | 1;
  piVar4 = func_002C2D00(aiStack_b0);
  *(int **)(param_1 + 4) = piVar4;
  return func_002D42E8(param_1);
}

