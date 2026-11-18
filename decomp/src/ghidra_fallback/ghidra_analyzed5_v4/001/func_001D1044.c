#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FC94(int param_1,int param_2);
extern int func_001CFB38(int param_1,undefined4 param_2);
extern int func_001D0150(int *param_1,int param_2,float fparam_0,float fparam_1);
extern int func_001D1598(int param_1);
extern int func_004D8240(float *param_1,uint param_2,uint param_3,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern int *DAT_001d120c;
extern float DAT_001d1210;
extern float DAT_001d1214;
extern undefined4 DAT_001d1218;
extern float DAT_001d121c;
extern int *DAT_001d1220;
extern float DAT_001d1224;

// USA 001D1044 <- EU 001D1044 (Ghidra, non-matching)
// GLOBAL DAT_001d120c int *
// GLOBAL DAT_001d1210 float
// GLOBAL DAT_001d1214 float
// GLOBAL DAT_001d1218 undefined4
// GLOBAL DAT_001d121c float
// GLOBAL DAT_001d1220 int *
// GLOBAL DAT_001d1224 float

undefined4 func_001D1044(int *param_1)

{
  char cVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_38 ((float *)(albw_frame + 0x8))
  fparam_0 = DAT_001d1210;
  piVar2 = DAT_001d120c;
  piVar5 = param_1 + 0x140;
  cVar1 = (char)param_1[0x177];
  piVar6 = DAT_001d120c + -1;
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)((int)param_1 + 0x5dd);
  }
  if (bVar7 && cVar1 == '\0') {
    func_0051D2F4(param_1 + 0x16d,0,*piVar6,*DAT_001d120c,DAT_001d1210);
  }
  else {
    *(undefined1 *)(param_1 + 0x177) = 1;
    param_1[0x167] = 0x1e;
    func_001D1598((int)param_1);
    *(undefined2 *)((int)piVar5 + 0xc2) = 0;
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(afStack_38,(float *)(param_1 + 0xf4),pfVar3);
    iVar4 = func_0068C690(afStack_38);
    param_1[0x16f] = iVar4;
    func_0051D2F4(param_1 + 0xfa,iVar4,*piVar6,*piVar2,fparam_0);
    func_0051D2F4(param_1 + 0x16d,-0x20000000,*piVar6,*piVar2,fparam_0);
  }
  func_004D8240((float *)(param_1 + 0xf7),param_1[0x16d],param_1[0xfa],ALBW_AS_F32(param_1[0x171]));
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  if (ALBW_AS_F32(param_1[0x165]) + DAT_001d1214 < ALBW_AS_F32(param_1[0xf5])) {
    iVar4 = param_1[0x15c];
    if ((iVar4 != 0) && (*(char *)(iVar4 + 0x61) == '\x01')) {
      func_0014FC94((int)param_1,iVar4);
    }
  }
  else {
    func_001CFB38((int)param_1,DAT_001d1218);
  }
  if ((uint)param_1[0x167] < (uint)param_1[0x168]) {
    param_1[0x167] = param_1[0x167] + 1;
  }
  else {
    iVar4 = func_0051E6D0(*DAT_001d1220,(float *)(param_1 + 0xf4),DAT_001d121c);
    if (iVar4 != 0) {
      if (ALBW_AS_F32(param_1[0xf5]) <= ALBW_AS_F32(param_1[0x165]) + DAT_001d1224) goto LAB_001d11ec;
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  }
LAB_001d11ec:
  return func_001D0150(param_1,8,fparam_0,fparam_0);
}

