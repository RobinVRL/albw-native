#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00334010(int param_1);
extern int func_004F4A68();
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_00356718;
extern int *DAT_0035671c;
extern int DAT_00356720;
extern int DAT_00356724;
extern uint *DAT_00356728;
extern undefined4 DAT_0035672c;
extern undefined4 *DAT_00356730;
extern uint DAT_00356734;
extern int DAT_00356738;

// USA 00356578 <- EU 00356554 (Ghidra, non-matching)
// GLOBAL DAT_00356718 int *
// GLOBAL DAT_0035671c int *
// GLOBAL DAT_00356720 int
// GLOBAL DAT_00356724 int
// GLOBAL DAT_00356728 uint *
// GLOBAL DAT_0035672c undefined4
// GLOBAL DAT_00356730 undefined4 *
// GLOBAL DAT_00356734 uint
// GLOBAL DAT_00356738 int

undefined4 func_00356578(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(uint *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  piVar7 = DAT_00356718;
  iVar4 = func_0052FBA0(*DAT_00356718 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  uVar6 = DAT_0035672c;
  puVar2 = DAT_00356728;
  piVar1 = DAT_0035671c;
  if (*(char *)(param_1 + 0xa60) == '\x06') {
    uVar3 = *(ushort *)(DAT_00356720 + param_1);
    bVar11 = uVar3 < 2;
    if (bVar11) {
      uVar3 = (ushort)*(byte *)(param_1 + 0x9f0);
    }
    if ((bVar11 && uVar3 == 1) && (iVar10 = *piVar7, iVar10 != 0)) {
      piVar7 = *(int **)(DAT_00356724 + iVar10);
      piVar8 = *(int **)(DAT_00356724 + 8 + iVar10);
      while ((piVar7 != piVar8 &&
             (piVar7 = (int *)func_005841A8(iVar10,*piVar1,piVar7), piVar7 != piVar8))) {
        puVar9 = (undefined4 *)*piVar7;
        if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00356728), iVar5 != 0)) {
          *DAT_00356730 = uVar6;
        }
        if ((puVar9 == (undefined4 *)0x0) ||
           (iVar5 = (**(code **)*puVar9)(puVar9,DAT_00356730), iVar5 == 0)) {
          puVar9 = (undefined4 *)0x0;
        }
        if (puVar9 != (undefined4 *)0x0) {
          func_00115C70(&local_30,(float *)(puVar9 + 0xf4),(float *)(param_1 + 0x3d0));
          if ((((int)local_2c < 0x3f800000) && (local_2c < DAT_00356734)) &&
             ((int)ALBW_AS_U32((local_30 * local_30 + local_28 * local_28)) < (int)(DAT_00356734 + 0x81000000)))
          {
            func_00334010((int)puVar9);
          }
          piVar7 = piVar7 + 1;
        }
      }
    }
  }
  if (*(int *)(param_2 + 8) < DAT_00356738) {
    if ((iVar4 != 0) && (iVar4 = func_00588BE4(iVar4), iVar4 == *piVar1)) {
      return 0;
    }
    func_00115C54((float *)(param_1 + 0xb74),(float *)(param_1 + 0xb74),(float *)(param_2 + 4));
  }
  uVar6 = func_004F4A68(param_1,param_2);
  return uVar6;
}

