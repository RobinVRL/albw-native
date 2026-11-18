#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001DBDD4(int param_1);
extern int func_001E5B70(int param_1,float fparam_0);
extern int func_001E5BE4(int param_1);
extern int func_0053007C(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0065F194(undefined4 *param_1,undefined1 param_2);
extern float DAT_002414e8;
extern int DAT_002414ec;
extern int *DAT_002414f0;
extern char s_SE_SwitchPull_PULL_0024150c[];
extern char s_SE_SwitchPull_PULL_END_002414f4[];

// USA 00241400 <- EU 00241400 (Ghidra, non-matching)
// GLOBAL DAT_002414e8 float
// GLOBAL DAT_002414ec int
// GLOBAL DAT_002414f0 int *
// GLOBAL s_SE_SwitchPull_PULL_0024150c string
// GLOBAL s_SE_SwitchPull_PULL_END_002414f4 string

undefined4 func_00241400(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_001E5B70((int)param_1,DAT_002414e8);
  func_001E5BE4((int)param_1);
  iVar3 = func_0053007C((int)param_1);
  iVar2 = DAT_002414ec;
  sVar1 = 0;
  if (iVar3 != 0) {
    sVar1 = *(short *)((int)param_1 + 0x36);
  }
  if (iVar3 != 0 && sVar1 != 0) {
    func_001DBDD4(*DAT_002414f0);
    if ((char)param_1[0x13c] == '\0') {
      local_14 = s_SE_SwitchPull_PULL_END_002414f4;
      local_18 = iVar2;
      func_00150A84(param_1,&local_18,0);
      *(undefined1 *)(param_1 + 0x13c) = 1;
    }
    func_00588C14((int)param_1,0,1);
  }
  if ((ALBW_AS_F32(param_1[0x11e]) == ALBW_AS_F32(param_1[0x127])) &&
     (ALBW_AS_F32(param_1[0x120]) == ALBW_AS_F32(param_1[0x129]))) {
    return func_0065F194(param_1 + 0x130,3);
  }
  local_14 = s_SE_SwitchPull_PULL_0024150c;
  local_18 = iVar2;
  return func_001507D8((int)param_1,&local_18,0);
}

