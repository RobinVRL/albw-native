#include "ghidra_types.h"

extern int func_00171F00(int param_1);
extern int func_00172210(int param_1);
extern int func_0017247C(int param_1,uint param_2);
extern int func_00297298(int param_1,int param_2);
extern int func_004EC4FC(int param_1,int param_2,int param_3);
extern int func_0051B888(int param_1,int param_2);
extern int func_005237A8(int param_1);
extern int func_00523894(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_002cb96c;
extern int *DAT_002cb970;
extern int *DAT_002cb974;
extern int DAT_002cb988;
extern int DAT_002cb98c;
extern undefined4 DAT_002cb990;
extern char s_SE_S_RACE_GOAL_002cb978[];

// USA 002CB878 <- EU 002CB854 (Ghidra, non-matching)
// GLOBAL DAT_002cb96c int *
// GLOBAL DAT_002cb970 int *
// GLOBAL DAT_002cb974 int *
// GLOBAL DAT_002cb988 int
// GLOBAL DAT_002cb98c int
// GLOBAL DAT_002cb990 undefined4
// GLOBAL s_SE_S_RACE_GOAL_002cb978 string

undefined4 func_002CB878(uint param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar2 = DAT_002cb96c;
  if (param_2 == 0) {
    if (*(char *)(*DAT_002cb96c + 0x2eb) == '\0') {
      func_0051B888(*DAT_002cb970,2);
      piVar3 = DAT_002cb974;
      func_00297298(*DAT_002cb974,0xf);
      local_1c = s_SE_S_RACE_GOAL_002cb978;
      local_20 = DAT_002cb988;
      func_00587F74(*piVar3,&local_20,0);
      iVar5 = *piVar2;
      cVar1 = *(char *)(DAT_002cb98c + iVar5);
      *(char *)(param_1 + 0x999) = cVar1;
      if (cVar1 == '\x01') {
        func_00171F00(iVar5);
      }
      else {
        func_0017247C(iVar5,(uint)*(byte *)(param_1 + 0x998));
        func_00172210(*piVar2);
        iVar5 = func_005237A8(*piVar2);
        iVar6 = func_00523894(*piVar2);
        uVar4 = DAT_002cb990;
        *(int *)(param_1 + 0x778) = iVar5;
        iVar5 = (int)(short)iVar6 * (int)(short)uVar4;
        *(int *)(param_1 + 0x77c) = (iVar5 >> 0x12) - (iVar5 >> 0x1f);
      }
      *(undefined1 *)(*piVar2 + 0x2eb) = 1;
      func_004EC4FC(*piVar3,0x1e,1);
    }
  }
  else {
    if (param_2 == 1) {
      param_1 = (uint)*(byte *)(param_1 + 0x852);
    }
    if (param_2 == 1 && param_1 == 2) {
      return 0;
    }
  }
  return 1;
}

