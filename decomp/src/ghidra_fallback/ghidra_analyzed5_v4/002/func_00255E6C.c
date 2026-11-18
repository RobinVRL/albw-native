// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0028C740(int param_1,int param_2);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern float *DAT_00255fe8;
extern int *DAT_00255fec;
extern int DAT_00255ff0;
extern char s_SE_PL_RS_SWING_FIRE_00255ff4[];
extern char s_SE_PL_RS_SWING_ICE_00256030[];
extern char s_SE_PL_RS_SWING_SAND_0025601c[];
extern char s_SE_PL_RS_SWING_TORNADO_00256044[];
extern char s_cf_00256008[];

// USA 00255E6C <- EU 00255E94 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00255fe8 float *
// GLOBAL DAT_00255fec int *
// GLOBAL DAT_00255ff0 int
// GLOBAL LAB_00256008 undefined
// GLOBAL s_SE_PL_RS_SWING_FIRE_00255ff4 string
// GLOBAL s_SE_PL_RS_SWING_ICE_00256030 string
// GLOBAL s_SE_PL_RS_SWING_SAND_0025601c string
// GLOBAL s_SE_PL_RS_SWING_TORNADO_00256044 string

undefined4 func_00255E6C(int param_1,int param_2)

{
  char cVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_0028C740(*(int *)(param_1 + 0x4c),1);
  switch(*(undefined2 *)(param_2 + 2)) {
  case 0xad:
    func_00115C54(*(float **)(param_1 + 0x30),*(float **)(param_1 + 0x30),DAT_00255fe8);
    **(undefined4 **)(param_1 + 0x3c) = 0xc0000000;
    break;
  case 0xaf:
    cVar1 = *(char *)(*(int *)(param_1 + 0x2c) + 0x160);
    if (cVar1 == '\t') {
      local_18 = DAT_00255ff0;
      local_14 = s_SE_PL_RS_SWING_ICE_00256030;
      return func_004EA104(*DAT_00255fec,&local_18,0);
    }
    if (cVar1 < '\n') {
      if (cVar1 == '\a') {
        local_18 = DAT_00255ff0;
        local_14 = s_SE_PL_RS_SWING_SAND_0025601c;
        return func_004EA104(*DAT_00255fec,&local_18,0);
      }
      if (cVar1 == '\b') {
        local_18 = DAT_00255ff0;
        local_14 = s_SE_PL_RS_SWING_FIRE_00255ff4;
        return func_004EA104(*DAT_00255fec,&local_18,0);
      }
    }
    else {
      if (cVar1 == '\n') {
        local_18 = DAT_00255ff0;
        local_14 = s_SE_PL_RS_SWING_TORNADO_00256044;
        return func_004EA104(*DAT_00255fec,&local_18,0);
      }
      if (cVar1 == '\x17') {
        local_18 = DAT_00255ff0;
        local_14 = s_cf_00256008;
        return func_004EA104(*DAT_00255fec,&local_18,0);
      }
    }
  }
  return 0;
}

