#include "ghidra_types.h"

extern int func_0010AA9C(void);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_003DCC18(int param_1);
extern int func_003DCDC4(int *param_1,uint *param_2,int param_3);
extern int func_003E1068(int param_1,int param_2,ushort *param_3);
extern int DAT_003deb0c;
extern int DAT_003deb10;

// USA 003DEA2C <- EU 003DEA0C (Ghidra, non-matching)
// GLOBAL DAT_003deb0c int
// GLOBAL DAT_003deb10 int

undefined4 func_003DEA2C(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  iVar2 = func_0010AA9C();
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x1318) != '\0')) {
    uVar5 = 1;
    sVar1 = **(short **)(param_1 + (~(uint)*(ushort *)(param_1 + 0x131a) & 1) * 4 + 0x1098);
    if (sVar1 != 0) {
      uVar6 = 0;
      if (sVar1 == -1) {
        uVar5 = 2;
      }
      *(short *)(param_1 + 0x131a) = sVar1 + 1;
      if (sVar1 == -1) {
        *(undefined2 *)(param_1 + 0x131a) = uVar5;
      }
      *(ushort *)(param_1 + 0x131c) = *(ushort *)(param_1 + 0x131a) & 1;
      do {
        func_003E1068(DAT_003deb0c,uVar6,
                      *(ushort **)
                       (param_1 + (uint)*(ushort *)(param_1 + 0x131c) * 0x60 + (uVar6 & 0xff) * 4 +
                       0x1170));
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 0x18);
      uVar7 = func_00110D44((undefined4 *)(param_1 + 0x1324),
                            *(byte **)(param_1 + (uint)*(ushort *)(param_1 + 0x131c) * 4 + 0x1310),
                            0x260);
      uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
      piVar3 = *(int **)(param_1 + 0x14);
      if (piVar3 != (int *)0x0) {
        uVar6 = (uint)*(byte *)(piVar3 + 4);
      }
      if (piVar3 != (int *)0x0 && uVar6 != 0) {
        func_003DCDC4(piVar3,*(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x131c) * 4 + 0x1300),
                      0xa0);
      }
      uVar4 = func_003DCC18(DAT_003deb10);
      return uVar4;
    }
  }
  return 0;
}

