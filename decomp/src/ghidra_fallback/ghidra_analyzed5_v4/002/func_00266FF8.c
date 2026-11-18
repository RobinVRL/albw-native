#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_003C3230(int *param_1);
extern int func_003C33B0(int *param_1,uint param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern int *DAT_00267254;
extern float DAT_00267258;
extern int *DAT_0026725c;
extern int *DAT_00267260;
extern int *DAT_00267264;
extern float DAT_00267268;
extern int *DAT_0026726c;
extern int *DAT_00267270;
extern int *DAT_00267274;

// USA 00266FF8 <- EU 00267020 (Ghidra, non-matching)
// GLOBAL DAT_00267254 int *
// GLOBAL DAT_00267258 float
// GLOBAL DAT_0026725c int *
// GLOBAL DAT_00267260 int *
// GLOBAL DAT_00267264 int *
// GLOBAL DAT_00267268 float
// GLOBAL DAT_0026726c int *
// GLOBAL DAT_00267270 int *
// GLOBAL DAT_00267274 int *

undefined4 func_00266FF8(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  piVar5 = DAT_00267254 + 3;
  piVar6 = DAT_00267254 + 2;
  if (*(char *)(param_1 + 0x8cc) == '\x02') {
    iVar3 = *(int *)(param_1 + 0x974) - *(int *)(param_1 + 1000);
    iVar1 = *DAT_00267260;
    if (iVar3 < 1) {
      iVar1 = -iVar1;
      if (iVar1 < iVar3) goto LAB_002670c0;
    }
    else if (iVar3 <= iVar1) {
LAB_002670c0:
      iVar1 = iVar3;
    }
    iVar4 = *DAT_00267264;
    if (iVar3 < 1) {
      iVar4 = -iVar4;
      if (iVar4 < iVar3) goto LAB_002670ec;
    }
    else if (iVar3 <= iVar4) {
LAB_002670ec:
      iVar4 = iVar3;
    }
    fVar7 = DAT_00267258;
    func_0051D2F4((int *)(param_1 + 0xbe8),iVar1,DAT_00267254[-1],*DAT_00267254,DAT_00267258);
    func_0051D2F4((int *)(param_1 + 0xbec),iVar4,*piVar6,*piVar5,fVar7);
  }
  else if ((*(int *)(*DAT_0026725c + 0x44) != 0) || (*(char *)(param_1 + 0x8cc) == '\b')) {
    fVar7 = DAT_00267258;
    func_0051D2F4((int *)(param_1 + 0xbe8),0,DAT_00267254[-1],*DAT_00267254,DAT_00267258);
    func_0051D2F4((int *)(param_1 + 0xbec),0,*piVar6,*piVar5,fVar7);
  }
  iVar1 = func_003C33B0((int *)(param_1 + 0xbf0),1);
  if (iVar1 == 0) {
    func_003C3230((int *)(param_1 + 0xbf0));
    *(undefined4 *)(param_1 + 0xbe4) = *(undefined4 *)(param_1 + 0xc14);
    return 0;
  }
  if (*(char *)(param_1 + 0x8cc) != '\x04' && *(char *)(param_1 + 0x8cc) != '\x02') {
    return func_0051D2F4((int *)(param_1 + 0xbe4),0,DAT_0026726c[-1],*DAT_0026726c,DAT_00267268);
  }
  fVar7 = DAT_00267268;
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_34,pfVar2,(float *)(param_1 + 0x3d0));
  local_40 = local_34;
  uStack_3c = uStack_30;
  uStack_38 = uStack_2c;
  iVar3 = func_0068C690(&local_40);
  iVar3 = iVar3 - *(int *)(param_1 + 1000);
  iVar1 = *DAT_00267270;
  if (iVar3 < 1) {
    iVar1 = -iVar1;
    if (iVar1 < iVar3) goto LAB_0026722c;
  }
  else if (iVar3 <= iVar1) goto LAB_0026722c;
  iVar3 = iVar1;
LAB_0026722c:
  return func_0051D2F4((int *)(param_1 + 0xbe4),iVar3,DAT_00267274[-1],*DAT_00267274,fVar7);
}

