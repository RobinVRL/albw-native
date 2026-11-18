#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001E405C(int param_1,undefined4 param_2);
extern int func_001E4090(int param_1,undefined4 param_2);
extern int func_002E01FC(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_0052F7F4(int param_1);
extern int func_006657B4(undefined4 *param_1,undefined1 param_2);
extern uint DAT_003321d8;
extern char s_SE_Door_CLOSE_003321dc[];
extern char s_SE_Door_OPEN_003321ec[];

// USA 003320F4 <- EU 003320D0 (Ghidra, non-matching)
// GLOBAL DAT_003321d8 uint
// GLOBAL s_SE_Door_CLOSE_003321dc string
// GLOBAL s_SE_Door_OPEN_003321ec string

/* WARNING: Variable defined which should be unmapped: objStack_18 */

undefined4 func_003320F4(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  objStack_18[0] = 0;
  objStack_18[1] = 0;
  func_0014E2A0((int)param_1,param_1[0x127],param_1 + 0x128,0x100,0,0);
  if ((short)param_1[0xb] == 1) {
    uVar1 = DAT_003321d8;
    if (param_1[0x130] != 0) {
      objStack_18[0] = DAT_003321d8;
      objStack_18[1] = (uint)s_SE_Door_CLOSE_003321dc;
      func_00150A84(param_1,(int *)objStack_18,0);
      func_001E4090((int)param_1,1);
      func_001E405C((int)param_1,1);
      func_004CF478(param_1[0x11f],1);
      uVar1 = func_006657B4(param_1 + 0x130,3);
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x515) == '\0') {
      objStack_18[0] = DAT_003321d8;
      objStack_18[1] = (uint)s_SE_Door_OPEN_003321ec;
      func_00150A84(param_1,(int *)objStack_18,0);
      *(undefined1 *)((int)param_1 + 0x515) = 1;
    }
    iVar2 = func_0052F7F4((int)param_1);
    uVar1 = 0;
    if (iVar2 != 0) {
      func_002E01FC((int)param_1);
      uVar3 = func_006657B4(param_1 + 0x130,4);
      *(undefined1 *)((int)param_1 + 0x495) = 1;
      return uVar3;
    }
  }
  return uVar1;
}

