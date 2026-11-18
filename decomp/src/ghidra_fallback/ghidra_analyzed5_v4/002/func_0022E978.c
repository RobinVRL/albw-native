#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int iRam0022ea50;
extern undefined4 uRam0022ea40;
extern undefined4 uRam0022ea44;
extern undefined4 uRam0022ea48;
extern int *piRam0022ea4c;
extern char s_SE_Ku_APPEAR_0022ea54[];
extern char s_SE_Zora_APPEAR_0022ea64[];

// USA 0022E978 <- EU 0022E978 (Ghidra, non-matching)
// GLOBAL UNK_0022ea40 undefined4
// GLOBAL UNK_0022ea44 undefined4
// GLOBAL UNK_0022ea48 undefined4
// GLOBAL UNK_0022ea4c int *
// GLOBAL UNK_0022ea50 int
// GLOBAL s_SE_Ku_APPEAR_0022ea54 string
// GLOBAL s_SE_Zora_APPEAR_0022ea64 string

undefined4 func_0022E978(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 2;
  func_004FCDF4(param_1 + 0x5a8,1);
  func_004FABDC(param_1,1,0xffffffff,0);
  uVar3 = uRam0022ea48;
  uVar2 = uRam0022ea44;
  uVar1 = uRam0022ea40;
  puVar4 = *(undefined4 **)(param_1 + 0xa68);
  *puVar4 = uRam0022ea40;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  puVar4[4] = uVar1;
  puVar4[3] = uVar1;
  puVar4 = *(undefined4 **)(param_1 + 0xa68);
  puVar4[4] = *puVar4;
  puVar4[3] = uVar1;
  iVar5 = func_00588BE4(param_1);
  iStack_10 = iRam0022ea50;
  if (iVar5 == *piRam0022ea4c) {
    pcStack_c = s_SE_Ku_APPEAR_0022ea54;
    return func_00150A84((int *)param_1,&iStack_10,0);
  }
  pcStack_c = s_SE_Zora_APPEAR_0022ea64;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

