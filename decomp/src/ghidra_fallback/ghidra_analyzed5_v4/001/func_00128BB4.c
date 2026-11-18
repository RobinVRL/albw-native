#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006568D8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00128cac;
extern float DAT_00128cb0;
extern int *DAT_00128cb4;
extern int DAT_00128cb8;
extern char s_SE_Chasupa_V_FLY_START_00128cbc[];
extern char s_SE_Keease_V_FLY_START_00128cd4[];

// USA 00128BB4 <- EU 00128BB4 (Ghidra, non-matching)
// GLOBAL DAT_00128cac float
// GLOBAL DAT_00128cb0 float
// GLOBAL DAT_00128cb4 int *
// GLOBAL DAT_00128cb8 int
// GLOBAL s_SE_Chasupa_V_FLY_START_00128cbc string
// GLOBAL s_SE_Keease_V_FLY_START_00128cd4 string

undefined4 func_00128BB4(int *param_1)

{
  bool bVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if ((uint)param_1[0x238] < (uint)param_1[0x239]) {
    param_1[0x238] = param_1[0x238] + 1;
  }
  else if ((((*(short *)((int)param_1 + 0x36) != 0) &&
            (bVar1 = func_00588BF0((int)param_1,0), bVar1)) ||
           ((*(short *)((int)param_1 + 0x36) == 0 &&
            (iVar2 = func_005211F4((int)param_1,DAT_00128cb0,DAT_00128cac), iVar2 != 0)))) ||
          ((*(short *)((int)param_1 + 0x36) != 0 && ((char)param_1[0x248] != '\0')))) {
    func_006568D8(param_1 + 0x22f,2);
    iVar2 = func_00588BE4((int)param_1);
    local_10 = DAT_00128cb8;
    if (iVar2 != *DAT_00128cb4) {
      local_c = s_SE_Keease_V_FLY_START_00128cd4;
      return func_00150A84(param_1,&local_10,0);
    }
    local_c = s_SE_Chasupa_V_FLY_START_00128cbc;
    func_00150A84(param_1,&local_10,0);
  }
  return 0;
}

