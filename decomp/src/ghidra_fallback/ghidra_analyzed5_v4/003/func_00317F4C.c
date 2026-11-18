#include "ghidra_types.h"

extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2DAC(int param_1,float *param_2,float *param_3);
extern int func_004ED46C(int param_1,int param_2);
extern float DAT_00317fe8;
extern float DAT_00317fec;
extern int *DAT_00317ff0;
extern char s_Thunder_00317fe0[];

// USA 00317F4C <- EU 00317F28 (Ghidra, non-matching)
// GLOBAL DAT_00317fe8 float
// GLOBAL DAT_00317fec float
// GLOBAL DAT_00317ff0 int *
// GLOBAL s_Thunder_00317fe0 string

undefined4 func_00317F4C(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define iStack_64 (*(int *)(albw_frame + 0xc))
  #define local_58 (*(uint *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define fStack_44 (*(float *)(albw_frame + 0x2c))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  *(undefined1 *)(*(int *)(param_1 + 0x434) + 0x61) = 1;
  if (*(int *)(param_1 + 0x344) == 0) {
    local_68 = 0;
    iStack_64 = 0;
  }
  else {
    func_004A1B9C(&local_68,*(int *)(param_1 + 0x344),(uint *)s_Thunder_00317fe0);
  }
  local_54 = *(undefined4 *)(param_1 + 1000);
  local_58 = 0;
  local_50 = 0;
  func_0049216C(afStack_40,&local_58,(float *)(param_1 + 0x3d0));
  fStack_44 = *(float *)(param_1 + 0x440) * DAT_00317fe8;
  local_4c = DAT_00317fec;
  local_48 = DAT_00317fec;
  if ((local_68 != 0) && (*(int *)(local_68 + 0x1c) == iStack_64)) {
    func_004A2DAC(local_68,afStack_40,&local_4c);
  }
  return func_004ED46C(*DAT_00317ff0,5);
}

