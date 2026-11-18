#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001BE1E8(int param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0065B524(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001bdec4;
extern int DAT_001bdee0;
extern float DAT_001bdee4;
extern int DAT_001bdee8;
extern char s_SE_BoardFall_DOWN_END_001bdec8[];

// USA 001BDD88 <- EU 001BDD88 (Ghidra, non-matching)
// GLOBAL DAT_001bdec4 int *
// GLOBAL DAT_001bdee0 int
// GLOBAL DAT_001bdee4 float
// GLOBAL DAT_001bdee8 int
// GLOBAL s_SE_BoardFall_DOWN_END_001bdec8 string

undefined4 func_001BDD88(int *param_1)

{
  uint uVar1;
  uint extraout_r1;
  int iVar2;
  int *in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_0051D27C(param_1 + 0x114,DAT_001bdec4[1],*DAT_001bdec4);
  iVar2 = param_1[0x115];
  uVar1 = param_1[0x114] + iVar2;
  param_1[0x115] = uVar1;
  if (0x40000000 < uVar1) {
    param_1[0x114] = 0;
    param_1[0x115] = 0x40000000;
    local_14 = s_SE_BoardFall_DOWN_END_001bdec8;
    local_18 = DAT_001bdee0;
    iVar2 = 0;
    func_00150A84(param_1,&local_18,0);
    uVar1 = extraout_r1;
  }
  func_00169A80((int *)param_1[0x10d],uVar1,iVar2,in_r3);
  func_00168E9C((int *)param_1[0x10d],param_1[0x10c],(int *)0x0);
  func_001BE1E8((int)param_1);
  iVar2 = *(int *)(param_1[0x10d] + 0x14);
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(float *)(iVar2 + 0x10) < DAT_001bdee4) {
      if (DAT_001bdee4 < *(float *)(iVar2 + 8)) goto LAB_001bde94;
    }
    else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) goto LAB_001bde94;
    func_00165E28(param_1[0x10e],*(undefined2 *)(DAT_001bdee8 + 0x2a));
    func_0065B524(param_1 + 0x103,2);
  }
LAB_001bde94:
  iVar2 = param_1[0x10c];
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),param_1[0xfa],(float *)(param_1 + 0xf4));
  return func_004CEAF0(param_1[0x10c]);
}

