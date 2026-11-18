// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0066184C(undefined4 *param_1,undefined1 param_2);
extern int DAT_0029954c;
extern char s_SE_CaveSparkle_FLASH_00299534[];

// USA 002994D0 <- EU 002994AC (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_0029954c int
// GLOBAL s_SE_CaveSparkle_FLASH_00299534 string

void func_002994D0(int param_1)

{
  bool bVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  if (((*(short *)(param_1 + 0x36) != 0) && (bVar1 = func_00588BF0(param_1,0), bVar1)) &&
     (*(char *)(param_1 + 0x46c) == '\0')) {
    *(undefined1 *)(param_1 + 0x46c) = 1;
    func_00588C14(param_1,0,0);
    pcStack_c = s_SE_CaveSparkle_FLASH_00299534;
    iStack_10 = DAT_0029954c;
    func_00150A84((int *)param_1,&iStack_10,0);
    func_0066184C((undefined4 *)(param_1 + 0x40c),1);
  }
  return;
}

