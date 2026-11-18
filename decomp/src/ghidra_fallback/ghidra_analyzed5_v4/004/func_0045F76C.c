#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0031B6A0(int param_1,int param_2,int param_3);
extern uint DAT_0045f888;

// USA 0045F76C <- EU 0045F744 (Ghidra, non-matching)
// GLOBAL DAT_0045f888 uint

void func_0045F76C(int param_1)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  
  iVar8 = 0;
  uVar9 = (ulonglong)DAT_0045f888;
  uVar7 = (int)*(char *)(param_1 + 0x124) - 5;
  if ((int)uVar7 < 0) {
    uVar7 = uVar7 + *(int *)(param_1 + 0xd0);
  }
  do {
    if (uVar7 < *(uint *)(param_1 + 0xd0)) {
      iVar4 = *(int *)(param_1 + 0xcc) + uVar7;
      if (*(int *)(param_1 + 200) <= iVar4) {
        iVar4 = iVar4 - *(int *)(param_1 + 200);
      }
      pcVar5 = (char *)(*(int *)(param_1 + 0xc4) + iVar4 * 2);
    }
    else {
      pcVar5 = *(char **)(param_1 + 0xc4);
    }
    if (uVar7 < *(uint *)(param_1 + 0xd0)) {
      iVar4 = *(int *)(param_1 + 0xcc) + uVar7;
      if (*(int *)(param_1 + 200) <= iVar4) {
        iVar4 = iVar4 - *(int *)(param_1 + 200);
      }
      iVar4 = *(int *)(param_1 + 0xc4) + iVar4 * 2;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xc4);
    }
    iVar6 = *(int *)(param_1 + 0x98 + iVar8 * 4);
    cVar1 = *pcVar5;
    cVar2 = *(char *)(iVar4 + 1);
    func_0031B6A0(iVar6 + 0x20,(int)cVar1,0);
    *(char *)(iVar6 + 0x88) = cVar1;
    if (cVar1 == -1 && cVar2 == '\0') {
      uVar3 = 3;
    }
    else {
      uVar3 = 2;
    }
    *(undefined4 *)(iVar6 + 0x84) = *(undefined4 *)(iVar6 + 0x1c);
    *(undefined2 *)(iVar6 + 0x7e) = uVar3;
    *(undefined2 *)(iVar6 + 0x7c) = 0;
    func_002317C0((undefined2 *)(iVar6 + 0x7c),ALBW_AS_F32(uVar9));
    func_00231448(iVar6 + 0x70);
    *(undefined4 *)(iVar6 + 0x78) = *(undefined4 *)(iVar6 + 0x1c);
    *(undefined2 *)(iVar6 + 0x72) = 0;
    *(undefined2 *)(iVar6 + 0x70) = 2;
    func_002317C0((undefined2 *)(iVar6 + 0x70),ALBW_AS_F32(uVar9));
    func_00231340((short *)(iVar6 + 0x70));
    uVar7 = uVar7 + 1;
    iVar8 = iVar8 + 1;
    if (*(int *)(param_1 + 0xd0) <= (int)uVar7) {
      uVar7 = 0;
    }
  } while (iVar8 != 0xb);
  return;
}

