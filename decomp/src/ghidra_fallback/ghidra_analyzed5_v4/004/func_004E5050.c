#include "ghidra_types.h"

extern int func_00150688(undefined4 param_1,int param_2,undefined2 *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int iRam004e50e4;
extern undefined4 uRam004e50e0;
extern int DAT_004e50fc;
extern char s_SE_BombL_EXPLOSION_004e50e8[];

// USA 004E5050 <- EU 004E5028 (Ghidra, non-matching)
// GLOBAL DAT_004e50fc int
// GLOBAL UNK_004e50e0 undefined4
// GLOBAL UNK_004e50e4 int
// GLOBAL s_SE_BombL_EXPLOSION_004e50e8 string

undefined4 func_004E5050(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  *(undefined1 *)(param_1 + 0x5a9) = 1;
  *(undefined1 *)(param_1 + 0x60d) = 1;
  *(undefined1 *)(param_1 + 0x671) = 0;
  func_004CF478(*(int *)(param_1 + 0x478),0);
  func_00151148(*(int *)(param_1 + 0x4cc),0);
  uVar1 = uRam004e50e0;
  *(undefined4 *)(param_1 + 0x4ac) = 0x14;
  *(undefined4 *)(param_1 + 0x4b0) = uVar1;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  func_00150688(param_1,param_1 + 0x548,*(undefined2 **)(param_1 + 0x3a4));
  if (*(char *)(param_1 + 0x6ca) != '\0') {
    *(undefined2 *)(iRam004e50e4 + param_1) = 0x10;
  }
  iStack_10 = DAT_004e50fc;
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 2;
  pcStack_c = s_SE_BombL_EXPLOSION_004e50e8;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

