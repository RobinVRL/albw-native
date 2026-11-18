#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int DAT_00508574;
extern char s_Flash_00508578[];
extern char s_SE_Beamos_BEAM_PRE_00508560[];

// USA 005084C0 <- EU 00508498 (Ghidra, non-matching)
// GLOBAL DAT_00508574 int
// GLOBAL s_Flash_00508578 string
// GLOBAL s_SE_Beamos_BEAM_PRE_00508560 string

void func_005084C0(int *param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define iStack_54 (*(int *)(albw_frame + 0xc))
  #define afStack_50 ((float *)(albw_frame + 0x10))
  #define local_18 (*(int *)(albw_frame + 0x48))
  #define local_14 (*(char * *)(albw_frame + 0x4c))
  local_18 = DAT_00508574;
  local_14 = s_SE_Beamos_BEAM_PRE_00508560;
  func_00150A84(param_1,&local_18,0);
  piVar2 = param_1 + 0x142;
  if (param_1[0xd1] == 0) {
    *piVar2 = 0;
    param_1[0x143] = 0;
  }
  else {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x143])) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_58,param_1[0xd1],(uint *)s_Flash_00508578);
    *piVar2 = local_58;
    param_1[0x143] = iStack_54;
  }
  func_004D8AEC(afStack_50,param_1[0x10f],(float *)(param_1 + 0x111));
  iVar1 = *piVar2;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x143])) {
    func_004A2D1C(iVar1,afStack_50);
  }
  return;
}

