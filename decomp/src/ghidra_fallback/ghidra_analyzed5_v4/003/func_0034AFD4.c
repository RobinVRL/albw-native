#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002D55E8(int param_1);
extern int func_002D56A8(int param_1,float fparam_0);
extern int func_002D5A38(int param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0053EDD8(int param_1);
extern int func_0054C998(int param_1,int param_2);
extern int func_0054C9CC(int param_1);
extern float DAT_0034b174;
extern float DAT_0034b178;
extern float DAT_0034b17c;
extern undefined DAT_0034b180;
extern int DAT_0034b194;
extern int *DAT_0034b198;
extern char s_MSE_PL_Shield_UP_0034b183[];
extern undefined4 _DAT_0034b180;

// USA 0034AFD4 <- EU 0034AFB0 (Ghidra, non-matching)
// GLOBAL DAT_0034b174 float
// GLOBAL DAT_0034b178 float
// GLOBAL DAT_0034b17c float
// GLOBAL DAT_0034b180 undefined
// GLOBAL DAT_0034b194 int
// GLOBAL DAT_0034b198 int *
// GLOBAL s_MSE_PL_Shield_UP_0034b183 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0034AFD4(int param_1,int param_2)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  if (param_2 == 0x31) {
    fVar3 = DAT_0034b17c;
    fVar4 = DAT_0034b174;
    fVar5 = DAT_0034b178;
    iVar1 = func_002D55E8(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = func_002D5A38(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 6) {
      iVar1 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
      uVar6 = func_00114608(_DAT_0034b180,extraout_r1);
      *(uint *)(param_1 + 0x58) = (int)uVar6 + iVar1 & 0xe0000000;
    }
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar4);
    func_002D56A8(param_1,fVar5);
    iVar1 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
    if (iVar1 != 0) {
      return func_002D55D0(param_1,0x32);
    }
    iVar1 = func_0054C9CC(*(int *)(param_1 + 0x48));
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(param_1 + 0x2c) + 0x44) != 2) {
        return 0;
      }
      local_24 = s_MSE_PL_Shield_UP_0034b183 + 1;
      local_28 = DAT_0034b194;
      return func_004EA104(*DAT_0034b198,&local_28,0);
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar3) goto LAB_0034b15c;
  }
  else {
    if (((param_2 != 0x32) ||
        (fVar3 = DAT_0034b17c, fVar4 = DAT_0034b174, fVar5 = DAT_0034b178,
        iVar1 = func_002D55E8(param_1), iVar1 != 0)) || (iVar1 = func_002D5A38(param_1), iVar1 != 0)
       ) {
      return 0;
    }
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar4);
    func_002D56A8(param_1,fVar5);
    iVar1 = func_0054C9CC(*(int *)(param_1 + 0x48));
    if (iVar1 != 0) {
      return 0;
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar3) {
LAB_0034b15c:
      uVar2 = 0;
      goto LAB_0034b160;
    }
  }
  uVar2 = 1;
LAB_0034b160:
  return func_002D55D0(param_1,uVar2);
}

