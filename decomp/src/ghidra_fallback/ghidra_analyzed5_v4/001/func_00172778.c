// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern undefined8 func_00259354(int param_1,int *param_2,int param_3);
extern int func_0025B7B0(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_00297298(int param_1,int param_2);
extern int func_0051B888(int param_1,int param_2);
extern int func_0051BE54(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_0017280c;
extern int *DAT_00172810;
extern int DAT_00172820;
extern int DAT_00172824;
extern char s_SE_S_START_00172814[];

// USA 00172778 <- EU 00172778 (Ghidra, non-matching)
// GLOBAL DAT_0017280c int *
// GLOBAL DAT_00172810 int *
// GLOBAL DAT_00172820 int
// GLOBAL DAT_00172824 int
// GLOBAL s_SE_S_START_00172814 string

undefined4 func_00172778(void)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((undefined4 *)(albw_frame + 0x8))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  piVar1 = DAT_0017280c;
  func_0051B888(*DAT_0017280c,0);
  func_0051BE54(*piVar1);
  piVar1 = DAT_00172810;
  func_00297298(*DAT_00172810,0xf);
  func_0010A464(auStack_78);
  iVar2 = DAT_00172820;
  local_14 = s_SE_S_START_00172814;
  local_18 = DAT_00172820;
  func_00587F74(*piVar1,&local_18,(int)auStack_78);
  func_0025B7B0((int)auStack_78,0xf);
  local_14 = *(char **)(DAT_00172824 + 0xc);
  local_18 = iVar2;
  func_00259354(*piVar1,&local_18,0x5a);
  return func_0025B874(auStack_78);
}

