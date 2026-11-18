#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_0018B874(undefined4 *param_1,float *param_2,uint param_3,undefined2 param_4, undefined4 param_5);
extern int func_003AB8DC(int param_1,int param_2);
extern int func_003AB994(int param_1,int param_2);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004CEAF0(int param_1);
extern int *DAT_0018b060;

// USA 003A2638 <- EU 003A2614 (Ghidra, non-matching)
// GLOBAL DAT_0018b060 int *

void func_003A2638(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  func_003AB994(param_1,*(int *)(param_1 + 0x34));
  func_003AB8DC(param_1,*(int *)(param_1 + 0x34));
  iVar3 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar3 + 0x80),
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30));
  func_004CEAF0(*(int *)(param_1 + 0x34));
  bVar4 = *(char *)(param_1 + 0x39) != '\0';
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x38);
  }
  if (bVar4 && cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x39) = 0;
    iVar3 = *(int *)(param_1 + 4);
    iVar3 = func_0018B874((undefined4 *)(iVar3 + 0x3d0),(float *)(iVar3 + 0x3dc),
                          *(uint *)(iVar3 + 1000),(ushort)('\x01' < *(char *)(param_1 + 0xc)),
                          *(undefined4 *)(iVar3 + 0x2cc));
    piVar2 = DAT_0018b060;
    if (iVar3 != 0) {
      func_004A9120(*DAT_0018b060,iVar3 + 0x410);
      func_004A8BFC(*piVar2,iVar3 + 0x410,3);
      *(undefined2 *)(iVar3 + 0x442) = 0x1f00;
      *(int *)(iVar3 + 0x42c) = iVar3 + 0x550;
      func_004A9120(*piVar2,iVar3 + 0x478);
      func_004A8BFC(*piVar2,iVar3 + 0x478,3);
      *(undefined2 *)(iVar3 + 0x4aa) = 0x1f00;
      *(int *)(iVar3 + 0x494) = iVar3 + 0x550;
      *(uint *)(*(int *)(iVar3 + 0x420) + 0x2c) =
           *(uint *)(*(int *)(iVar3 + 0x420) + 0x2c) | 0x40000;
      *(uint *)(*(int *)(iVar3 + 0x488) + 0x2c) =
           *(uint *)(*(int *)(iVar3 + 0x488) + 0x2c) | 0x40000;
      return;
    }
  }
  return;
}

