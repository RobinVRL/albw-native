#include "ghidra_types.h"

extern int func_00150CD0(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5);
extern int func_00581D60(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065F2D8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00241e24;
extern int *DAT_00241e28;
extern int *DAT_00241e2c;
extern int *DAT_00241e30;
extern int DAT_00241e44;
extern char s_SE_Water_FALL_00241e34[];

// USA 00241D20 <- EU 00241D20 (Ghidra, non-matching)
// GLOBAL DAT_00241e24 int *
// GLOBAL DAT_00241e28 int *
// GLOBAL DAT_00241e2c int *
// GLOBAL DAT_00241e30 int *
// GLOBAL DAT_00241e44 int
// GLOBAL s_SE_Water_FALL_00241e34 string

void func_00241D20(int param_1)

{
  bool bVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (((*(short *)(param_1 + 0x36) == 0) ||
      ((*(char *)(param_1 + 0x46c) == '\0' && (bVar1 = func_00588BF0(param_1,0), bVar1)))) ||
     ((*(char *)(param_1 + 0x46c) == '\x01' && (bVar1 = func_00588BF0(param_1,0), !bVar1)))) {
    func_0065F2D8((undefined4 *)(param_1 + 0x43c),1);
  }
  iVar2 = func_00588BE4(param_1);
  if ((((iVar2 == *DAT_00241e24) || (iVar2 = func_00588BE4(param_1), iVar2 == *DAT_00241e28)) ||
      (iVar2 = func_00588BE4(param_1), iVar2 == *DAT_00241e2c)) &&
     (iVar2 = func_00581D60(*DAT_00241e30), iVar2 == *(short *)(param_1 + 0x54))) {
    local_14 = s_SE_Water_FALL_00241e34;
    local_18 = DAT_00241e44;
    func_00150CD0(param_1,&local_18,param_1 + 0x3d0,0,0);
  }
  return;
}

