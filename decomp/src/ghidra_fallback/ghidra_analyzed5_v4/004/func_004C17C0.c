#include "ghidra_types.h"

extern int func_00564A78(int param_1,int *param_2);
extern int DAT_004c17f4;
extern char s_skl_root_004c17e8[];

// USA 004C17C0 <- EU 004C1798 (Ghidra, non-matching)
// GLOBAL DAT_004c17f4 int
// GLOBAL s_skl_root_004c17e8 string

void func_004C17C0(int param_1)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_skl_root_004c17e8;
  local_10 = DAT_004c17f4;
  if (*(char *)(param_1 + 0x910) != '\x02') {
    if (*(char *)(param_1 + 0x910) == '\0') {
      uVar1 = func_00564A78(*(int *)(param_1 + 0x7a0),&local_10);
      *(uint *)(param_1 + 0x8f8) = uVar1;
    }
    *(undefined1 *)(param_1 + 0x910) = 1;
  }
  return;
}

