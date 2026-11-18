#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0020E30C(int *param_1);
extern int func_004F8738(undefined4 *param_1);
extern int func_0053114C(int param_1,uint param_2,float *param_3,float *param_4);
extern int func_0058A8F0(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0020c674;
extern int DAT_0020c678;

// USA 0020C59C <- EU 0020C59C (Ghidra, non-matching)
// GLOBAL DAT_0020c674 float
// GLOBAL DAT_0020c678 int

undefined4 func_0020C59C(int *param_1)

{
  uint uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define afStack_38 ((float *)(albw_frame + 0x18))
  #define local_20 (*(int *)(albw_frame + 0x30))
  #define local_18 (*(float *)(albw_frame + 0x38))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x40))
  if ((char)param_1[0x308] == '\0') {
    *(undefined1 *)(param_1 + 0x308) = 1;
    func_00115C70(&local_18,(float *)(param_1 + 0x309),(float *)(param_1 + 0x26d));
    local_48 = local_18;
    uStack_44 = uStack_14;
    uStack_40 = uStack_10;
    uVar1 = func_0068C690(&local_48);
    func_004F8738(afStack_38);
    local_3c = DAT_0020c674;
    iVar2 = func_0053114C((int)param_1,uVar1,afStack_38,&local_3c);
    if ((iVar2 != 0) && (local_20 <= DAT_0020c678)) {
      return func_0020E30C(param_1);
    }
  }
  param_1[0xfa] = param_1[0x30c] + param_1[0xfa];
  iVar2 = func_0058A8F0((int)param_1);
  if (iVar2 == 0) {
    return 0;
  }
  return func_0065D630(param_1 + 0x22f,0x19);
}

