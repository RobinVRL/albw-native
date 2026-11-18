#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0014DD84(int param_1);
extern int func_0014E138(int param_1,int param_2);
extern int func_0014E460(int param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0025B874(undefined4 *param_1);
extern int func_00299C04(int *param_1,uint param_2);
extern int func_004E99C8(int param_1,float fparam_0);
extern int func_004EB36C(int param_1,float fparam_0);
extern int func_005391EC(int param_1);
extern int func_00539200(int param_1);
extern int func_00581C5C(int param_1);
extern int *DAT_00299bcc;
extern undefined4 DAT_00299bd0;
extern int DAT_00299bd4;
extern int *DAT_00299bd8;
extern float DAT_00299bdc;

// GLOBAL DAT_00299bcc int *
// GLOBAL DAT_00299bd0 undefined4
// GLOBAL DAT_00299bd4 int
// GLOBAL DAT_00299bd8 int *
// GLOBAL DAT_00299bdc float
// USA 00299924 <- EU 002999C8 (Ghidra, function missing from the decomp table)

undefined4 func_00299924(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint extraout_r1;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define auStack_88 ((undefined4 *)(albw_frame + 0x8))
  #define iStack_28 (*(int *)(albw_frame + 0x68))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x6c))
  if ((*(char *)(param_1 + 0x438) == '\x01') || (*(char *)(param_1 + 0x768) == '\0')) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x76b) = 0;
  *(undefined1 *)(param_1 + 0x76c) = 1;
  piVar1 = DAT_00299bcc;
  *(undefined1 *)(param_1 + 0x76d) = 0;
  uVar5 = 0xffffffff;
  iVar2 = func_00581C5C(*piVar1);
  if (iVar2 != 0) {
    uVar5 = *(uint *)(iVar2 + 0x3c0);
    if (*(int *)(param_1 + 0x4bc) != 0) {
      for (iVar3 = *(int *)(param_1 + 0x4b8);
          ((uint *)(iVar3 + -4) != (uint *)(param_1 + 0x4b0) &&
          (bVar6 = *(uint *)(iVar3 + -4) == uVar5, *(bool *)(param_1 + 0x76b) = bVar6, !bVar6));
          iVar3 = *(int *)(iVar3 + 4)) {
      }
    }
    if (*(int *)(param_1 + 0x764) == 1) {
      if (*(short *)(iVar2 + 0x5c) != 0) goto LAB_00299aac;
    }
    else if ((*(int *)(param_1 + 0x764) != 2) || (*(short *)(iVar2 + 0x5c) == 0)) goto LAB_00299aac;
    *(undefined1 *)(param_1 + 0x76c) = 0;
  }
LAB_00299aac:
  if (*(char *)(param_1 + 0x438) == '\x02') {
    func_0010A464(auStack_88);
    bVar6 = *(char *)(param_1 + 0x76a) != '\0';
    uVar4 = extraout_r1;
    if (!bVar6) {
      uVar4 = (uint)*(byte *)(param_1 + 0x76b);
    }
    if ((bVar6 || uVar4 != 0) ||
       (uVar5 == (int)*(short *)(param_1 + 0x54) || (int)*(short *)(param_1 + 0x54) == 0xffffffff))
    {
      uStack_24 = DAT_00299bd0;
      iStack_28 = DAT_00299bd4;
      func_001507D8(param_1,&iStack_28,(int)auStack_88);
    }
    bVar6 = func_00539200((int)auStack_88);
    piVar1 = DAT_00299bd8;
    if (bVar6) {
      iVar2 = func_005391EC((int)auStack_88);
      func_004E99C8(*piVar1,*(float *)(iVar2 + 8));
      func_004EB36C(*piVar1,*(float *)(iVar2 + 0xc));
    }
    else {
      fparam_0 = DAT_00299bdc;
      func_004E99C8(*DAT_00299bd8,DAT_00299bdc);
      func_004EB36C(*piVar1,fparam_0);
    }
    func_0025B874(auStack_88);
  }
  else {
    func_00299C04((int *)param_1,uVar5);
  }
  func_0014E138(param_1,param_2);
  if (*(char *)(param_1 + 0x76d) != '\0') {
    return func_0014E460(param_1);
  }
  return func_0014DD84(param_1);
}

