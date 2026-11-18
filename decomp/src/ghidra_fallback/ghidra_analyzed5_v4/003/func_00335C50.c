#include "ghidra_types.h"

extern int func_002ACC68(undefined4 *param_1);
extern int func_00325308(int *param_1);
extern int func_00520EE4(int param_1);
extern int func_0052107C(int param_1);
extern int func_0054E044(int param_1);
extern int func_0054E67C(void);
extern int func_0054EA0C(int *param_1);
extern int func_00588BE4(int param_1);
extern int func_006658F8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00335d7c;

// USA 00335C50 <- EU 00335C2C (Ghidra, non-matching)
// GLOBAL DAT_00335d7c int *

undefined4 func_00335C50(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = func_0054E044((int)param_1);
  if ((bVar2) && (iVar3 = func_0054EA0C(param_1), iVar3 != 0)) {
    *(undefined1 *)(param_1 + 0x133) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x133) = 0;
  }
  bVar2 = func_0052107C((int)param_1);
  if (bVar2) {
    iVar3 = func_00520EE4((int)param_1);
    if ((iVar3 == 0) &&
       (((param_1[0xe7] & 0x80U) == 0 ||
        (cVar1 = *(char *)((int)param_1 + 0x392),
        (cVar1 != '\v' && cVar1 != '\x06') && cVar1 != '\f')))) {
LAB_00335d00:
      bVar2 = func_0054E044((int)param_1);
      if (!bVar2) {
        return 0;
      }
      iVar3 = func_0054E67C();
      if (iVar3 == 0) {
        return 0;
      }
      func_00325308(param_1);
      iVar3 = (**(code **)(*param_1 + 0x5c))(param_1);
      if (iVar3 != 0) {
        return func_006658F8(param_1 + 0x141,1);
      }
      *(undefined1 *)(param_1 + 0x133) = 1;
      param_1[0x11e] = param_1[0x121];
      param_1[0x11f] = param_1[0x122];
      param_1[0x120] = param_1[0x123];
      return 0;
    }
  }
  else {
    bVar2 = func_002ACC68(param_1 + 0xf4);
    if (!bVar2) goto LAB_00335d00;
  }
  iVar3 = func_00588BE4((int)param_1);
  if ((iVar3 != *DAT_00335d7c) || (param_1[0x14a] == 0)) {
    func_006658F8(param_1 + 0x141,3);
  }
  return 0;
}

