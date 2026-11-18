#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014A354(int param_1,int param_2);
extern int func_0014A9C8(int param_1);
extern int func_0017B640(void);
extern int func_00323BCC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_00323BD8(int param_1);
extern int func_0051AA44(int param_1);
extern int func_0051BB50(int param_1);
extern int func_0053F090(int param_1);
extern int func_0058DD9C(int param_1);
extern int func_0058DFF0(int param_1);
extern int func_0058E148(int param_1);
extern int *DAT_00502af8;
extern int *DAT_00502afc;
extern int *DAT_00502b00;
extern uint *DAT_00502b04;
extern undefined4 *DAT_00502b08;
extern undefined4 DAT_00502b0c;
extern int *DAT_00502b10;
extern int *DAT_00502b14;

// USA 00502960 <- EU 00502938 (Ghidra, non-matching)
// GLOBAL DAT_00502af8 int *
// GLOBAL DAT_00502afc int *
// GLOBAL DAT_00502b00 int *
// GLOBAL DAT_00502b04 uint *
// GLOBAL DAT_00502b08 undefined4 *
// GLOBAL DAT_00502b0c undefined4
// GLOBAL DAT_00502b10 int *
// GLOBAL DAT_00502b14 int *

undefined4 func_00502960(int param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = DAT_00502afc;
  if (param_2 == 0) {
    iVar4 = func_0017B640();
    if (iVar4 == 0) {
      return 1;
    }
  }
  else if (param_2 == 1) {
    iVar4 = func_0053F090(*DAT_00502af8);
    if (iVar4 != 0) {
      return 1;
    }
  }
  else if (param_2 == 3) {
    bVar2 = func_0058E148(*DAT_00502afc);
    if (bVar2 == 0) {
      bVar2 = func_0058DD9C(*piVar3);
      if (bVar2 == 0) {
        iVar4 = func_0058DFF0(*piVar3);
        if ((iVar4 == 0) && (*(char *)(param_1 + 0x2ce) != '\0')) {
          func_0051AA44(*piVar3);
          func_0051BB50(*piVar3);
        }
        return 0xffffffff;
      }
      piVar3 = (int *)func_0014A354(*DAT_00502b00,0);
      if (((*DAT_00502b04 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00502b04), iVar4 != 0)) {
        *DAT_00502b08 = DAT_00502b0c;
      }
      if ((piVar3 == (int *)0x0) ||
         (iVar4 = (**(code **)(*piVar3 + 8))(piVar3,DAT_00502b08), iVar4 == 0)) {
        piVar3 = (int *)0x0;
      }
      piVar1 = DAT_00502b10;
      if (piVar3 != (int *)0x0) {
        func_00323BCC((int)piVar3,0x78,2,0x1e);
        func_0014A9C8(*piVar1);
        func_00323BD8((int)piVar3);
        return 1;
      }
      func_0014A9C8(*DAT_00502b10);
      return 1;
    }
  }
  else if ((param_2 == 4) &&
          ((*(char *)(*DAT_00502b14 + 0x18) == '\a' || (*(char *)(*DAT_00502b14 + 0x18) == '%')))) {
    return 1;
  }
  return 0;
}

