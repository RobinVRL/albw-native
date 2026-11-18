#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001DDCC4(int param_1,undefined1 param_2);
extern int func_00547514(int param_1);
extern int DAT_00304c38;
extern int *DAT_00304c3c;
extern char s_SE_DoorHolocaust_OPEN_00304c20[];

// USA 00304BBC <- EU 00304B98 (Ghidra, non-matching)
// GLOBAL DAT_00304c38 int
// GLOBAL DAT_00304c3c int *
// GLOBAL s_SE_DoorHolocaust_OPEN_00304c20 string

void func_00304BBC(int *param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(char *)((int)param_1 + 0x519) == '\0') {
    local_14 = s_SE_DoorHolocaust_OPEN_00304c20;
    local_18 = DAT_00304c38;
    func_00150A84(param_1,&local_18,0);
    *(undefined1 *)((int)param_1 + 0x519) = 1;
  }
  piVar1 = DAT_00304c3c;
  if ((uint)param_1[0x139] < (uint)param_1[0x13a]) {
    param_1[0x139] = param_1[0x139] + 1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x496) = 1;
    func_001DDCC4(*piVar1,0);
    func_00547514((int)(param_1 + 1));
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  }
  return;
}

