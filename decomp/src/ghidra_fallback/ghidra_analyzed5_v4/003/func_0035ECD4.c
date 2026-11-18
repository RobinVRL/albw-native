// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B824(int param_1,float fparam_0);
extern int func_0025B874(undefined4 *param_1);
extern int func_004378FC(undefined4 param_1);
extern int func_00539200(int param_1);
extern int func_00556B7C(int param_1);
extern int func_00666D48(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0035ee54;
extern int DAT_0035ee58;
extern undefined4 DAT_0035ee5c;
extern float DAT_0035ee60;
extern float DAT_0035ee64;
extern undefined4 DAT_0035ee68;

// USA 0035ECD4 <- EU 0035ECB0 (Ghidra, non-matching)
// GLOBAL DAT_0035ee54 int *
// GLOBAL DAT_0035ee58 int
// GLOBAL DAT_0035ee5c undefined4
// GLOBAL DAT_0035ee60 float
// GLOBAL DAT_0035ee64 float
// GLOBAL DAT_0035ee68 undefined4

undefined4 func_0035ECD4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(undefined4 *)(albw_frame + 0x4))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(undefined4 *)(albw_frame + 0x64))
  if ((char)param_1[0x104] != '\x01') {
    return 0;
  }
  iVar2 = func_004378FC(param_1[0x141]);
  iVar3 = param_1[0x142];
  if (iVar2 - iVar3 < 5) {
    if (iVar2 - iVar3 < -4) {
      iVar2 = iVar3 + -4;
    }
  }
  else {
    iVar2 = iVar3 + 4;
  }
  param_1[0x142] = iVar2;
  iVar2 = func_004378FC(param_1[0x141]);
  iVar3 = param_1[0x140];
  if (iVar2 - iVar3 < 2) {
    if (-2 < iVar2 - iVar3) {
      param_1[0x140] = iVar2;
      iVar2 = param_1[0x143];
      if (100 - iVar2 < 0x65) {
        if (-0x65 < 100 - iVar2) {
          param_1[0x143] = 100;
          goto LAB_0035ed54;
        }
        iVar2 = iVar2 + -100;
      }
      else {
        iVar2 = iVar2 + 100;
      }
      param_1[0x143] = iVar2;
      goto LAB_0035ed54;
    }
    iVar3 = iVar3 + -1;
  }
  else {
    iVar3 = iVar3 + 1;
  }
  param_1[0x140] = iVar3;
LAB_0035ed54:
  iVar2 = DAT_0035ee58;
  if ((((char)param_1[0x144] != '\0') || ((uint)param_1[0x12a] < (uint)param_1[299])) ||
     ((*DAT_0035ee54 != 0 && (bVar1 = func_00556B7C(*DAT_0035ee54), bVar1)))) {
    local_20 = iVar2;
    local_1c = DAT_0035ee5c;
    func_0010A464(&local_80);
    func_00150A84(param_1,&local_20,(int)&local_80);
    bVar1 = func_00539200((int)&local_80);
    if (bVar1) {
      fVar4 = (float)VectorSignedToFloat(param_1[0x140],(byte)(in_fpscr >> 0x15) & 3);
      func_0025B824((int)&local_80,DAT_0035ee64 + fVar4 * DAT_0035ee60);
    }
    func_0025B874(&local_80);
    func_00666D48(param_1 + 0x103,2);
  }
  else {
    local_7c = DAT_0035ee68;
    local_80 = iVar2;
    func_00150A84(param_1,&local_80,0);
    func_00666D48(param_1 + 0x103,3);
  }
  return 1;
}

