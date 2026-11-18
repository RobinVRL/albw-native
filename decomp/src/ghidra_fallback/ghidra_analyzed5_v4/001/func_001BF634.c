#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int DAT_001bf6d8;
extern char s_SE_CubeBreak_BREAK_001bf6c4[];

// USA 001BF634 <- EU 001BF634 (Ghidra, non-matching)
// GLOBAL DAT_001bf6d8 int
// GLOBAL s_SE_CubeBreak_BREAK_001bf6c4 string

undefined4 func_001BF634(int *param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if ((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x0f')) {
    if (*(short *)((int)param_1 + 0x36) != 0) {
      func_00588C14((int)param_1,0,1);
    }
    (**(code **)(param_1[200] + 0x30))(param_1 + 200);
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    local_c = s_SE_CubeBreak_BREAK_001bf6c4;
    local_10 = DAT_001bf6d8;
    func_00150A84(param_1,&local_10,0);
    return 0;
  }
  return 0;
}

