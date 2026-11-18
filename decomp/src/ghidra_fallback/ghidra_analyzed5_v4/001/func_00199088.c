// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0019929C(int param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00556A74(int param_1);
extern int func_00659E20(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00199170;
extern float DAT_00199174;

// USA 00199088 <- EU 00199088 (Ghidra, non-matching)
// GLOBAL DAT_00199170 int *
// GLOBAL DAT_00199174 float

undefined4 func_00199088(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x79) & 1) != 0) {
    uVar4 = (uint)*(short *)(param_1 + 0x5e);
    iVar3 = *(int *)(param_1 + 0x1c);
    if (-1 < (int)uVar4) {
      if (uVar4 < *(uint *)(iVar3 + 8)) {
        iVar5 = *(int *)(iVar3 + 0xc) + uVar4 * 0x38;
      }
      else {
        iVar5 = *(int *)(iVar3 + 0xc);
      }
      if (*(char *)(iVar5 + 0x35) != '\0') {
        iVar5 = *(int *)(iVar3 + 0xc);
        if (uVar4 < *(uint *)(iVar3 + 8)) {
          iVar5 = iVar5 + uVar4 * 0x38;
        }
        if (*(int *)(iVar5 + 0x14) != 0x40c00000) {
          return 0;
        }
        return func_0019929C(param_1);
      }
    }
    func_00231448(param_1 + 0x5c);
    bVar2 = *(byte *)(param_1 + 0x79) & 0xfe;
LAB_00199168:
    *(byte *)(param_1 + 0x79) = bVar2;
    return 0;
  }
  cVar1 = func_00556A74(*DAT_00199170);
  if ((cVar1 == '\0') || ((*(byte *)(param_1 + 0x79) & 4) != 0)) {
    func_00659E20((undefined4 *)(param_1 + 0x20),3);
  }
  else if (*(char *)(param_1 + 0x78) != cVar1) {
    *(char *)(param_1 + 0x78) = cVar1;
    func_002317C0((undefined2 *)(param_1 + 0x5c),DAT_00199174);
    bVar2 = *(byte *)(param_1 + 0x79) | 1;
    goto LAB_00199168;
  }
  return 0;
}

