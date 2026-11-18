// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern undefined8 func_00259354(int param_1,int *param_2,int param_3);
extern int func_0025B7B0(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_00297298(int param_1,int param_2);
extern int func_0051B888(int param_1,int param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_00171e2c;
extern int *DAT_00171e30;
extern int DAT_00171e40;
extern int DAT_00171e44;
extern char s_SE_S_START_00171e34[];

// USA 00171D98 <- EU 00171D98 (Ghidra, non-matching)
// GLOBAL DAT_00171e2c int *
// GLOBAL DAT_00171e30 int *
// GLOBAL DAT_00171e40 int
// GLOBAL DAT_00171e44 int
// GLOBAL s_SE_S_START_00171e34 string

undefined4 func_00171D98(int param_1)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((undefined4 *)(albw_frame + 0x8))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  *(undefined1 *)(param_1 + 0x2ee) = 3;
  func_0051B888(*DAT_00171e2c,0);
  piVar1 = DAT_00171e30;
  func_00297298(*DAT_00171e30,0xf);
  func_0010A464(auStack_78);
  iVar2 = DAT_00171e40;
  local_14 = s_SE_S_START_00171e34;
  local_18 = DAT_00171e40;
  func_00587F74(*piVar1,&local_18,(int)auStack_78);
  func_0025B7B0((int)auStack_78,0xf);
  local_14 = *(char **)(DAT_00171e44 + 8);
  local_18 = iVar2;
  func_00259354(*piVar1,&local_18,0x3c);
  return func_0025B874(auStack_78);
}

