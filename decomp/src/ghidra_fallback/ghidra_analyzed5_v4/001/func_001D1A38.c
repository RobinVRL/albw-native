#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001CFB38(int param_1,undefined4 param_2);
extern int func_001CFEF4(int param_1,undefined4 param_2,float fparam_0);
extern float DAT_001d1ad0;
extern int DAT_001d1ad4;
extern undefined4 DAT_001d1aec;
extern char s_SE_Kokko_V_ANGLY_001d1ad8[];
extern char s_SE_Kokko_V_ANGLY_L_001d1af0[];

// USA 001D1A38 <- EU 001D1A38 (Ghidra, non-matching)
// GLOBAL DAT_001d1ad0 float
// GLOBAL DAT_001d1ad4 int
// GLOBAL DAT_001d1aec undefined4
// GLOBAL s_SE_Kokko_V_ANGLY_001d1ad8 string
// GLOBAL s_SE_Kokko_V_ANGLY_L_001d1af0 string

bool func_001D1A38(int *param_1)

{
  float fparam_0;
  bool bVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  fparam_0 = DAT_001d1ad0;
  param_1[0x164] = param_1[0xf4];
  param_1[0x165] = param_1[0xf5];
  param_1[0x166] = param_1[0xf6];
  func_001CFEF4((int)param_1,8,fparam_0);
  *(undefined1 *)((int)param_1 + 0x5da) = 0;
  *(undefined1 *)(param_1 + 0x177) = 0;
  local_10 = DAT_001d1ad4;
  if (*(char *)((int)param_1 + 0x5df) == '\x03') {
    local_c = s_SE_Kokko_V_ANGLY_L_001d1af0;
    func_00150A84(param_1,&local_10,0);
  }
  else {
    local_c = s_SE_Kokko_V_ANGLY_001d1ad8;
    func_001507D8((int)param_1,&local_10,0);
  }
  bVar1 = func_001CFB38((int)param_1,DAT_001d1aec);
  return bVar1;
}

