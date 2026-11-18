#include "ghidra_types.h"

extern int func_004CA164(int *param_1);
extern int func_004CB500(int param_1);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern int DAT_004c9290;

// USA 004C91C8 <- EU 004C91A0 (Ghidra, non-matching)
// GLOBAL DAT_004c9290 int

undefined4 func_004C91C8(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  *(char *)((int)param_1 + 0x8e5) = (char)param_2;
  iVar1 = DAT_004c9290;
  if (param_2 == 0) {
    param_1[0x244] = 0x3c;
    param_1[0x245] = iVar1;
    param_1[0x243] = 0;
  }
  else if ((param_2 == 4 || param_2 == 1) || param_2 == 3) goto LAB_004c91d0;
  if (*(char *)((int)param_1 + 0x98e) != '\0') {
    param_2 = 2;
  }
LAB_004c91d0:
  piVar2 = param_1 + 0x22f;
  switch(param_2) {
  case 0:
  case 4:
    if (*(char *)((int)param_1 + 0x98e) == '\0') {
      if ((char)param_1[0x25e] != '\0') {
        return func_004CB500((int)param_1);
      }
      return func_0066A284(piVar2,4);
    }
switchD_004c91dc_caseD_2:
    return func_004CA164(param_1);
  default:
    return func_0066A284(piVar2,0);
  case 2:
    goto switchD_004c91dc_caseD_2;
  case 3:
    if ((char)param_1[0x239] != '\x01') {
      return func_0066A284(piVar2,5);
    }
    return func_0066A284(piVar2,0xd);
  }
}

