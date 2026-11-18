#include "ghidra_types.h"

extern int func_003A0960(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0055D680(int param_1);
extern int func_0066EDA8(undefined4 *param_1,undefined1 param_2);
extern int DAT_00480ae8;
extern char s_SE_S_CROSS_RECORD_MEDAL_00480ad0[];

// USA 00480A60 <- EU 00480A38 (Ghidra, non-matching)
// GLOBAL DAT_00480ae8 int
// GLOBAL s_SE_S_CROSS_RECORD_MEDAL_00480ad0 string

undefined4 func_00480A60(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*(int *)(param_1 + 0x74) == 0x24) {
    func_003A0960(*(int *)(param_1 + 0x10c));
    local_c = s_SE_S_CROSS_RECORD_MEDAL_00480ad0;
    local_10 = DAT_00480ae8;
    func_00533078(param_1,&local_10,0);
  }
  iVar1 = func_0055D680(*(int *)(param_1 + 0x10c));
  if ((iVar1 != 0) && (0x77 < *(int *)(param_1 + 0x74))) {
    if (*(int *)(*(int *)(param_1 + 0x10c) + 0x390) < 0x32) {
      return func_0066EDA8((undefined4 *)(param_1 + 0x74),0);
    }
    func_0066EDA8((undefined4 *)(param_1 + 0x74),3);
  }
  return 0;
}

