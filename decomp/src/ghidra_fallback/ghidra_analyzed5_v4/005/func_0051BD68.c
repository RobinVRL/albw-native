#include "ghidra_types.h"

extern int func_004836DC(int param_1,byte param_2);
extern int func_004EC66C(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int DAT_0051bdc0;
extern int *DAT_0051bdc4;
extern char s_FANFARE_GIRIGIRI_RESULT_0051bda8[];

// USA 0051BD68 <- EU 0051BD40 (Ghidra, non-matching)
// GLOBAL DAT_0051bdc0 int
// GLOBAL DAT_0051bdc4 int *
// GLOBAL s_FANFARE_GIRIGIRI_RESULT_0051bda8 string

void func_0051BD68(int param_1,byte param_2)

{
  int iVar1;
  int *in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = *(int *)(param_1 + 0x11c);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0xd) == '\0')) && (*(char *)(iVar1 + 0xe) == '\0')) {
    func_004836DC(iVar1,param_2);
    local_10 = DAT_0051bdc0;
    *(undefined1 *)(*(int *)(param_1 + 0x11c) + 0xe) = 1;
    local_c = s_FANFARE_GIRIGIRI_RESULT_0051bda8;
    func_004EC66C(*DAT_0051bdc4,&local_10,local_10,in_r3);
  }
  return;
}

