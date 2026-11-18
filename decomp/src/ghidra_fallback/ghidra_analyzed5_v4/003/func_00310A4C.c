#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002973C4(int param_1,uint param_2);
extern int func_004D1C40(int param_1,int *param_2);
extern undefined4 DAT_00310ad8;
extern undefined4 DAT_00310adc;
extern undefined4 DAT_00310ae0;
extern int DAT_00310b00;
extern int *DAT_00310b04;
extern int *DAT_00310b08;
extern int *DAT_00310b0c;
extern char s_SE_ShopManKinSta_VACUUM_PRE_00310ae4[];

// USA 00310A4C <- EU 00310A28 (Ghidra, non-matching)
// GLOBAL DAT_00310ad8 undefined4
// GLOBAL DAT_00310adc undefined4
// GLOBAL DAT_00310ae0 undefined4
// GLOBAL DAT_00310b00 int
// GLOBAL DAT_00310b04 int *
// GLOBAL DAT_00310b08 int *
// GLOBAL DAT_00310b0c int *
// GLOBAL s_SE_ShopManKinSta_VACUUM_PRE_00310ae4 string

void func_00310A4C(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  uVar3 = DAT_00310ae0;
  uVar2 = DAT_00310adc;
  uVar1 = DAT_00310ad8;
  uVar6 = *(undefined8 *)(param_1 + 2);
  iVar7 = param_1[4];
  puVar4 = (undefined4 *)param_1[0x2b9];
  *puVar4 = DAT_00310ad8;
  puVar4[1] = uVar3;
  puVar4[2] = uVar2;
  puVar4[4] = uVar1;
  puVar4[3] = uVar1;
  (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
  local_20 = DAT_00310b00;
  param_1[0xf4] = (int)uVar6;
  param_1[0xf5] = (int)((ulonglong)uVar6 >> 0x20);
  param_1[0xf6] = iVar7;
  local_1c = s_SE_ShopManKinSta_VACUUM_PRE_00310ae4;
  func_00150A84(param_1,&local_20,0);
  func_002973C4(*DAT_00310b04,0);
  if (param_1[699] != 0) {
    piVar5 = DAT_00310b08;
    if ((char)param_1[0x2ba] == '\0') {
      piVar5 = DAT_00310b0c;
    }
    func_004D1C40(param_1[699],piVar5);
  }
  return;
}

