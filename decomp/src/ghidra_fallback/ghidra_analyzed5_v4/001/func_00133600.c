#include "ghidra_types.h"

extern int func_0010DB90(void);
extern int func_003FA0B0(int *param_1,int param_2,int param_3);
extern int func_003FA1C8(int *param_1,int param_2,int param_3);
extern int func_003FA2E0(int *param_1,int param_2,int param_3);
extern int func_003FA3F4(int *param_1,int param_2,int param_3);
extern int func_003FB084(int *param_1,int param_2,int param_3);
extern int func_003FB198(int *param_1,int param_2,uint param_3);
extern int func_005675BC(int param_1,int *param_2,int *param_3);
extern undefined4 DAT_0013378c;

// USA 00133600 <- EU 00133600 (Ghidra, non-matching)
// GLOBAL DAT_0013378c undefined4

undefined4 func_00133600(int *param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)func_0010DB90();
  }
  *param_1 = param_4;
  iVar4 = *(int *)(param_4 + 0x10);
  iVar2 = (**(code **)(*param_2 + 0x18))(param_2,iVar4 << 1,4);
  func_003FA3F4(param_1 + 2,iVar2,iVar4);
  if (*(char *)(param_4 + 5) == '\x01') {
    uVar3 = 0;
    if (*(uint *)(param_4 + 0x10) != 0) {
      do {
        if (*(short *)(*(int *)(*(int *)(param_4 + 0xc) + uVar3 * 4) + 6) == 6) {
          uVar3 = *(uint *)(param_4 + 0x1c);
          iVar2 = (**(code **)(*param_2 + 0x18))(param_2,uVar3 << 2,4);
          func_003FB198(param_1 + 4,iVar2,uVar3);
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_4 + 0x10));
    }
  }
  if (param_3 != 0) {
    param_1[1] = param_3;
    iVar2 = *param_1;
    iVar4 = *(int *)(param_3 + 8);
    cVar1 = *(char *)(iVar2 + 5);
    if (cVar1 == '\0') {
      return func_003FA1C8(param_1 + 2,iVar2,iVar4);
    }
    if (cVar1 == '\x01') {
      func_003FA0B0(param_1 + 2,iVar2,iVar4);
      uVar3 = 0;
      if (*(uint *)(iVar2 + 0x10) != 0) {
        do {
          if (*(short *)(*(int *)(*(int *)(iVar2 + 0xc) + uVar3 * 4) + 6) == 6) {
            func_003FB084(param_1 + 4,iVar2,*(int *)(param_3 + 4));
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(iVar2 + 0x10));
      }
      return func_005675BC(iVar2,*(int **)(param_3 + 0x24),param_1 + 2);
    }
    if (cVar1 == '\x02') {
      return func_003FA2E0(param_1 + 2,iVar2,iVar4);
    }
  }
  return 0;
}

