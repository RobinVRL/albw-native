#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003DF4BC(int param_1,int param_2);
extern int func_003DF50C(int param_1,int param_2,uint *param_3,uint param_4);
extern int func_003DF6CC(int param_1,int param_2,int param_3);
extern int func_003DFAC8(int param_1,int param_2,uint *param_3,uint param_4);
extern int DAT_003e1438;

// USA 003E125C <- EU 003E123C (Ghidra, non-matching)
// GLOBAL DAT_003e1438 int

undefined4 func_003E125C(uint *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint in_r3;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  undefined4 local_28;
  
  func_0010C0C0((int *)(param_1 + 0x1c));
  if (*(char *)((int)param_1 + 0x6f) != '\0') {
    func_003DF4BC(DAT_003e1438,*param_1 & 0xff);
    uVar5 = param_1[0xc];
    if ((uVar5 == 0) || (*(char *)(uVar5 + 0x11) != '\x04')) {
      if (0 < (short)param_1[0xd]) {
        func_003DF6CC(DAT_003e1438,*param_1 & 0xff,uVar5);
        *(undefined2 *)(param_1 + 0xd) = 1;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0xd) = 0;
    }
    *(undefined2 *)((int)param_1 + 0x36) = 0;
    uVar5 = param_1[0xc];
LAB_003e12bc:
    if (uVar5 == 0) {
      param_1[0xc] = 0;
    }
    else {
      if (*(char *)(uVar5 + 0x11) == '\x04') goto LAB_003e12d8;
      param_1[0xc] = uVar5;
      do {
        uVar4 = *(uint *)(uVar5 + 0x14);
        if ((uVar4 != 0) && (*(char *)(uVar4 + 0x11) == '\x04')) {
          *(undefined4 *)(uVar5 + 0x14) = *(undefined4 *)(uVar4 + 0x14);
          coproc_moveto_Data_Memory_Barrier(0);
          *(undefined1 *)(uVar4 + 0x11) = 3;
          uVar4 = uVar5;
        }
        uVar5 = uVar4;
      } while (uVar4 != 0);
    }
    *(undefined1 *)((int)param_1 + 0x6f) = 0;
  }
  puVar6 = (uint *)param_1[0xc];
  iVar2 = (int)(short)param_1[0xd];
  for (iVar3 = iVar2; local_28 = in_r3, iVar3 != 0 && puVar6 != (uint *)0x0; iVar3 = iVar3 + -1) {
    puVar6 = (uint *)puVar6[5];
  }
  for (; iVar2 < 5; iVar2 = iVar2 + 1) {
    puVar7 = (uint *)0x0;
    if (puVar6 != (uint *)0x0) {
      if ((short)param_1[0xd] == 0) {
        *(undefined2 *)((int)param_1 + 0x36) = 0;
        func_003DF4BC(DAT_003e1438,*param_1 & 0xff);
        *(undefined1 *)((int)puVar6 + 0x11) = 2;
        if (((uint)*(ushort *)((int)param_1 + 0x1e) << 0x1c) >> 0x1e == 2) {
          uVar5 = (uint)*(byte *)((int)param_1 + 0x6e);
          bVar8 = uVar5 == 0;
          if (bVar8) {
            uVar5 = puVar6[2];
          }
          if (!bVar8 || uVar5 != 0) {
            *(undefined1 *)((int)param_1 + 0x6e) = 1;
          }
        }
        uVar5 = local_28 >> 0x10;
        local_28 = CONCAT22((short)uVar5,*(undefined2 *)((int)param_1 + 0x1e));
        func_003DFAC8(DAT_003e1438,*param_1 & 0xff,puVar6,local_28);
      }
      else {
        func_003DF50C(DAT_003e1438,*param_1 & 0xff,puVar6,(int)*(short *)((int)param_1 + 0x36));
        sVar1 = *(short *)((int)param_1 + 0x36) + 1;
        *(short *)((int)param_1 + 0x36) = sVar1;
        if (3 < sVar1) {
          *(undefined2 *)((int)param_1 + 0x36) = 0;
        }
      }
      puVar7 = (uint *)puVar6[5];
      *(short *)(param_1 + 0xd) = (short)param_1[0xd] + 1;
    }
    puVar6 = puVar7;
  }
  return func_0010C160((int *)(param_1 + 0x1c));
LAB_003e12d8:
  coproc_moveto_Data_Memory_Barrier(0);
  *(undefined1 *)(uVar5 + 0x11) = 3;
  uVar5 = *(uint *)(uVar5 + 0x14);
  goto LAB_003e12bc;
}

