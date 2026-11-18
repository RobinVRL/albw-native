#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_005416A0(int param_1);
extern int func_00556068(int param_1);
extern int *DAT_00503140;
extern uint *DAT_00503144;
extern undefined4 DAT_00503148;
extern undefined4 *DAT_0050314c;

// USA 00503064 <- EU 0050303C (Ghidra, non-matching)
// GLOBAL DAT_00503140 int *
// GLOBAL DAT_00503144 uint *
// GLOBAL DAT_00503148 undefined4
// GLOBAL DAT_0050314c undefined4 *

void func_00503064(int *param_1)

{
  byte bVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  if (param_1[0xb8] != 0) {
    puVar5 = func_00556068(param_1[0xb8]);
    uVar4 = DAT_00503148;
    puVar3 = DAT_00503144;
    piVar2 = DAT_00503140;
    bVar1 = *(byte *)(puVar5 + 0x17);
    iVar8 = 0;
    if (bVar1 != 0) {
      do {
        puVar5 = func_00556068(param_1[0xb8]);
        iVar7 = (int)*(short *)((int)puVar5 + iVar8 * 6 + 0x5e);
        if ((0 < iVar7) &&
           (puVar5 = (undefined4 *)func_0052FBDC(*piVar2 + 0x3dbbc,iVar7,0),
           puVar5 != (undefined4 *)0x0)) {
          if (((*puVar3 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_00503144), iVar7 != 0)) {
            *DAT_0050314c = uVar4;
          }
          iVar7 = (**(code **)*puVar5)(puVar5,DAT_0050314c);
          puVar6 = (undefined4 *)0x0;
          if (iVar7 != 0) {
            puVar6 = puVar5;
          }
          if ((puVar6 != (undefined4 *)0x0) && (iVar7 = func_005416A0((int)puVar6), iVar7 != 0)) {
            iVar8 = (**(code **)(*param_1 + 0x40))(param_1);
            *(undefined1 *)(iVar8 + 0xdb) = 1;
            return;
          }
        }
        iVar8 = iVar8 + 1;
        if ((int)(uint)bVar1 <= iVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

