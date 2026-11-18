#include "ghidra_types.h"

extern int func_00100834(int param_1,char *param_2,int param_3);
extern int func_00103CBC(char *param_1);

// USA 005698CC <- EU 005698A4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:8 undefined8
// PARAM param_6 Stack[0x8]:4 undefined4

undefined4
func_005698CC(int *param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined8 param_5,
             undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define acStack_138 ((char *)(albw_frame + 0x8))
  #define local_39 (*(undefined1 *)(albw_frame + 0x107))
  if (*param_4 != '/') {
    iVar1 = func_00103CBC(param_4);
    iVar2 = func_00103CBC((char *)(param_1 + 3));
    if (0xff < (uint)(iVar1 + iVar2)) {
      return 0;
    }
    uVar3 = iVar2 + 1;
    pcVar7 = acStack_138;
    piVar5 = param_1 + 3;
    uVar8 = 0;
    if ((0xfe < uVar3) || (uVar3 != 0)) {
      pcVar6 = pcVar7;
      do {
        uVar8 = uVar8 + 1;
        pcVar7 = pcVar6 + 1;
        *pcVar6 = (char)*piVar5;
        piVar5 = (int *)((int)piVar5 + 1);
        if (*(char *)piVar5 == '\0') break;
        uVar9 = 0xff;
        if (uVar3 < 0xff) {
          uVar9 = uVar3;
        }
        pcVar6 = pcVar7;
      } while (uVar8 < uVar9);
    }
    iVar1 = iVar1 + 1;
    *pcVar7 = '\0';
    iVar2 = func_00103CBC(acStack_138);
    if (0xff < (uint)(iVar2 + iVar1)) {
      iVar1 = 0xff - iVar2;
    }
    func_00100834((int)acStack_138,param_4,iVar1);
    param_4 = acStack_138;
    local_39 = 0;
  }
  uVar4 = (**(code **)(*param_1 + 0x14))
                    (param_1,param_2,param_3,param_4,(int)param_5,(int)((ulonglong)param_5 >> 0x20),
                     param_6);
  return uVar4;
}

