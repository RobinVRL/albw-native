#include "ghidra_types.h"

extern int func_001022F4(void);
extern int func_0010EE40(void);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_00408458(void);
extern int func_0040C38C(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5);
extern int func_00419668(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4);
extern int func_00569C64(int param_1,uint *param_2);
extern int DAT_00409f40;

// USA 00409DE4 <- EU 00409DC4 (Ghidra, non-matching)
// GLOBAL DAT_00409f40 int

/* WARNING: Variable defined which should be unmapped: objStack_68 */

undefined1 func_00409DE4(int param_1,int *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_68 ((uint *)(albw_frame + 0x8))
  #define local_60 (*(uint *)(albw_frame + 0x10))
  #define local_58 (*(uint *)(albw_frame + 0x18))
  #define auStack_4c ((uint *)(albw_frame + 0x24))
  #define local_3c (*(int *)(albw_frame + 0x34))
  iVar9 = *param_2;
  uVar7 = param_2[5];
  uVar8 = param_2[4];
  puVar10 = (undefined4 *)param_2[2];
  iVar11 = param_2[3];
  uVar13 = CONCAT44(param_2[8],param_2[1]);
  iVar3 = func_00408458();
  if (iVar3 != 0) {
    if (uVar7 != 0) {
      uVar4 = func_0010EE40();
      iVar3 = func_001022F4();
      if ((uVar8 < uVar4) || (iVar3 + uVar4 < uVar8 + uVar7)) goto LAB_00409e7c;
    }
    objStack_68[0] = (uint)((ulonglong)uVar13 >> 0x20);
    iVar3 = func_0040C38C(param_1,iVar9,puVar10,iVar11,objStack_68[0]);
    uVar12 = (undefined4)uVar13;
    if (iVar3 != 0) {
      bVar1 = func_00569C64(iVar9,auStack_4c);
      iVar3 = 0;
      if (bVar1) {
        iVar3 = local_3c;
      }
      if ((uint)(iVar3 * 0xa000) < uVar7 || iVar3 * 0xa000 - uVar7 == 0) {
        bVar1 = func_00569C64(iVar9,objStack_68);
        uVar4 = 0;
        if (bVar1) {
          uVar4 = local_58;
        }
        func_00419668((undefined4 *)(param_1 + 0xd8),uVar8,uVar7,uVar4);
        *(int *)(param_1 + 0xf0) = param_1 + 0xf4;
        uVar6 = 1;
        *(undefined4 *)(param_1 + 0x110) = uVar12;
        goto LAB_00409ec0;
      }
    }
  }
LAB_00409e7c:
  uVar6 = 0;
LAB_00409ec0:
  uVar2 = uVar6;
  if (param_2[6] != 0) {
    bVar1 = func_00569C64(*param_2,objStack_68);
    uVar2 = 0;
    if (bVar1) {
      uVar13 = func_00110710(param_2[7],local_60);
      piVar5 = *(int **)(param_1 + 0xd0);
      iVar3 = param_2[6];
      uVar2 = uVar6;
      if (piVar5 != (int *)(param_1 + 0xd0)) {
        do {
          *(int *)(DAT_00409f40 + (int)piVar5) = iVar3;
          piVar5[0xad0] = (int)uVar13;
          piVar5 = (int *)*piVar5;
          iVar3 = iVar3 + (int)uVar13;
        } while (piVar5 != (int *)(param_1 + 0xd0));
      }
    }
  }
  return uVar2;
}

