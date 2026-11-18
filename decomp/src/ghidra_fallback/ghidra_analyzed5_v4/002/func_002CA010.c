#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001DBDD4(int param_1);
extern int func_001E5B70(int param_1,float fparam_0);
extern int func_001E5BE4(int param_1);
extern int func_0053007C(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00663810(undefined4 *param_1,undefined1 param_2);
extern float DAT_002ca0d8;
extern int DAT_002ca0dc;
extern int *DAT_002ca0f8;
extern char s_SE_SwitchPull_PULL_002ca0fc[];
extern char s_SE_SwitchPull_PULL_END_002ca0e0[];

// USA 002CA010 <- EU 002C9FEC (Ghidra, non-matching)
// GLOBAL DAT_002ca0d8 float
// GLOBAL DAT_002ca0dc int
// GLOBAL DAT_002ca0f8 int *
// GLOBAL s_SE_SwitchPull_PULL_002ca0fc string
// GLOBAL s_SE_SwitchPull_PULL_END_002ca0e0 string

undefined4 func_002CA010(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_001E5B70((int)param_1,DAT_002ca0d8);
  func_001E5BE4((int)param_1);
  iVar3 = func_0053007C((int)param_1);
  iVar2 = DAT_002ca0dc;
  sVar1 = 0;
  if (iVar3 != 0) {
    sVar1 = *(short *)((int)param_1 + 0x36);
  }
  if (iVar3 != 0 && sVar1 != 0) {
    if (*(char *)((int)param_1 + 0x4e9) == '\0') {
      local_14 = s_SE_SwitchPull_PULL_END_002ca0e0;
      local_18 = DAT_002ca0dc;
      func_00150A84(param_1,&local_18,0);
      *(undefined1 *)((int)param_1 + 0x4e9) = 1;
    }
    func_001DBDD4(*DAT_002ca0f8);
    func_00588C14((int)param_1,0,1);
  }
  if ((ALBW_AS_F32(param_1[0x11e]) == ALBW_AS_F32(param_1[0x127])) &&
     (ALBW_AS_F32(param_1[0x120]) == ALBW_AS_F32(param_1[0x129]))) {
    return func_00663810(param_1 + 0x12e,3);
  }
  local_14 = s_SE_SwitchPull_PULL_002ca0fc;
  local_18 = iVar2;
  return func_001507D8((int)param_1,&local_18,0);
}

