#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_002313DC(int param_1);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_00473028;
extern undefined1 *DAT_0047302c;
extern undefined4 *DAT_00473030;
extern int DAT_00473034;
extern int *DAT_00473040;
extern int *DAT_00473044;
extern char s_InOut_00473038[];

// USA 00472E68 <- EU 00472E40 (Ghidra, non-matching)
// GLOBAL DAT_00473028 int
// GLOBAL DAT_0047302c undefined1 *
// GLOBAL DAT_00473030 undefined4 *
// GLOBAL DAT_00473034 int
// GLOBAL DAT_00473040 int *
// GLOBAL DAT_00473044 int *
// GLOBAL s_InOut_00473038 string

int * func_00472E68(undefined4 *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 ((int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  piVar2 = func_004B9A10(param_1,0);
  iVar3 = DAT_00473028 + 0x54;
  *piVar2 = DAT_00473028;
  piVar2[0xe] = iVar3;
  puVar4 = (undefined4 *)func_0010BAB4(0x78);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0017A520(puVar4,0x400,(int *)0x0,0);
  }
  puVar4 = DAT_00473030;
  puVar1 = DAT_0047302c;
  piVar2[0x1d] = (int)puVar5;
  piVar2[0x1e] = 0;
  *puVar1 = 1;
  iVar3 = DAT_00473034;
  local_3c = (char *)*puVar4;
  local_40 = DAT_00473034;
  (**(code **)(*piVar2 + 0x38))(piVar2,&local_40,0);
  piVar8 = (int *)piVar2[7];
  func_0016773C((int)piVar8,1);
  local_3c = s_InOut_00473038;
  local_40 = iVar3;
  func_00166C20(piVar8,0,&local_40,0);
  piVar2[10] = (int)piVar8;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0xd] = (int)piVar8;
  *(undefined2 *)((int)piVar2 + 0x2e) = 0;
  *(undefined2 *)(piVar2 + 0xb) = 2;
  func_002313DC((int)(piVar2 + 8));
  local_3c = (char *)puVar4[1];
  local_40 = iVar3;
  piVar6 = (int *)func_005229AC((int *)piVar2[7],&local_40);
  piVar8 = DAT_00473040;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar8) goto LAB_00472f6c;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_00472f6c:
  piVar2[0x1e] = (int)piVar6;
  puVar5 = (undefined4 *)piVar2[0x1d];
  *puVar5 = piVar6 + 0x45;
  piVar6[0x4a] = (int)puVar5;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[3] = 0xffffffff;
  local_38[2] = 0;
  local_24 = puVar4[1];
  local_38[4] = iVar3;
  local_3c = (char *)*puVar4;
  local_40 = iVar3;
  iVar3 = func_005826A4(*DAT_00473044,local_38,&local_40,local_38 + 4);
  if (iVar3 != 0) {
    func_001788DC(piVar2[0x1d],local_38);
    iVar3 = piVar2[0x1d];
    piVar8 = (int *)piVar2[0x1e];
    *(undefined2 *)(iVar3 + 0x32) = 0;
    *(undefined1 *)(iVar3 + 0x3d) = 0;
    (**(code **)(*piVar8 + 0x60))
              (piVar8,*(undefined4 *)(piVar2[0x1d] + 8),0,*(ushort *)(piVar2[0x1d] + 0x20) >> 1);
  }
  piVar2[6] = piVar2[6] | 0x40;
  *puVar1 = 0;
  return piVar2;
}

