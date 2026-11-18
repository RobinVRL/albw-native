#include "ghidra_types.h"

extern int func_002BE8E4(int *param_1,int *param_2,int param_3);
extern int DAT_002526ac;
extern char s_FieldDark_35_SmallKameC_00252694[];

// USA 002525F4 <- EU 0025261C (Ghidra, non-matching)
// GLOBAL DAT_002526ac int
// GLOBAL s_FieldDark_35_SmallKameC_00252694 string

void func_002525F4(int param_1)

{
  bool bVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(char *)(param_1 + 0x500) != '\x06') {
    return;
  }
  if (*(int *)(param_1 + 0x4fc) < 2) {
    return;
  }
  if (*(char *)(param_1 + 0x8cc) == '\0') {
    local_14 = s_FieldDark_35_SmallKameC_00252694;
    local_18 = DAT_002526ac;
    iVar2 = func_002BE8E4((int *)(param_1 + 0x588),&local_18,0);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_00252680;
    }
  }
  bVar1 = false;
LAB_00252680:
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x8cc) = 1;
  }
  return;
}

