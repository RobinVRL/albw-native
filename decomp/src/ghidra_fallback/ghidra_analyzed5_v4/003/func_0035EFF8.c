// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B824(int param_1,float fparam_0);
extern int func_0025B874(undefined4 *param_1);
extern int func_004378FC(undefined4 param_1);
extern int func_00539200(int param_1);
extern int func_00666D48(undefined4 *param_1,undefined1 param_2);
extern int DAT_0035f124;
extern float DAT_0035f128;
extern float DAT_0035f12c;
extern char s_SE_MediumGanonBall_Ganon_HIT_0035f104[];

// USA 0035EFF8 <- EU 0035EFD4 (Ghidra, non-matching)
// GLOBAL DAT_0035f124 int
// GLOBAL DAT_0035f128 float
// GLOBAL DAT_0035f12c float
// GLOBAL s_SE_MediumGanonBall_Ganon_HIT_0035f104 string

undefined4 func_0035EFF8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((undefined4 *)(albw_frame + 0x8))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  if ((char)param_1[0x104] != '\x02') {
    return 0;
  }
  iVar2 = param_1[0x142];
  if (iVar2 == -2 || -iVar2 < 2) {
    if (-iVar2 < -2) {
      iVar2 = iVar2 + -2;
      goto LAB_0035f018;
    }
    param_1[0x142] = 0;
  }
  else {
    iVar2 = iVar2 + 2;
LAB_0035f018:
    param_1[0x142] = iVar2;
  }
  iVar2 = func_004378FC(param_1[0x141]);
  iVar3 = param_1[0x140];
  if (iVar2 - iVar3 < 2) {
    if (-2 < iVar2 - iVar3) {
      param_1[0x140] = iVar2;
      iVar2 = param_1[0x143];
      if (100 - iVar2 < 0x65) {
        if (-0x65 < 100 - iVar2) {
          param_1[0x143] = 100;
          goto LAB_0035f07c;
        }
        iVar2 = iVar2 + -100;
      }
      else {
        iVar2 = iVar2 + 100;
      }
      param_1[0x143] = iVar2;
      goto LAB_0035f07c;
    }
    iVar3 = iVar3 + -1;
  }
  else {
    iVar3 = iVar3 + 1;
  }
  param_1[0x140] = iVar3;
LAB_0035f07c:
  local_14 = s_SE_MediumGanonBall_Ganon_HIT_0035f104;
  local_18 = DAT_0035f124;
  func_0010A464(auStack_78);
  func_00150A84(param_1,&local_18,(int)auStack_78);
  bVar1 = func_00539200((int)auStack_78);
  if (bVar1) {
    fVar4 = (float)VectorSignedToFloat(param_1[0x140],(byte)(in_fpscr >> 0x15) & 3);
    func_0025B824((int)auStack_78,DAT_0035f12c + fVar4 * DAT_0035f128);
  }
  func_0025B874(auStack_78);
  func_00666D48(param_1 + 0x103,1);
  return 1;
}

