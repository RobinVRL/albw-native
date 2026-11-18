#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0025B61C(int param_1,int param_2,float fparam_0);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_00539200(int param_1);
extern int DAT_005130c8;
extern float DAT_00513110;
extern float DAT_00513114;
extern float DAT_00513118;
extern char s_SE_KinSta_CHIRP_00513100[];
extern char s_SE_KinSta_CHIRP_IN_WATER_005130e4[];
extern char s_SE_KinSta_CHIRP_REVERSE_005130cc[];

// USA 00512FA4 <- EU 00512F7C (Ghidra, non-matching)
// GLOBAL DAT_005130c8 int
// GLOBAL DAT_00513110 float
// GLOBAL DAT_00513114 float
// GLOBAL DAT_00513118 float
// GLOBAL s_SE_KinSta_CHIRP_00513100 string
// GLOBAL s_SE_KinSta_CHIRP_IN_WATER_005130e4 string
// GLOBAL s_SE_KinSta_CHIRP_REVERSE_005130cc string

undefined4 func_00512FA4(int param_1)

{
  bool bVar1;
  float in_s1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((undefined4 *)(albw_frame + 0x8))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  func_0010A464(auStack_78);
  if (*(char *)(param_1 + 0x548) == '\x04') {
    local_18 = DAT_005130c8;
    local_14 = s_SE_KinSta_CHIRP_IN_WATER_005130e4;
    func_001507D8(param_1,&local_18,0);
  }
  else {
    local_18 = DAT_005130c8;
    if (*(char *)(param_1 + 0x559) == '\0') {
      local_14 = s_SE_KinSta_CHIRP_00513100;
      func_001507D8(param_1,&local_18,(int)auStack_78);
    }
    else {
      local_14 = s_SE_KinSta_CHIRP_REVERSE_005130cc;
      func_001507D8(param_1,&local_18,0);
    }
  }
  if ((*(char *)(*(int *)(param_1 + 0x51c) + 0x30) == '\0') &&
     (bVar1 = func_00539200((int)auStack_78), bVar1)) {
    switch(*(undefined1 *)(param_1 + 0x548)) {
    case 2:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
      fparam_0 = DAT_00513114;
      func_0025B860((int)auStack_78,0,DAT_00513110,in_s1);
      func_0025B61C((int)auStack_78,0,fparam_0);
    }
  }
  else {
    bVar1 = func_00539200((int)auStack_78);
    if (bVar1) {
      func_0025B860((int)auStack_78,0,DAT_00513118,in_s1);
    }
  }
  return func_0025B874(auStack_78);
}

