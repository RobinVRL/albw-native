#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int iRam001c30d4;
extern undefined4 *DAT_001c30bc;
extern char s_SE_Signboard_BREAK_001c30c0[];

// USA 001C3054 <- EU 001C3054 (Ghidra, non-matching)
// GLOBAL DAT_001c30bc undefined4 *
// GLOBAL UNK_001c30d4 int
// GLOBAL s_SE_Signboard_BREAK_001c30c0 string

undefined4 func_001C3054(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  func_004A8304(*DAT_001c30bc,*(int *)(param_1 + 0x7bc));
  iVar1 = 0;
  do {
    func_004CF478(*(int *)(param_1 + iVar1 * 4 + 0x7b0),0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  pcStack_14 = s_SE_Signboard_BREAK_001c30c0;
  iStack_18 = iRam001c30d4;
  return func_00150A84((int *)param_1,&iStack_18,0);
}

