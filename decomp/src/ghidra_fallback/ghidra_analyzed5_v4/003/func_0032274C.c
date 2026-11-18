#include "ghidra_types.h"

extern int func_0010173C(int param_1);
extern int func_001022F4(void);
extern int func_00102A2C(int param_1);
extern int func_00104A80(void);
extern int func_0010585C(void);
extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern int func_0010EE40(void);
extern int func_0014AD6C(void);
extern int func_0019AAFC(int param_1,undefined1 *param_2);
extern int func_00322BF0(int *param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_0057D740(int *param_1);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_005FF760(void);
extern int func_005FFC18(void);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601390(void);
extern int func_006017F0(void);
extern int *DAT_00322848;
extern int *DAT_0032284c;
extern undefined4 *DAT_00322850;
extern undefined4 DAT_00322854;
extern undefined4 *DAT_00322858;

// USA 0032274C <- EU 00322728 (Ghidra, non-matching)
// GLOBAL DAT_00322848 int *
// GLOBAL DAT_0032284c int *
// GLOBAL DAT_00322850 undefined4 *
// GLOBAL DAT_00322854 undefined4
// GLOBAL DAT_00322858 undefined4 *

void func_0032274C(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint in_r2;
  code *pcVar7;
  int in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((char *)(albw_frame + 0x8))
  #define local_14 (*(uint *)(albw_frame + 0xc))
  piVar4 = DAT_00322848;
  if ((*(char *)(*DAT_00322848 + 0x671) != '\0') && (*(int *)(*DAT_0032284c + 0x10) == 0)) {
    func_0010173C(1);
    func_00322BF0(param_1,extraout_r1,in_r2,in_r3);
    local_18[0] = '\0';
    func_0019AAFC(*piVar4,local_18);
    cVar2 = func_0010585C();
    if ((cVar2 == '\0') &&
       (((iVar3 = func_00104A80(), puVar1 = DAT_00322850, iVar3 == 0 && (local_18[0] != '\x06')) &&
        (local_18[0] != '\x04')))) {
      func_0010E0E0((int *)*DAT_00322850);
      func_006003D8(DAT_00322854,(int *)&local_14);
      func_005FF418(param_1[0x61],extraout_r1_00,in_r2);
      func_005FF760();
      *DAT_00322858 = 0;
      pcVar7 = *(code **)(*param_1 + 0x18);
      piVar4 = (int *)(*pcVar7)(param_1,3);
      func_0057D740(piVar4);
      func_005FFC18();
      uVar5 = func_001022F4();
      uVar6 = func_0010EE40();
      func_003E35DC(uVar6,uVar5);
      func_00601390();
      func_0010E15C((int *)*puVar1);
      func_006017F0();
      func_005FF418(local_14,extraout_r1_01,(uint)pcVar7);
      func_005FF760();
    }
    else {
      func_0014AD6C();
    }
    func_00102A2C(1);
  }
  return;
}

