#include "ghidra_types.h"

extern int func_00104248(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5 ,uint param_6,undefined4 param_7,int param_8);
extern int func_001049BC(void);
extern int func_0010A98C(uint param_1);
extern int func_0010DEB0(undefined4 *param_1);
extern uint DAT_003dcf94;
extern uint DAT_003dcf98;
extern undefined4 DAT_003dcf9c;
extern undefined4 DAT_003dcfa0;
extern undefined4 DAT_003dcfa4;
extern undefined4 DAT_003dcfa8;
extern undefined4 DAT_003dcfac;

// USA 003DCEAC <- EU 003DCE8C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 uint
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_003dcf94 uint
// GLOBAL DAT_003dcf98 uint
// GLOBAL DAT_003dcf9c undefined4
// GLOBAL DAT_003dcfa0 undefined4
// GLOBAL DAT_003dcfa4 undefined4
// GLOBAL DAT_003dcfa8 undefined4
// GLOBAL DAT_003dcfac undefined4

uint func_003DCEAC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5
                  ,uint param_6,int param_7)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define auStack_28 ((undefined4 *)(albw_frame + 0x18))
  uVar3 = DAT_003dcf94;
  if (*(char *)(param_1 + 3) == '\0') {
    bVar2 = func_001049BC();
    if ((bVar2) && (param_7 == 1)) {
      param_6 = DAT_003dcf98;
    }
    func_0010DEB0(param_1 + 0xd);
    local_38 = 4;
    local_34 = DAT_003dcfa0;
    local_30 = DAT_003dcfa4;
    uStack_2c = DAT_003dcfa8;
    auStack_28[0] = 0;
    uVar3 = func_00104248(param_1 + 4,&local_38,DAT_003dcf9c,auStack_28,param_4 + param_5,param_6,
                          param_7,0);
    if (((uVar3 & 0x7e00000) != 0x600000) && ((int)uVar3 < 0)) {
      func_0010A98C(uVar3);
    }
    if ((uVar3 & 0x80000000) == 0) {
      param_1[8] = 0;
      *(undefined1 *)(param_1 + 3) = 1;
      uVar1 = DAT_003dcfac;
      param_1[9] = 0;
      param_1[10] = param_2;
      param_1[0xb] = param_3;
      *(bool *)uVar1 = param_7 == 0;
      *param_1 = 0;
      param_1[1] = 0;
      *(char *)(param_1 + 0xc) = (char)param_7;
    }
    else {
      param_1[0xf] = 0xffffffff;
    }
  }
  return uVar3;
}

