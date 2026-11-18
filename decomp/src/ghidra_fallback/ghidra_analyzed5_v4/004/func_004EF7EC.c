#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0016B6F4(int param_1);
extern int func_001DD34C(int param_1);
extern int func_0026110C(int param_1);
extern int func_0027170C(int param_1,char *param_2);
extern int func_002738C0(int param_1,int *param_2);
extern int func_002976F8(int param_1);
extern int func_003280C4(int param_1);
extern int func_00394794(int param_1);
extern int func_004ABA98(int param_1);
extern int func_004AD918(int param_1);
extern int func_004C5070(int param_1);
extern int func_004ED4B0(int param_1);
extern int func_00519594(int param_1);
extern int func_0051C900(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_005FF760(void);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601600(undefined4 param_1);
extern int func_006017F0(void);
extern int *DAT_004efa0c;
extern undefined4 DAT_004efa10;
extern undefined4 *DAT_004efa14;
extern int *DAT_004efa18;
extern int *DAT_004efa1c;
extern int *DAT_004efa20;
extern int *DAT_004efa24;
extern int DAT_004efa28;
extern int *DAT_004efa2c;
extern undefined4 DAT_004efa30;
extern int *DAT_004efa34;
extern int *DAT_004efa38;
extern int *DAT_004efa3c;
extern int *DAT_004efa40;
extern int *DAT_004efa44;
extern int *DAT_004efa48;
extern int *DAT_004efa4c;
extern int *DAT_004efa50;

// USA 004EF7EC <- EU 004EF7C4 (Ghidra, non-matching)
// GLOBAL DAT_004efa0c int *
// GLOBAL DAT_004efa10 undefined4
// GLOBAL DAT_004efa14 undefined4 *
// GLOBAL DAT_004efa18 int *
// GLOBAL DAT_004efa1c int *
// GLOBAL DAT_004efa20 int *
// GLOBAL DAT_004efa24 int *
// GLOBAL DAT_004efa28 int
// GLOBAL DAT_004efa2c int *
// GLOBAL DAT_004efa30 undefined4
// GLOBAL DAT_004efa34 int *
// GLOBAL DAT_004efa38 int *
// GLOBAL DAT_004efa3c int *
// GLOBAL DAT_004efa40 int *
// GLOBAL DAT_004efa44 int *
// GLOBAL DAT_004efa48 int *
// GLOBAL DAT_004efa4c int *
// GLOBAL DAT_004efa50 int *

undefined4 func_004EF7EC(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  ushort uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 extraout_r1;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int in_r3;
  int iVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  if (*(short *)(param_1 + 0x68) == 0) {
    return 0;
  }
  iVar12 = *(int *)(*DAT_004efa0c + 0x1c);
  local_28 = in_r3;
  func_005FF418(*(uint *)(iVar12 + (1 - *(int *)(iVar12 + 0x148)) * 4 + 0x128),param_2,param_3);
  func_006003D8(DAT_004efa10,&local_28);
  uVar6 = 0;
  if (local_28 != 0) {
    uVar6 = func_006017F0();
  }
  func_00601600(uVar6);
  func_005FF760();
  func_005FF418(*(uint *)(iVar12 + *(int *)(iVar12 + 0x148) * 4 + 0x128),extraout_r1,param_3);
  puVar9 = (undefined4 *)(param_1 + 0x6c);
  uVar5 = 1 - *(short *)(param_1 + 0x6a);
  if (uVar5 < 2) {
    puVar9 = puVar9 + uVar5;
  }
  *(ushort *)(param_1 + 0x6a) = uVar5;
  (**(code **)(*(int *)*puVar9 + 0x28))((int *)*puVar9);
  puVar9 = DAT_004efa14;
  piVar7 = (int *)(param_1 + 0x6c);
  if (*(ushort *)(param_1 + 0x6a) < 2) {
    piVar7 = piVar7 + *(ushort *)(param_1 + 0x6a);
  }
  if (*piVar7 == 0) {
    iVar12 = 1;
  }
  else {
    iVar12 = func_0010983C(*DAT_004efa14,*piVar7);
  }
  piVar7 = DAT_004efa18;
  func_002738C0(*DAT_004efa18,(int *)0x1);
  iVar10 = 0;
  iVar8 = *DAT_004efa1c;
  if (0 < *(int *)(iVar8 + 0x10)) {
    do {
      puVar11 = *(undefined4 **)(*(int *)(iVar8 + 0x18) + iVar10 * 4);
      iVar10 = iVar10 + 1;
      *puVar11 = *(undefined4 *)(iVar8 + 0x1c);
      *(undefined4 **)(iVar8 + 0x1c) = puVar11;
    } while (iVar10 < *(int *)(iVar8 + 0x10));
  }
  piVar2 = DAT_004efa20;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  *(undefined4 *)(iVar8 + 0x524) = 0;
  func_004AD918(*piVar2);
  piVar3 = DAT_004efa24;
  func_0051C900(*DAT_004efa24);
  cVar1 = *(char *)(param_1 + 0x18);
  bVar4 = true;
  if (cVar1 != '\x04') {
    if (cVar1 < '\x05') {
      if (cVar1 != '\0' && cVar1 != '\x02') goto LAB_004ef934;
    }
    else if (cVar1 != '\b' && cVar1 != '&') goto LAB_004ef934;
  }
  bVar4 = func_00584B94(*DAT_004efa2c,DAT_004efa28);
LAB_004ef934:
  if (*(char *)(*DAT_004efa0c + 0x25) == '\x03') {
    bVar4 = false;
  }
  *(bool *)DAT_004efa30 = bVar4;
  func_0026110C(1);
  func_004C5070(*DAT_004efa34);
  func_0027170C(*piVar7,(char *)(param_1 + 0x18));
  func_00394794(*DAT_004efa38);
  func_003280C4(*DAT_004efa3c);
  func_004ABA98(*piVar2);
  func_0016B6F4(*DAT_004efa40);
  func_001DD34C(*DAT_004efa44);
  func_004ED4B0(*DAT_004efa48);
  (**(code **)(**(int **)(*DAT_004efa4c + 0x1c0) + 0x28))(*(int **)(*DAT_004efa4c + 0x1c0));
  func_00519594(*piVar3);
  piVar7 = DAT_004efa50;
  *(undefined1 *)(param_1 + 99) = 1;
  func_002976F8(*piVar7);
  *(undefined2 *)(param_1 + 0x68) = 0;
  if (iVar12 == 1) {
    return 0;
  }
  return func_0010983C(*puVar9,iVar12);
}

