#include "ghidra_types.h"

extern int func_002BE8E4(int *param_1,int *param_2,int param_3);
extern int DAT_0031a4f8;
extern char s_FieldDark_35_SmallKameA_0031a4e0[];

// USA 0031A498 <- EU 0031A474 (Ghidra, non-matching)
// GLOBAL DAT_0031a4f8 int
// GLOBAL s_FieldDark_35_SmallKameA_0031a4e0 string

void func_0031A498(int param_1)

{
  bool bVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(char *)(param_1 + 0x424) != '\x05') {
    return;
  }
  if (*(char *)(param_1 + 0x7e8) == '\0') {
    local_14 = s_FieldDark_35_SmallKameA_0031a4e0;
    local_18 = DAT_0031a4f8;
    iVar2 = func_002BE8E4((int *)(param_1 + 0x47c),&local_18,0);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_0031a4cc;
    }
  }
  bVar1 = false;
LAB_0031a4cc:
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x7e8) = 1;
  }
  return;
}

