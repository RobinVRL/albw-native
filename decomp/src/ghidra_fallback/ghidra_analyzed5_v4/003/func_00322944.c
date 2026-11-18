#include "ghidra_types.h"

extern int func_0010173C(int param_1);
extern int func_001022F4(void);
extern int func_00102A2C(int param_1);
extern int func_00104A80(void);
extern int func_001053A8(undefined4 *param_1,undefined1 *param_2,int param_3,int *param_4,int *param_5, undefined4 param_6,uint param_7,uint param_8);
extern int func_00105804(void);
extern int func_0010585C(void);
extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern int func_0010EE40(void);
extern int func_0012E448(int param_1);
extern int func_0014AD6C(void);
extern int func_00294DD0(int param_1);
extern int func_00322BF0(int *param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_003E46A4(void);
extern int func_003E4D3C(void);
extern int func_004C76D4(int param_1);
extern int func_004EA128(int param_1);
extern int func_0051E4EC(int param_1);
extern int func_0057D740(int *param_1);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_005FF760(void);
extern int func_005FFC18(void);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601390(void);
extern int func_006017F0(void);
extern int *DAT_00322b70;
extern int *DAT_00322b74;
extern int *DAT_00322b78;
extern int *DAT_00322b7c;
extern int *DAT_00322b80;
extern uint *DAT_00322b84;
extern int *DAT_00322b88;
extern undefined4 *DAT_00322b8c;
extern undefined4 DAT_00322b90;
extern undefined4 *DAT_00322b94;

// USA 00322944 <- EU 00322920 (Ghidra, non-matching)
// GLOBAL DAT_00322b70 int *
// GLOBAL DAT_00322b74 int *
// GLOBAL DAT_00322b78 int *
// GLOBAL DAT_00322b7c int *
// GLOBAL DAT_00322b80 int *
// GLOBAL DAT_00322b84 uint *
// GLOBAL DAT_00322b88 int *
// GLOBAL DAT_00322b8c undefined4 *
// GLOBAL DAT_00322b90 undefined4
// GLOBAL DAT_00322b94 undefined4 *

undefined4 func_00322944(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x30]; /* entry_sp - 0x30 .. entry_sp + 0x0 */
#define stack0xffffffd8 (*(undefined4 *)(albw_frame + 0x8))
#define stack0xffffffdc (*(undefined4 *)(albw_frame + 0xc))
/* stack0xffffffdc */
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint in_r2;
  uint uVar10;
  code *pcVar11;
  int in_r3;
  uint uVar12;
  #define in_stack_ffffffdc (*(undefined4 *)(albw_frame + 0xc)) /* V4: frame slot (callee-filled) */
  
  cVar4 = func_003E46A4();
  piVar2 = DAT_00322b70;
  if (cVar4 != '\0') {
    if ((*DAT_00322b70 == 0) || (bVar5 = func_0051E4EC(*DAT_00322b70), !bVar5)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((*(int *)(*(int *)(*DAT_00322b78 + 0x112c) + 0xb0) == 0) &&
       ((*DAT_00322b7c == 0 || (*(int *)(*DAT_00322b7c + 0x9c0) == 1)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((*(int *)(*DAT_00322b74 + 0x10) == 0 && !bVar1) && !bVar5) {
      func_0010173C(1);
      func_00322BF0(param_1,extraout_r1,in_r2,in_r3);
      func_003E4D3C();
      piVar2 = DAT_00322b80;
      *(undefined1 *)(param_1 + 100) = 1;
      iVar6 = *piVar2;
      if (iVar6 != 0) {
        func_004EA128(iVar6);
      }
      uVar10 = 0;
      uVar12 = 0;
      func_001053A8((undefined4 *)0x0,(undefined1 *)0x0,0,(int *)0x0,(int *)0x0,in_stack_ffffffdc,
                    *DAT_00322b84,DAT_00322b84[1]);
      cVar4 = func_0010585C();
      if ((cVar4 == '\0') && (iVar6 = func_00104A80(), puVar3 = DAT_00322b8c, iVar6 == 0)) {
        func_0010E0E0((int *)*DAT_00322b8c);
        func_006003D8(DAT_00322b90,(int *)&stack0xffffffd8);
        func_005FF418(param_1[0x61],extraout_r1_00,uVar10);
        func_005FF760();
        *DAT_00322b94 = 0;
        pcVar11 = *(code **)(*param_1 + 0x18);
        piVar7 = (int *)(*pcVar11)(param_1,3);
        func_0057D740(piVar7);
        func_005FFC18();
        uVar8 = func_001022F4();
        uVar9 = func_0010EE40();
        func_003E35DC(uVar9,uVar8);
        func_00601390();
        func_0010E15C((int *)*puVar3);
        func_006017F0();
        func_005FF418(uVar12,extraout_r1_01,(uint)pcVar11);
        func_005FF760();
      }
      else {
        func_0014AD6C();
      }
      if (*DAT_00322b88 != 0) {
        func_004C76D4(*DAT_00322b88);
      }
      iVar6 = *piVar2;
      if (iVar6 != 0) {
        func_00294DD0(iVar6);
      }
      func_00102A2C(1);
      *(undefined1 *)(param_1 + 100) = 0;
    }
    else {
      func_00105804();
      if ((*piVar2 != 0) && (!bVar5)) {
        return func_0012E448(*piVar2);
      }
    }
  }
  return 0;
}

