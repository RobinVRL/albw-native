#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003E0D84(uint *param_1);
extern int func_003E1684(uint *param_1);
extern int func_003E16D4(int param_1,int param_2);
extern int DAT_003dc7cc;
extern uint DAT_003dc7d0;

// USA 003DC67C <- EU 003DC65C (Ghidra, non-matching)
// GLOBAL DAT_003dc7cc int
// GLOBAL DAT_003dc7d0 uint

undefined4 func_003DC67C(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  if ((*(char *)((int)param_1 + 0xe) == '\x01') && (0 < DAT_003dc7cc + param_3)) {
    param_2 = param_2 - (DAT_003dc7cc + param_3);
  }
  func_0010C0C0((int *)(param_1 + 4));
  uVar1 = DAT_003dc7d0;
  for (puVar5 = (uint *)param_1[1]; puVar5 != (uint *)0x0; puVar5 = (uint *)puVar5[10]) {
    uVar2 = puVar5[0x1a];
    if ((*(char *)(uVar2 + 0xd) == '\0') && (*(int *)(uVar2 + 0x30) != 0)) {
      iVar3 = *(int *)(uVar2 + 0x2c);
      if ((param_2 < iVar3) && (puVar5[8] != uVar1)) {
        if ((*param_1 & 1 << (*puVar5 & 0xff)) != 0) {
          if ((char)puVar5[1] != '\x01') {
            func_003E16D4((int)puVar5,1);
          }
          func_0010C0C0((int *)(param_1 + 4));
          uVar2 = puVar5[9];
          uVar4 = puVar5[10];
          if (uVar2 == 0 && uVar4 == 0) {
            param_1[1] = 0;
            param_1[2] = 0;
          }
          else {
            if ((uVar4 != 0) && (*(uint *)(uVar4 + 0x24) = uVar2, uVar2 == 0)) {
              param_1[1] = uVar4;
            }
            if ((uVar2 != 0) && (uVar4 = puVar5[10], *(uint *)(uVar2 + 0x28) = uVar4, uVar4 == 0)) {
              param_1[2] = uVar2;
            }
          }
          *param_1 = *param_1 & ~(1 << (*puVar5 & 0xff));
          *(short *)(param_1 + 3) = (short)param_1[3] + -1;
          func_0010C160((int *)(param_1 + 4));
        }
        if ((code *)puVar5[0xb] != (code *)0x0) {
          (*(code *)puVar5[0xb])(puVar5,puVar5[0xc]);
        }
      }
      else {
        func_003E0D84((uint *)puVar5[0x1a]);
        if ((char)((uint *)puVar5[0x1a])[3] == '\0') {
          func_003E1684((uint *)puVar5[0x1a]);
        }
        param_2 = param_2 - iVar3;
      }
    }
  }
  return func_0010C160((int *)(param_1 + 4));
}

