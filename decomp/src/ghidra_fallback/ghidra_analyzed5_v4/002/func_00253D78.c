#include "ghidra_types.h"

extern int func_002BE8E4(int *param_1,int *param_2,int param_3);
extern int DAT_00253e2c;
extern char s_FieldDark_35_SmallKameB_00253e14[];

// USA 00253D78 <- EU 00253DA0 (Ghidra, non-matching)
// GLOBAL DAT_00253e2c int
// GLOBAL s_FieldDark_35_SmallKameB_00253e14 string

void func_00253D78(int param_1)

{
  bool bVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(char *)(param_1 + 0x424) != '\a') {
    return;
  }
  if (*(int *)(param_1 + 0x420) < 2) {
    return;
  }
  if (*(char *)(param_1 + 0x818) == '\0') {
    local_14 = s_FieldDark_35_SmallKameB_00253e14;
    local_18 = DAT_00253e2c;
    iVar2 = func_002BE8E4((int *)(param_1 + 0x4d0),&local_18,0);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_00253e00;
    }
  }
  bVar1 = false;
LAB_00253e00:
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x818) = 1;
  }
  return;
}

