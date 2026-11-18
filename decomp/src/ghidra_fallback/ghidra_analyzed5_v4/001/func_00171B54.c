// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern undefined8 func_00259354(int param_1,int *param_2,int param_3);
extern int func_0025B7B0(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_00297298(int param_1,int param_2);
extern int func_0051B888(int param_1,int param_2);
extern int func_00540304(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_00171bf0;
extern int DAT_00171c00;
extern int *DAT_00171c04;
extern char s_BGM_STUDIUM_00171c08[];
extern char s_SE_S_START_00171bf4[];

// USA 00171B54 <- EU 00171B54 (Ghidra, non-matching)
// GLOBAL DAT_00171bf0 int *
// GLOBAL DAT_00171c00 int
// GLOBAL DAT_00171c04 int *
// GLOBAL s_BGM_STUDIUM_00171c08 string
// GLOBAL s_SE_S_START_00171bf4 string

undefined4 func_00171B54(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((undefined4 *)(albw_frame + 0x8))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  func_0051B888(*DAT_00171bf0,3);
  func_0010A464(auStack_78);
  piVar2 = DAT_00171c04;
  iVar1 = DAT_00171c00;
  local_14 = s_SE_S_START_00171bf4;
  local_18 = DAT_00171c00;
  func_00587F74(*DAT_00171c04,&local_18,(int)auStack_78);
  func_0025B7B0((int)auStack_78,0xf);
  iVar3 = func_00540304(*piVar2);
  if (iVar3 != 0) {
    func_00297298(*piVar2,0xf);
  }
  local_14 = s_BGM_STUDIUM_00171c08;
  local_18 = iVar1;
  func_00259354(*piVar2,&local_18,0x3c);
  return func_0025B874(auStack_78);
}

