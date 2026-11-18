#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002508EC(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_005895C4(ushort *param_1,int param_2,int param_3);
extern int *DAT_003c2998;
extern int *DAT_003c299c;
extern float DAT_003c29a0;
extern uint *DAT_003c29a4;
extern undefined4 *DAT_003c29a8;
extern undefined4 DAT_003c29ac;
extern float DAT_003c29b0;

// USA 003C2828 <- EU 003C2804 (Ghidra, non-matching)
// GLOBAL DAT_003c2998 int *
// GLOBAL DAT_003c299c int *
// GLOBAL DAT_003c29a0 float
// GLOBAL DAT_003c29a4 uint *
// GLOBAL DAT_003c29a8 undefined4 *
// GLOBAL DAT_003c29ac undefined4
// GLOBAL DAT_003c29b0 float

int func_003C2828(undefined4 *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  
  piVar1 = DAT_003c2998;
  iVar7 = 1;
  uVar3 = *(ushort *)(param_2 + 0x20);
  bVar9 = (uVar3 & 0x7e0) == 0x1e0;
  if (bVar9) {
    uVar3 = uVar3 & 0x1f;
  }
  if (bVar9 && uVar3 == 6) {
    *(undefined1 *)((int)param_1 + 0x72) = 1;
  }
  uVar8 = *(uint *)(param_2 + 0x28);
  puVar4 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,uVar8);
  if (puVar4 != (undefined4 *)0x0) {
    iVar5 = func_00588BE4((int)puVar4);
    if (iVar5 == *DAT_003c299c) {
      iVar6 = func_005895C4((ushort *)(param_2 + 0x20),param_2 + 4,0);
      if (iVar6 == 0) {
        if (*(float *)(param_2 + 8) < DAT_003c29a0) {
          iVar7 = 0;
        }
      }
      else if (param_1[0xb] == 0) {
        fVar10 = DAT_003c29a0;
        if (((*DAT_003c29a4 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_003c29a4), iVar6 != 0))
        {
          *DAT_003c29a8 = DAT_003c29ac;
        }
        iVar6 = (**(code **)*puVar4)(puVar4,DAT_003c29a8);
        if (iVar6 == 0) {
          puVar4 = (undefined4 *)0x0;
        }
        if ((puVar4 != (undefined4 *)0x0) && (cVar2 = func_002508EC((int)puVar4), cVar2 != '\0')) {
          (**(code **)*param_1)(param_1);
          param_1[0xb] = uVar8;
          if (*(char *)((int)param_1 + 0x76) != '\0') {
            iVar6 = param_1[0xd];
            param_1[0x13] = iVar6;
            if (iVar6 == 0) {
              param_1[0x14] = ALBW_AS_U32(fVar10);
            }
            else {
              fVar10 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
              param_1[0x14] = ALBW_AS_U32(DAT_003c29b0 / fVar10);
            }
            param_1[0x12] = 0;
          }
        }
      }
    }
    if (param_1[0xe] == iVar5) {
      return 0;
    }
    if (iVar7 == 0) {
      return 0;
    }
  }
  if ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0xc0) {
    *(undefined1 *)((int)param_1 + 0x71) = 1;
  }
  return iVar7;
}

