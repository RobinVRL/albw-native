#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BCAA8(int param_1);
extern int func_00583B1C(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern undefined4 uRam004da564;
extern undefined4 uRam004da568;
extern undefined4 uRam004da56c;
extern char s_Drive_004da570[];

// USA 004DA39C <- EU 004DA374 (Ghidra, non-matching)
// GLOBAL UNK_004da564 undefined4
// GLOBAL UNK_004da568 undefined4
// GLOBAL UNK_004da56c undefined4
// GLOBAL s_Drive_004da570 string

void func_004DA39C(int *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((uint *)(albw_frame + 0x8))
  #define puStack_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_58 (*(uint *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_20 (*(undefined1 *)(albw_frame + 0x60))
  if ((*(char *)((int)param_1 + 0x852) == '\x06') &&
     (iVar4 = func_00583B1C((int)param_1), iVar4 != 0)) {
    (**(code **)(*param_1 + 0xac))(param_1,7,0xffffffff);
    *(undefined1 *)((int)param_1 + 0x9b5) = 0;
    *(undefined1 *)((int)param_1 + 0x9b6) = 1;
  }
  if ((*(char *)((int)param_1 + 0x9b6) != '\0') || (bVar1 = func_00588BF0((int)param_1,0), bVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x9b5) = uVar2;
  piVar9 = (int *)param_1[0x25d];
  uVar5 = *(uint *)(param_1[0x25f] + (char)param_1[0x259] * 8 + 4);
  piVar6 = (int *)(param_1[0x25f] + (char)param_1[0x259] * 8);
  if ((uVar5 & 1) != 0) {
    piVar6 = (int *)(*piVar6 + *(int *)((int)piVar9 + ((int)uVar5 >> 1)));
  }
  (*(code *)*piVar6)();
  pcVar8 = (char *)param_1[0x25c];
  iVar4 = param_1[600] + 1;
  param_1[600] = iVar4;
  if (pcVar8 != (char *)0x0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210((int)pcVar8,1,fparam_0);
  }
  func_004BCAA8((int)param_1);
  func_004BC8D8((int)param_1);
  if (*(char *)((int)param_1 + 0x9b7) == '\0') {
    return;
  }
  if (*(char *)((int)param_1 + 0x852) != '\x06') {
    return;
  }
  uVar7 = extraout_r1;
  if ((short)param_1[0x26e] == 0x50) {
    puStack_70 = &uStack_6c;
    pcVar8 = (char *)0x3;
    auStack_78[1] = 3;
    uStack_24 = 10;
    uStack_20 = 0;
    uStack_6c = 0;
    auStack_78[0] = 1;
    uStack_68 = uRam004da568;
    uStack_64 = uRam004da564;
    uStack_60 = uRam004da56c;
    uStack_58 = (uint)piVar9 | 0xff;
    uStack_5c = uRam004da564;
    func_0016898C(param_1[0x26f],auStack_78);
    uVar7 = extraout_r1_00;
    if ((short)param_1[0x26e] != 0x50) goto LAB_004da520;
    pcVar8 = s_Drive_004da570;
    uVar7 = 0;
    if (param_1[0xd1] != 0) {
      func_004A1B9C((int *)auStack_78,param_1[0xd1],(uint *)s_Drive_004da570);
      uVar7 = extraout_r1_01;
      goto LAB_004da520;
    }
  }
  else {
LAB_004da520:
    uVar3 = *(ushort *)(param_1 + 0x26e);
    if (uVar3 < 0x50) goto LAB_004da550;
  }
  func_00169A80((int *)param_1[0x26f],uVar7,pcVar8,piVar9);
  func_00168E9C((int *)param_1[0x26f],param_1[0x1e8],(int *)0x1);
  uVar3 = *(ushort *)(param_1 + 0x26e);
  if (0x50 < uVar3) {
    return;
  }
LAB_004da550:
  *(ushort *)(param_1 + 0x26e) = uVar3 + 1;
  return;
}

