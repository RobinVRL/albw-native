// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int DAT_0050a4c4;
extern char s_SE_IceFloor_GROW_0050a4b0[];

// USA 0050A434 <- EU 0050A40C (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_0050a4c4 int
// GLOBAL s_SE_IceFloor_GROW_0050a4b0 string

undefined4 func_0050A434(int param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x5c))
  #define iStack_10 (*(int *)(albw_frame + 0x60))
  #define pcStack_c (*(char * *)(albw_frame + 0x64))
  puVar1 = (uint *)func_002C11E8(aiStack_70,1,10,0);
  func_0016898C(*(int *)(param_1 + 0x414),puVar1);
  *(undefined1 *)(*(int *)(param_1 + 0x43c) + 0x61) = 0;
  uStack_14 = 0xa3;
  *(undefined2 *)(*(int *)(param_1 + 0x444) + 0x28) = 0xa3;
  *(uint *)(*(int *)(param_1 + 0x444) + 0x2c) =
       *(uint *)(*(int *)(param_1 + 0x444) + 0x2c) & 0xfffff8ff | 0x200;
  iStack_10 = DAT_0050a4c4;
  *(uint *)(*(int *)(param_1 + 0x444) + 0x2c) =
       *(uint *)(*(int *)(param_1 + 0x444) + 0x2c) & 0xffffe7ff | 0x1000;
  pcStack_c = s_SE_IceFloor_GROW_0050a4b0;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

