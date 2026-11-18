#include "ghidra_types.h"

extern int func_00150CD0(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5);
extern int func_004F68AC();
extern int func_005811E8(int *param_1);
extern int DAT_0037f16c;
extern char s_SE_IronSoldier_FIRE_0037f170[];
extern char s_SE_IronSoldier_FIRE_OFF_0037f184[];

// USA 0037F0EC <- EU 0037F0C8 (Ghidra, non-matching)
// GLOBAL DAT_0037f16c int
// GLOBAL s_SE_IronSoldier_FIRE_0037f170 string
// GLOBAL s_SE_IronSoldier_FIRE_OFF_0037f184 string

undefined4 func_0037F0EC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_r2;
  float *in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar2 = func_005811E8((int *)(param_1 + 0xb3c));
  iVar1 = DAT_0037f16c;
  if (iVar2 == 0) {
    iVar2 = func_005811E8((int *)(param_1 + 0xb4c));
    if (iVar2 != 0) {
      local_1c = s_SE_IronSoldier_FIRE_OFF_0037f184;
      in_r3 = (float *)0x0;
      in_r2 = param_1 + 0xa90;
      local_20 = iVar1;
      func_00150CD0(param_1,&local_20,in_r2,0,0);
    }
  }
  else {
    local_1c = s_SE_IronSoldier_FIRE_0037f170;
    in_r3 = (float *)0x0;
    in_r2 = param_1 + 0xa90;
    local_20 = DAT_0037f16c;
    func_00150CD0(param_1,&local_20,in_r2,0,0);
  }
  return func_004F68AC(param_1,param_2,in_r2,in_r3);
}

