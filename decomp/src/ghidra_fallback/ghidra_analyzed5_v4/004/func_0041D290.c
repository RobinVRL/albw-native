#include "ghidra_types.h"

extern int func_00413B34(uint param_1,int param_2);
extern int func_0041497C(int param_1);
extern int func_004149E4(int param_1);
extern int func_00417E24(void);
extern int func_00417F50(undefined4 *param_1,undefined4 *param_2);
extern int func_0056D4BC(int *param_1);

// USA 0041D290 <- EU 0041D270 (Ghidra, non-matching)

undefined4 func_0041D290(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x1a0);
  if (iVar3 != 0) {
    iVar10 = *(int *)(iVar3 + 8);
    iVar3 = 0;
    bVar1 = false;
    if (0 < iVar10) {
      do {
        iVar6 = 0;
        do {
          puVar8 = (uint *)(iVar3 * 0x30 + iVar6 * 0x18 + *(int *)(param_1 + 0xc));
          if (*(char *)((int)puVar8 + 0x11) != '\0' && *(char *)((int)puVar8 + 0x11) != '\x03') {
            uVar9 = *puVar8;
            bVar2 = func_0056D4BC(*(int **)(*(int *)(param_1 + 0xc) + 0x1a0));
            uVar4 = func_00413B34(puVar8[1],(uint)bVar2);
            if ((param_2 <= uVar4 + uVar9) && (*puVar8 <= param_3)) {
              bVar1 = true;
              break;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar10);
      if (bVar1) {
        iVar3 = *(int *)(param_1 + 0xc);
        if (*(code **)(iVar3 + 0x198) != (code *)0x0) {
          (**(code **)(iVar3 + 0x198))(iVar3,3,*(undefined4 *)(iVar3 + 0x19c));
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x198) = 0;
        }
        puVar7 = *(undefined4 **)(param_1 + 0xc);
        if (puVar7[0x68] != 0) {
          func_004149E4(puVar7[0x68]);
          func_0041497C(puVar7[0x68]);
          puVar7[0x68] = 0;
          *(undefined1 *)(puVar7 + 0x4c) = 0;
          *(undefined1 *)((int)puVar7 + 0x131) = 0;
          if ((code *)puVar7[0x66] != (code *)0x0) {
            (*(code *)puVar7[0x66])(puVar7,0,puVar7[0x67]);
          }
          if (*(char *)((int)puVar7 + 0x132) != '\0') {
            *(undefined1 *)((int)puVar7 + 0x132) = 0;
            puVar5 = func_00417E24();
            return func_00417F50(puVar5,puVar7);
          }
        }
      }
    }
  }
  return 0;
}

