#include "ghidra_types.h"

extern int func_002B9EA4(int param_1,int param_2);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_004e044c;
extern int DAT_004e0460;
extern int *DAT_004e0464;
extern char s_SE_PL_HEART_GET_004e0450[];

// USA 004E0400 <- EU 004E03D8 (Ghidra, non-matching)
// GLOBAL DAT_004e044c int *
// GLOBAL DAT_004e0460 int
// GLOBAL DAT_004e0464 int *
// GLOBAL s_SE_PL_HEART_GET_004e0450 string

void func_004E0400(int param_1,int param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = func_00588BE4(param_1);
  if (iVar1 == *DAT_004e044c) {
    iVar1 = 0xc;
  }
  else {
    iVar1 = 4;
  }
  if (param_2 != 0) {
    func_002B9EA4(param_2,iVar1);
    local_14 = s_SE_PL_HEART_GET_004e0450;
    local_18 = DAT_004e0460;
    func_004EABB8(*DAT_004e0464,&local_18,(undefined4 *)0x0);
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

