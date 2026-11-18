#include "ghidra_types.h"

extern int func_00294F4C(int param_1,int param_2,float fparam_0);
extern int func_00297448(int param_1,int param_2,float fparam_0);
extern int func_004EC074(int param_1,int param_2,float fparam_0);
extern int func_004EC988(int param_1,int *param_2,int param_3);
extern float func_005380E0(int param_1);
extern float func_005381B4(int param_1);
extern int *DAT_00259e3c;
extern int DAT_00259e5c;
extern float DAT_00259e60;
extern float DAT_00259e64;
extern float DAT_00259e68;
extern char s_SE_ENV_DUNGEON_EAST_WIND_00259e40[];

// USA 00259D28 <- EU 00259D50 (Ghidra, non-matching)
// GLOBAL DAT_00259e3c int *
// GLOBAL DAT_00259e5c int
// GLOBAL DAT_00259e60 float
// GLOBAL DAT_00259e64 float
// GLOBAL DAT_00259e68 float
// GLOBAL s_SE_ENV_DUNGEON_EAST_WIND_00259e40 string

undefined4 func_00259D28(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar1 = DAT_00259e3c;
  if (*(char *)(param_1 + 0xd9) != '\0') {
    local_1c = s_SE_ENV_DUNGEON_EAST_WIND_00259e40;
    local_20 = DAT_00259e5c;
    func_004EC988(*DAT_00259e3c,&local_20,param_1 + 0x78);
  }
  if (*(char *)(param_1 + 0xda) != '\0') {
    if (*(char *)(param_1 + 0xd9) != '\0') {
      func_00294F4C(*piVar1,0x3c,DAT_00259e60);
      fVar2 = DAT_00259e64;
      func_00297448(*piVar1,0x3c,DAT_00259e64);
      return func_004EC074(*piVar1,0x3c,fVar2);
    }
    func_00294F4C(*piVar1,0x3c,DAT_00259e68);
    fVar2 = func_005380E0(param_1);
    func_00297448(*piVar1,0x3c,fVar2);
    fVar2 = func_005381B4(param_1);
    return func_004EC074(*piVar1,0x3c,fVar2);
  }
  return 0;
}

