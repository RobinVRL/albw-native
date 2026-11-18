#include "ghidra_types.h"

extern int func_00102B84(byte param_1);
extern int func_00104518(void);
extern int func_001049A8(void);
extern int func_00104A70(void);
extern int func_00104F58(byte param_1);
extern int func_00104F7C(void);
extern int func_001052E8(void);
extern int func_001052FC(int param_1);
extern int func_00105374(undefined4 param_1,undefined1 param_2);
extern int func_001057A0(undefined4 param_1);
extern int func_001057CC(void);
extern int func_00105820(void);
extern int func_00105998(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3,int param_4, undefined4 *param_5,int *param_6,uint param_7,uint param_8);
extern int func_00105C24(void);
extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108B08(byte param_1);
extern int func_00108DA8(int param_1);
extern int func_00108F28(void);
extern int func_001093AC(int param_1);
extern int DAT_00105794;
extern int DAT_00105798;
extern int *DAT_0010579c;

// USA 001053A8 <- EU 001053A8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 uint
// PARAM param_8 Stack[0xc]:4 uint
// GLOBAL DAT_00105794 int
// GLOBAL DAT_00105798 int
// GLOBAL DAT_0010579c int *

int func_001053A8(undefined4 *param_1,undefined1 *param_2,int param_3,int *param_4,int *param_5,
                 undefined4 param_6,uint param_7,uint param_8)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  int iVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(undefined1 * *)(albw_frame + 0xc))
  #define local_60 (*(int *)(albw_frame + 0x10))
  #define local_5c (*(int *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 ((int *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define puStack_34 (*(undefined4 * *)(albw_frame + 0x3c))
  #define local_30 (*(undefined1 * *)(albw_frame + 0x40))
  #define local_2c (*(int *)(albw_frame + 0x44))
  #define piStack_28 (*(int * *)(albw_frame + 0x48))
  iVar5 = 0;
  local_40 = 0;
  puStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  piStack_28 = param_4;
  cVar1 = func_00104A70();
  func_00102B84(0);
  if (cVar1 == 'c') {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = *DAT_0010579c;
    }
    return 0;
  }
  func_00108F28();
  func_001052E8();
  if (cVar1 == 'b') {
    func_00102B84(0);
  }
  else {
    func_00105820();
  }
  do {
    do {
      local_64 = local_30;
      local_68 = 0;
      local_60 = local_2c;
      cVar2 = '\x01';
      iVar3 = func_00105998(&local_58,local_54,local_30,local_2c,&local_5c,&local_68,param_7,param_8
                           );
      if (DAT_00105794 != iVar3 * 0x400000) {
        iVar5 = DAT_00105794;
        cVar2 = '\x01';
        if ((-1 < iVar3) && (*(code **)(DAT_00105798 + 0x48) != (code *)0x0)) {
          cVar2 = (**(code **)(DAT_00105798 + 0x48))
                            (*(undefined4 *)(DAT_00105798 + 0x88),local_58,local_54[0],local_64,
                             local_60,local_5c,local_68);
          iVar5 = extraout_r1;
        }
        if (param_4 != (int *)0x0) {
          iVar5 = local_5c;
        }
        local_40 = local_58;
        if (param_4 != (int *)0x0) {
          *param_4 = iVar5;
        }
        iVar5 = local_54[0];
        if (param_5 != (int *)0x0) {
          *param_5 = local_68;
        }
      }
    } while (cVar2 == '\0');
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = local_40;
    }
    if (iVar3 < 0) goto LAB_00105518;
  } while ((((iVar5 != 1 && iVar5 != 0xb) && (iVar5 != 10 && iVar5 != 0xc)) &&
           (iVar5 != 0xd && iVar5 != 0xf)) &&
          ((iVar5 != 0xe && iVar5 != 0x11 && (iVar5 != 0x40 && iVar5 != 0x41))));
  func_00105C24();
LAB_00105518:
  if (DAT_00105794 == iVar3 * 0x400000) {
    return -1;
  }
  uVar4 = func_001049A8();
  if (((uVar4 == 0) && (cVar1 != '\x03')) && (iVar5 != 0xc && iVar5 != 1)) {
    func_001052FC(1);
    uVar4 = func_001057CC();
    if ((int)uVar4 < 0) {
      func_0010873C(uVar4,0x1055b0);
    }
  }
  if (iVar5 == 0xe) {
    iVar5 = 6;
LAB_00105600:
    func_00108DA8(1);
    if (cVar1 == '\x0e' || cVar1 == '\x05') {
      func_001093AC(1);
    }
    if ((((iVar5 != 1 && iVar5 != 2) && (iVar5 != 3 && iVar5 != 4)) && (iVar5 != 5 && iVar5 != 6))
       && ((iVar5 != 9 && iVar5 != 0x40) && iVar5 != 0x41)) goto LAB_001056e4;
  }
  else {
    if (0xd < iVar5) {
      if (iVar5 == 0xf) {
        iVar5 = 7;
        func_00108B08(1);
        func_00104F58(1);
      }
      else {
        if (iVar5 == 0x11) {
          iVar5 = 9;
          goto LAB_0010569c;
        }
        if (iVar5 != 0x40 && iVar5 != 0x41) goto LAB_001055fc;
      }
      goto LAB_00105600;
    }
    if (iVar5 == 0xb) {
      iVar5 = 3;
      goto LAB_00105600;
    }
    if (iVar5 < 0xb) {
      if (iVar5 != 1) {
        if (iVar5 != 10) goto LAB_001055fc;
        iVar5 = 2;
      }
      goto LAB_00105600;
    }
    if (iVar5 == 0xc) {
      iVar5 = 4;
      func_00104518();
      func_00104F7C();
    }
    else {
      if (iVar5 != 0xd) {
LAB_001055fc:
        iVar5 = 1;
        goto LAB_00105600;
      }
      iVar5 = 5;
      func_00104518();
    }
  }
LAB_0010569c:
  uVar6 = 0;
  uVar4 = func_001049A8();
  if (uVar4 == 0) {
    uVar6 = 0x10;
  }
  else if (uVar4 == 1) {
    uVar6 = 0x20;
  }
  else if (uVar4 == 2) {
    uVar6 = 0x40;
  }
  else if (uVar4 == 3) {
    uVar6 = 0x80;
  }
  func_001057A0(uVar6);
  func_00105820();
LAB_001056e4:
  if (iVar5 == 7) {
    func_00105374(1,1);
  }
  if ((cVar1 == '\x0e' || cVar1 == '\x04') || (cVar1 == '\x05' || cVar1 == '\x12')) {
    if (iVar5 != 4 && iVar5 != 5) {
      func_001052FC(1);
    }
    uVar4 = func_001049A8();
    if ((uVar4 == 0) && (iVar5 != 7)) {
      func_00108B08(0);
      func_001057A0(1);
      func_00105820();
    }
  }
  return iVar5;
}

