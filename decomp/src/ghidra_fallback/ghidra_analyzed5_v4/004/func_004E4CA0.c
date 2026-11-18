#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CF478(int param_1,int param_2);
extern int iRam004e4d54;
extern undefined4 uRam004e4d3c;
extern undefined4 uRam004e4d40;
extern char s_SE_BombL_BORN_004e4d44[];

// USA 004E4CA0 <- EU 004E4C78 (Ghidra, non-matching)
// GLOBAL UNK_004e4d3c undefined4
// GLOBAL UNK_004e4d40 undefined4
// GLOBAL UNK_004e4d54 int
// GLOBAL s_SE_BombL_BORN_004e4d44 string

undefined4 func_004E4CA0(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define iStack_10 (*(int *)(albw_frame + 0x60))
  #define pcStack_c (*(char * *)(albw_frame + 0x64))
  func_004CF478(*(int *)(param_1 + 0x478),1);
  func_00151148(*(int *)(param_1 + 0x4cc),1);
  puVar2 = (uint *)func_002C11E8(aiStack_70,2,0,0);
  func_0016898C(*(int *)(param_1 + 0x47c),puVar2);
  *(undefined1 *)(param_1 + 0x5a9) = 0;
  *(undefined1 *)(param_1 + 0x60d) = 0;
  *(undefined1 *)(param_1 + 0x671) = 1;
  uVar1 = uRam004e4d3c;
  *(undefined4 *)(param_1 + 0x4ac) = 0x28;
  *(undefined4 *)(param_1 + 0x4b0) = uVar1;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  uVar1 = uRam004e4d40;
  iVar3 = *(int *)(param_1 + 0x620);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x60) = uRam004e4d40;
    *(undefined4 *)(iVar3 + 100) = uVar1;
    *(undefined4 *)(iVar3 + 0x58) = uVar1;
  }
  pcStack_c = s_SE_BombL_BORN_004e4d44;
  iStack_10 = iRam004e4d54;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

