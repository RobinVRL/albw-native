#include "ghidra_types.h"

extern int func_001DE128(int param_1,int param_2,int param_3);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_004e0ea8;
extern int *DAT_004e0eac;
extern int *DAT_004e0eb0;
extern int DAT_004e0ec4;
extern int *DAT_004e0ec8;
extern char s_SE_PL_HEART_GET_004e0eb4[];

// USA 004E0E44 <- EU 004E0E1C (Ghidra, non-matching)
// GLOBAL DAT_004e0ea8 int *
// GLOBAL DAT_004e0eac int *
// GLOBAL DAT_004e0eb0 int *
// GLOBAL DAT_004e0ec4 int
// GLOBAL DAT_004e0ec8 int *
// GLOBAL s_SE_PL_HEART_GET_004e0eb4 string

void func_004E0E44(int param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = func_00588BE4(param_1);
  if (iVar1 == *DAT_004e0ea8) {
    iVar1 = 0xc;
  }
  else {
    iVar1 = 4;
  }
  iVar2 = func_00588BE4(param_1);
  iVar1 = func_001DE128(*DAT_004e0eb0,iVar1,(uint)(iVar2 == *DAT_004e0eac));
  if (iVar1 != 0) {
    local_14 = s_SE_PL_HEART_GET_004e0eb4;
    local_18 = DAT_004e0ec4;
    func_004EA104(*DAT_004e0ec8,&local_18,0);
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

