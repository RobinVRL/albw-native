#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00397400(int param_1,int param_2);
extern int func_003AB8DC(int param_1,int param_2);
extern int func_003AB994(int param_1,int param_2);
extern int func_004CEAF0(int param_1);

// USA 00397AF8 <- EU 00397AD4 (Ghidra, non-matching)

undefined4 func_00397AF8(int param_1)

{
  int iVar1;
  int extraout_r1;
  undefined4 in_r2;
  int *in_r3;
  
  if ((*(char *)(*(int *)(param_1 + 0x38) + 0x30) == '\0') &&
     (*(char *)(*(int *)(param_1 + 0x3c) + 0x30) == '\0')) {
    func_003AB994(param_1,*(int *)(param_1 + 0x34));
  }
  func_003AB8DC(param_1,*(int *)(param_1 + 0x34));
  iVar1 = *(int *)(param_1 + 0x38);
  if ((*(char *)(iVar1 + 0x30) != '\0') ||
     (iVar1 = *(int *)(param_1 + 0x3c), *(char *)(iVar1 + 0x30) != '\0')) {
    func_00397400(param_1,iVar1);
    iVar1 = extraout_r1;
  }
  func_00169A80(*(int **)(param_1 + 0x40),iVar1,in_r2,in_r3);
  func_00168E9C(*(int **)(param_1 + 0x40),*(int *)(param_1 + 0x34),(int *)0x0);
  iVar1 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar1 + 0x80),
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30));
  func_004CEAF0(*(int *)(param_1 + 0x34));
  iVar1 = *(int *)(param_1 + 0x38);
  if (*(char *)(iVar1 + 0x30) != '\0') {
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar1 + 0x80),
                  (undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                  *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30));
    func_004CEAF0(*(int *)(param_1 + 0x38));
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (*(char *)(iVar1 + 0x30) != '\0') {
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar1 + 0x80),
                  (undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                  *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30));
    return func_004CEAF0(*(int *)(param_1 + 0x3c));
  }
  return 0;
}

