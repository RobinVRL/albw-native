#include "ghidra_types.h"

extern int func_00294F4C(int param_1,int param_2,float fparam_0);
extern int func_00297448(int param_1,int param_2,float fparam_0);
extern int func_004EC074(int param_1,int param_2,float fparam_0);
extern int func_004EC988(int param_1,int *param_2,int param_3);
extern float func_005380E0(int param_1);
extern float func_005381B4(int param_1);
extern int *DAT_0025a36c;
extern int DAT_0025a38c;
extern float DAT_0025a390;
extern float DAT_0025a394;
extern float DAT_0025a398;
extern char s_SE_ENV_DUNGEON_WIND_WIND_0025a370[];

// USA 0025A258 <- EU 0025A280 (Ghidra, non-matching)
// GLOBAL DAT_0025a36c int *
// GLOBAL DAT_0025a38c int
// GLOBAL DAT_0025a390 float
// GLOBAL DAT_0025a394 float
// GLOBAL DAT_0025a398 float
// GLOBAL s_SE_ENV_DUNGEON_WIND_WIND_0025a370 string

undefined4 func_0025A258(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar1 = DAT_0025a36c;
  if (*(char *)(param_1 + 0xd9) != '\0') {
    local_1c = s_SE_ENV_DUNGEON_WIND_WIND_0025a370;
    local_20 = DAT_0025a38c;
    func_004EC988(*DAT_0025a36c,&local_20,param_1 + 0x78);
  }
  if (*(char *)(param_1 + 0xda) != '\0') {
    if (*(char *)(param_1 + 0xd9) != '\0') {
      func_00294F4C(*piVar1,0x3c,DAT_0025a390);
      fVar2 = DAT_0025a394;
      func_00297448(*piVar1,0x3c,DAT_0025a394);
      return func_004EC074(*piVar1,0x3c,fVar2);
    }
    func_00294F4C(*piVar1,0x3c,DAT_0025a398);
    fVar2 = func_005380E0(param_1);
    func_00297448(*piVar1,0x3c,fVar2);
    fVar2 = func_005381B4(param_1);
    return func_004EC074(*piVar1,0x3c,fVar2);
  }
  return 0;
}

