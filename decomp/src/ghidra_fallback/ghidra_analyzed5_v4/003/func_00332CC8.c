#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00547514(int param_1);
extern int func_006657B4(undefined4 *param_1,undefined1 param_2);
extern int DAT_00332d64;
extern char s_SE_Door_OPEN_00332d54[];

// USA 00332CC8 <- EU 00332CA4 (Ghidra, non-matching)
// GLOBAL DAT_00332d64 int
// GLOBAL s_SE_Door_OPEN_00332d54 string

void func_00332CC8(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(char *)((int)param_1 + 0x515) == '\0') {
    local_14 = s_SE_Door_OPEN_00332d54;
    local_18 = DAT_00332d64;
    func_00150A84(param_1,&local_18,0);
    *(undefined1 *)((int)param_1 + 0x515) = 1;
  }
  if ((uint)param_1[0x139] < (uint)param_1[0x13a]) {
    param_1[0x139] = param_1[0x139] + 1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x496) = 1;
    if (*(short *)((int)param_1 + 0x2e) != 4 && *(short *)((int)param_1 + 0x2e) != 6) {
      param_1[0x143] = 0;
    }
    if ((short)param_1[0xc] == 1) {
      func_006657B4(param_1 + 0x130,0);
      *(undefined1 *)(param_1 + 0x125) = 0;
      return;
    }
    if ((short)param_1[0xc] != 2) {
      func_00547514((int)(param_1 + 1));
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  }
  return;
}

