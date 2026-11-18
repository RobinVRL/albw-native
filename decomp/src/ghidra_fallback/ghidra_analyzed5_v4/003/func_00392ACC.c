#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_00392b28;
extern undefined4 DAT_00392b54;
extern char s_SE_OBJ_FALL_WATER_00392b40[];
extern char s_SE_OBJ_FALL_WATER_L_00392b2c[];

// USA 00392ACC <- EU 00392AA8 (Ghidra, non-matching)
// GLOBAL DAT_00392b28 int
// GLOBAL DAT_00392b54 undefined4
// GLOBAL s_SE_OBJ_FALL_WATER_00392b40 string
// GLOBAL s_SE_OBJ_FALL_WATER_L_00392b2c string

void func_00392ACC(int *param_1)

{
  char cVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  cVar1 = '\0';
  if (*param_1 != 0) {
    cVar1 = *(char *)((int)param_1 + 0xd);
  }
  if (*param_1 != 0 && cVar1 != '\0') {
    local_18 = DAT_00392b28;
    if (*(char *)((int)param_1 + 0xf) == '\0') {
      local_14 = s_SE_OBJ_FALL_WATER_00392b40;
      func_00150A84((int *)*param_1,&local_18,0);
    }
    else {
      local_14 = s_SE_OBJ_FALL_WATER_L_00392b2c;
      func_00150A84((int *)*param_1,&local_18,0);
    }
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1[2] + 4) = DAT_00392b54;
  return;
}

