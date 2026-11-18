#include "ghidra_types.h"

extern int func_00270B6C(int *param_1,int *param_2,undefined4 param_3,uint *param_4);
extern int func_00270BF8(undefined4 *param_1);
extern int func_00270C14(int *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_00660BA4(undefined4 *param_1,undefined1 param_2);
extern int DAT_0026f4f4;
extern int DAT_0026f4f8;
extern undefined4 *DAT_0026f4fc;

// USA 0026F2F4 <- EU 0026F31C (Ghidra, non-matching)
// GLOBAL DAT_0026f4f4 int
// GLOBAL DAT_0026f4f8 int
// GLOBAL DAT_0026f4fc undefined4 *

void func_0026F2F4(int *param_1,int param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(int *)(albw_frame + 0x4))
  #define piStack_34 (*(int * *)(albw_frame + 0xc))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(int * *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  piStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  func_00270C14((int *)*param_1,param_2,param_3,param_4);
  iVar8 = 0;
  iVar6 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar8 + 0x30) = 0xff;
    iVar6 = iVar6 + 2;
    *(undefined1 *)((int)param_1 + iVar8 + 0x31) = 0xff;
    iVar4 = DAT_0026f4f4;
    iVar8 = iVar8 + 2;
  } while (iVar6 < 0x10);
  uVar12 = 0;
  do {
    uVar11 = 0;
    iVar6 = DAT_0026f4f8 + uVar12 * 0xc;
    while( true ) {
      uVar9 = *(uint *)*param_1;
      if ((int)uVar9 <= (int)uVar11) break;
      if (uVar11 < uVar9) {
        piVar7 = *(int **)(((uint *)*param_1)[2] + uVar11 * 4);
      }
      else {
        piVar7 = (int *)0x0;
      }
      piVar3 = (int *)(iVar6 + 4);
      local_3c = *piVar7;
      local_40 = iVar4;
      (**(code **)(*(int *)(iVar6 + 4) + 8))(piVar3);
      (**(code **)(*piVar3 + 8))(piVar3);
      iVar8 = *(int *)(iVar6 + 8);
      (**(code **)(local_40 + 8))(&local_40);
      if (iVar8 == local_3c) {
LAB_0026f43c:
        bVar2 = true;
      }
      else {
        iVar8 = 0;
        do {
          cVar1 = *(char *)(*(int *)(iVar6 + 8) + iVar8);
          if (cVar1 != *(char *)(local_3c + iVar8)) break;
          if (cVar1 == '\0') goto LAB_0026f43c;
          iVar8 = iVar8 + 1;
        } while (iVar8 < 0x40001);
        bVar2 = false;
      }
      if (bVar2) {
        piVar7 = param_1 + 0xc;
        if (uVar12 < 0x10) {
          piVar7 = (int *)((int)piVar7 + uVar12);
        }
        *(char *)piVar7 = (char)uVar11;
        goto LAB_0026f458;
      }
      uVar11 = uVar11 + 1;
    }
    piVar7 = param_1 + 0xc;
    if (uVar12 < 0x10) {
      piVar7 = (int *)((int)piVar7 + uVar12);
    }
    *(undefined1 *)piVar7 = 0;
LAB_0026f458:
    puVar5 = DAT_0026f4fc;
    uVar12 = uVar12 + 1;
    if (0xf < (int)uVar12) {
      if ((uint)(int)*(char *)((int)param_1 + 0x37) < *(uint *)*param_1) {
        iVar6 = *(int *)(((uint *)*param_1)[2] + *(char *)((int)param_1 + 0x37) * 4);
      }
      else {
        iVar6 = 0;
      }
      *DAT_0026f4fc = *(undefined4 *)(iVar6 + 0x54);
      puVar5[1] = *(undefined4 *)(iVar6 + 0x58);
      func_00270BF8((undefined4 *)param_1[1]);
      if (*(int *)*param_1 == 0) {
        puVar10 = (uint *)0x0;
      }
      else {
        puVar10 = *(uint **)((int *)*param_1)[2];
      }
      puVar10 = func_00270B6C((int *)param_1[1],local_2c,uStack_28,puVar10);
      *(undefined1 *)((int)puVar10 + 0x29) = 1;
      *(byte *)(param_1[1] + 0x50) = *(byte *)(param_1[1] + 0x50) & 0xfe;
      func_00660BA4(param_1 + 3,0);
      *(undefined1 *)(param_1 + 0x1c) = 1;
      return;
    }
  } while( true );
}

