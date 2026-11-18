#include "ghidra_types.h"

extern int func_00231320(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00425BEC(int param_1);
extern int func_00425C38(int param_1,int *param_2);
extern int func_005702A0(int *param_1,uint param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern undefined DAT_00487d88;
extern int DAT_00487da4;
extern int *DAT_00487da8;
extern char s__SE_S_TALK_SELECT_START_00487d8b[];
extern undefined4 _DAT_00487d88;

// USA 00487C78 <- EU 00487C50 (Ghidra, non-matching)
// GLOBAL DAT_00487d88 undefined
// GLOBAL DAT_00487da4 int
// GLOBAL DAT_00487da8 int *

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00487C78(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  float fparam_0;
  int *piVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  cVar1 = *(char *)(param_1 + 0x89);
  if (cVar1 == '\x02') {
    *(int *)(param_1 + 0x138) = param_1 + 0x114;
    func_00231448(param_1 + 0x120);
    func_00231448(param_1 + 300);
  }
  else {
    if (cVar1 == '\x03') {
      *(int *)(param_1 + 0x138) = param_1 + 0x120;
      func_00231448(param_1 + 0x114);
      iVar3 = param_1 + 300;
    }
    else {
      if (cVar1 != '\x04') {
        *(int *)(param_1 + 0x138) = param_1 + 0x114;
        *(undefined1 *)(param_1 + 0x89) = 2;
        goto LAB_00487c88;
      }
      *(int *)(param_1 + 0x138) = param_1 + 300;
      func_00231448(param_1 + 0x114);
      iVar3 = param_1 + 0x120;
    }
    func_00231448(iVar3);
  }
LAB_00487c88:
  fparam_0 = ALBW_AS_F32(_DAT_00487d88);
  **(undefined2 **)(param_1 + 0x138) = 0;
  func_002317C0(*(undefined2 **)(param_1 + 0x138),fparam_0);
  uVar6 = (uint)*(byte *)(param_1 + 0x89);
  uVar5 = 0;
  if (4 < uVar6) {
    uVar6 = 4;
  }
  uVar4 = extraout_r1;
  if (uVar6 != 0) {
    do {
      piVar2 = (int *)func_005702A0((int *)(param_1 + 0x74),uVar5);
      param_3 = *(int *)(param_1 + 0x13c + uVar5 * 4);
      func_00425C38(param_3,piVar2);
      func_00425BEC(*(int *)(param_1 + 0x13c + uVar5 * 4));
      uVar5 = uVar5 + 1;
      uVar4 = extraout_r1_00;
    } while (uVar5 != uVar6);
  }
  func_00231320(*(int *)(param_1 + 0x13c),uVar4,param_3,param_4);
  *(undefined1 *)(param_1 + 0x8a) = 0;
  local_24 = s__SE_S_TALK_SELECT_START_00487d8b + 1;
  local_28 = DAT_00487da4;
  return func_00587F74(*DAT_00487da8,&local_28,0);
}

