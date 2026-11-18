#include "ghidra_types.h"

extern int func_00104914(undefined4 param_1);
extern int func_00104A2C(int param_1);
extern int func_00104F68(void);
extern int func_0010A7BC(int *param_1);
extern int func_004C76D4(int param_1);
extern int *DAT_002df3b8;
extern int *DAT_002df3bc;

// USA 002DF2B4 <- EU 002DF290 (Ghidra, non-matching)
// GLOBAL DAT_002df3b8 int *
// GLOBAL DAT_002df3bc int *

undefined4 func_002DF2B4(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      bVar3 = func_00104F68();
      if (!bVar3) goto LAB_002df3b0;
      cVar1 = *(char *)(param_1 + 0x14);
      bVar3 = cVar1 == '\0';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x16);
      }
      if (bVar3 && cVar1 == '\0') {
        iVar5 = *(int *)(*DAT_002df3bc + 0x112c);
        iVar4 = 0;
        if (iVar5 != 0) {
          iVar4 = *(int *)(iVar5 + 0xb0);
        }
        if (iVar5 == 0 || iVar4 == 0) {
          if (0 < *(int *)(param_1 + 0x34)) {
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
            return 0;
          }
          uVar6 = (uint)*(byte *)(param_1 + 0x15);
          if ((uVar6 == 0) && (uVar6 = 0, *(char *)(param_1 + 0x17) != '\0')) {
            func_00104A2C(1);
            func_0010A7BC((int *)(param_1 + 0x38));
            *(undefined4 *)(param_1 + 0x10) = 2;
            return 0;
          }
          func_00104914(uVar6);
          *(undefined4 *)(param_1 + 0x10) = 0;
          bVar3 = func_00104F68();
          if (!bVar3) {
            return 0;
          }
          return func_00104A2C(0);
        }
      }
      *(undefined4 *)(param_1 + 0x34) = 0xf;
    }
    else {
      if (iVar4 == 2) {
LAB_002df3b0:
        *(undefined4 *)(param_1 + 0x10) = 3;
        return 0;
      }
      if (iVar4 == 3) {
        func_00104914(3);
        piVar2 = DAT_002df3b8;
        *(undefined4 *)(param_1 + 0x10) = 0;
        if (*piVar2 != 0) {
          return func_004C76D4(*piVar2);
        }
      }
    }
  }
  return 0;
}

